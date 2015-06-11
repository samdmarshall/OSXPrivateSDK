/*
 * Copyright (c) 2000-2014 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 *
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */
/* Copyright (c) 1998, 1999 Apple Computer, Inc. All Rights Reserved */
/* Copyright (c) 1995 NeXT Computer, Inc. All Rights Reserved */
/*
 * Copyright (c) 1982, 1986, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *	This product includes software developed by the University of
 *	California, Berkeley and its contributors.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	@(#)protosw.h	8.1 (Berkeley) 6/2/93
 * $FreeBSD: src/sys/sys/protosw.h,v 1.28.2.2 2001/07/03 11:02:01 ume Exp $
 */

#ifndef _SYS_PROTOSW_H_
#define	_SYS_PROTOSW_H_

#include <sys/appleapiopts.h>
#include <sys/cdefs.h>

/* XXX: this will go away */
#define	PR_SLOWHZ	2		/* 2 slow timeouts per second */

#include <sys/socket.h>
#include <sys/socketvar.h>
#include <sys/queue.h>
#include <kern/locks.h>

/* Forward declare these structures referenced from prototypes below. */
struct mbuf;
struct proc;
struct sockaddr;
struct socket;
struct sockopt;
struct socket_filter;

#pragma pack(4)

struct protosw {
	short	pr_type;		/* socket type used for */
	struct	domain *pr_domain;	/* domain protocol a member of */
	short	pr_protocol;		/* protocol number */
	unsigned int pr_flags;		/* see below */
	/*
	 * protocol-protocol hooks
	 */
	void	(*pr_input)		/* input to protocol (from below) */
		    (struct mbuf *, int len);
	int	(*pr_output)		/* output to protocol (from above) */
		    (struct mbuf *m, struct socket *so);
	void	(*pr_ctlinput)		/* control input (from below) */
		    (int, struct sockaddr *, void *);
	int	(*pr_ctloutput)		/* control output (from above) */
		    (struct socket *, struct sockopt *);
	/*
	 * user-protocol hook
	 */
	void	*pr_ousrreq;
	/*
	 * utility hooks
	 */
	void	(*pr_init)(void);	/* initialization hook */
	void	(*pr_unused)(void);	/* placeholder - fasttimo is removed */
	void	(*pr_unused2)(void);	/* placeholder - slowtimo is removed */
	void	(*pr_drain)(void);	/* flush any excess space possible */
	int	(*pr_sysctl)		/* sysctl for protocol */
		    (int *, u_int, void *, size_t *, void *, size_t);
	struct	pr_usrreqs *pr_usrreqs;	/* supersedes pr_usrreq() */
	int	(*pr_lock)		/* lock function for protocol */
		    (struct socket *so, int locktype, void *debug);
	int	(*pr_unlock)		/* unlock for protocol */
		    (struct socket *so, int locktype, void *debug);
	lck_mtx_t *(*pr_getlock)	/* retrieve protocol lock */
		    (struct socket *so, int locktype);
	/*
	 * Implant hooks
	 */
	TAILQ_HEAD(, socket_filter) pr_filter_head;
	struct protosw *pr_next;	/* chain for domain */
	u_int32_t	reserved[1];	/* padding for future use */
};

#pragma pack()


/*
 * Values for pr_flags.
 * PR_ADDR requires PR_ATOMIC;
 * PR_ADDR and PR_CONNREQUIRED are mutually exclusive.
 * PR_IMPLOPCL means that the protocol allows sendto without prior connect,
 *	and the protocol understands the MSG_EOF flag.  The first property is
 *	is only relevant if PR_CONNREQUIRED is set (otherwise sendto is allowed
 *	anyhow).
 */
#define	PR_ATOMIC	0x01	/* exchange atomic messages only */
#define	PR_ADDR		0x02	/* addresses given with messages */
#define	PR_CONNREQUIRED	0x04	/* connection required by protocol */
#define	PR_WANTRCVD	0x08	/* want PRU_RCVD calls */
#define	PR_RIGHTS	0x10	/* passes capabilities */
#define	PR_IMPLOPCL	0x20	/* implied open/close */
#define	PR_LASTHDR	0x40	/* enforce ipsec policy; last header */
#define	PR_PROTOLOCK	0x80	/* protocol takes care of it's own locking */
#define	PR_PCBLOCK	0x100	/* protocol supports per pcb locking */
#define	PR_DISPOSE	0x200	/* protocol requires late lists disposal */


struct ifnet;
struct stat;
struct ucred;
struct uio;

struct pr_usrreqs {
	int	(*pru_abort)(struct socket *so);
	int	(*pru_accept)(struct socket *so, struct sockaddr **nam);
	int	(*pru_attach)(struct socket *so, int proto, struct proc *p);
	int	(*pru_bind)(struct socket *so, struct sockaddr *nam,
		    struct proc *p);
	int	(*pru_connect)(struct socket *so, struct sockaddr *nam,
		    struct proc *p);
	int	(*pru_connect2)(struct socket *so1, struct socket *so2);
	int	(*pru_control)(struct socket *so, u_long cmd, caddr_t data,
		    struct ifnet *ifp, struct proc *p);
	int	(*pru_detach)(struct socket *so);
	int	(*pru_disconnect)(struct socket *so);
	int	(*pru_listen)(struct socket *so, struct proc *p);
	int	(*pru_peeraddr)(struct socket *so, struct sockaddr **nam);
	int	(*pru_rcvd)(struct socket *so, int flags);
	int	(*pru_rcvoob)(struct socket *so, struct mbuf *m, int flags);
	int	(*pru_send)(struct socket *so, int flags, struct mbuf *m,
		    struct sockaddr *addr, struct mbuf *control,
		    struct proc *p);
	int	(*pru_sense)(struct socket *so, void  *sb, int isstat64);
	int	(*pru_shutdown)(struct socket *so);
	int	(*pru_sockaddr)(struct socket *so, struct sockaddr **nam);
	int	(*pru_sosend)(struct socket *so, struct sockaddr *addr,
		    struct uio *uio, struct mbuf *top, struct mbuf *control,
		    int flags);
	int	(*pru_soreceive)(struct socket *so, struct sockaddr **paddr,
		    struct uio *uio, struct mbuf **mp0, struct mbuf **controlp,
		    int *flagsp);
	int	(*pru_sopoll)(struct socket *so, int events,
		    struct ucred *cred, void *);
};


__BEGIN_DECLS
extern int pru_abort_notsupp(struct socket *so);
extern int pru_accept_notsupp(struct socket *so, struct sockaddr **nam);
extern int pru_attach_notsupp(struct socket *so, int proto, struct proc *p);
extern int pru_bind_notsupp(struct socket *so, struct sockaddr *nam,
    struct proc *p);
extern int pru_connect_notsupp(struct socket *so, struct sockaddr *nam,
    struct proc *p);
extern int pru_connect2_notsupp(struct socket *so1, struct socket *so2);
extern int pru_control_notsupp(struct socket *so, u_long cmd, caddr_t data,
    struct ifnet *ifp, struct proc *p);
extern int pru_detach_notsupp(struct socket *so);
extern int pru_disconnect_notsupp(struct socket *so);
extern int pru_listen_notsupp(struct socket *so, struct proc *p);
extern int pru_peeraddr_notsupp(struct socket *so, struct sockaddr **nam);
extern int pru_rcvd_notsupp(struct socket *so, int flags);
extern int pru_rcvoob_notsupp(struct socket *so, struct mbuf *m, int flags);
extern int pru_send_notsupp(struct socket *so, int flags, struct mbuf *m,
    struct sockaddr *addr, struct mbuf *control, struct proc *p);
extern int pru_send_list_notsupp(struct socket *so, int flags, struct mbuf *m,
    struct sockaddr *addr, struct mbuf *control, struct proc *p);
extern int pru_sense_null(struct socket *so, void * sb, int isstat64);
extern int pru_shutdown_notsupp(struct socket *so);
extern int pru_sockaddr_notsupp(struct socket *so, struct sockaddr **nam);
extern int pru_sosend_notsupp(struct socket *so, struct sockaddr *addr,
    struct uio *uio,  struct mbuf *top, struct mbuf *control, int flags);
extern int pru_sosend_list_notsupp(struct socket *so, struct sockaddr *addr,
    struct uio **uio, u_int, struct mbuf *top, struct mbuf *control, int flags);
extern int pru_soreceive_notsupp(struct socket *so,
    struct sockaddr **paddr, struct uio *uio, struct mbuf **mp0,
    struct mbuf **controlp, int *flagsp);
extern int pru_soreceive_list_notsupp(struct socket *so,
    struct sockaddr **paddr, struct uio **uio, u_int, struct mbuf **mp0,
    struct mbuf **controlp, int *flagsp);
extern int pru_sopoll_notsupp(struct socket *so, int events,
    struct ucred *cred, void *);
extern int net_add_proto(struct protosw *, struct domain *);
extern int net_del_proto(int, int, struct domain *);
extern struct protosw *pffindproto(int family, int protocol, int type);
__END_DECLS
#endif	/* !_SYS_PROTOSW_H_ */
