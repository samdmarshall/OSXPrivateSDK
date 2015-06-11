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
/*-
 * Copyright (c) 1982, 1986, 1990, 1993
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
 *	@(#)socketvar.h	8.3 (Berkeley) 2/19/95
 * $FreeBSD: src/sys/sys/socketvar.h,v 1.46.2.6 2001/08/31 13:45:49 jlemon Exp $
 */
/*
 * NOTICE: This file was modified by SPARTA, Inc. in 2005 to introduce
 * support for mandatory and extensible security protections.  This notice
 * is included in support of clause 2.2 (b) of the Apple Public License,
 * Version 2.0.
 */

#ifndef _SYS_SOCKETVAR_H_
#define	_SYS_SOCKETVAR_H_

#include <sys/appleapiopts.h>
#include <sys/cdefs.h>
#include <sys/queue.h>			/* for TAILQ macros */
#include <sys/select.h>			/* for struct selinfo */
#include <net/kext_net.h>
#include <sys/ev.h>
#include <uuid/uuid.h>

typedef	u_quad_t so_gen_t;

struct mbuf;
struct socket_filter_entry;
struct protosw;
struct sockif;
struct sockutil;

/* strings for sleep message: */
extern	char netio[], netcon[], netcls[];
#define	SOCKET_CACHE_ON
#define	SO_CACHE_FLUSH_INTERVAL 1	/* Seconds */
#define	SO_CACHE_TIME_LIMIT	(120/SO_CACHE_FLUSH_INTERVAL) /* Seconds */
#define	SO_CACHE_MAX_FREE_BATCH	50
#define	MAX_CACHED_SOCKETS	512
#define	TEMPDEBUG		0

#define SO_TC_STATS_MAX 4

struct data_stats {
        u_int64_t       rxpackets;
        u_int64_t       rxbytes;
        u_int64_t       txpackets;
        u_int64_t       txbytes;
};

#define MSG_PRI_0 0	/* TCP message priority, lowest */
#define MSG_PRI_1 1
#define MSG_PRI_2 2
#define MSG_PRI_3 3	/* TCP message priority, highest */
#define MSG_PRI_MAX MSG_PRI_3
#define MSG_PRI_MIN MSG_PRI_0
#define MSG_PRI_COUNT 4
#define MSG_PRI_DEFAULT MSG_PRI_1

/* State for TCP message send or receive */
struct msg_priq {
	struct mbuf *msgq_head; /* first mbuf in the queue */
	struct mbuf *msgq_tail; /* last mbuf in the queue */
	struct mbuf *msgq_lastmsg; /* last message in the queue */
	u_int32_t msgq_flags;	/* flags per priority queue */
#define MSGQ_MSG_NOTDONE 0x1	/* set when EOR of a msg is not seen */
	u_int32_t msgq_bytes;	/* data bytes in this queue */
};

struct msg_state {
	struct msg_priq msg_priq[MSG_PRI_COUNT]; /* priority queues */
	u_int32_t msg_serial_bytes; /* bytes moved to serial queue */
	u_int32_t msg_uno_bytes; /* out-of-order chars in rcv buffer */
};

/* mbuf flag used to indicate out of order data received */
#define M_UNORDERED_DATA M_PROTO1

/*
 * Kernel structure per socket.
 * Contains send and receive buffer queues,
 * handle on protocol and pointer to protocol
 * private data and error information.
 */
struct socket {
	int	so_zone;		/* zone we were allocated from */
	short	so_type;		/* generic type, see socket.h */
	u_int32_t so_options;		/* from socket call, see socket.h */
	short	so_linger;		/* time to linger while closing */
	short	so_state;		/* internal state flags SS_*, below */
	void	*so_pcb;		/* protocol control block */
	struct	protosw *so_proto;	/* protocol handle */
	/*
	 * Variables for connection queueing.
	 * Socket where accepts occur is so_head in all subsidiary sockets.
	 * If so_head is 0, socket is not related to an accept.
	 * For head socket so_incomp queues partially completed connections,
	 * while so_comp is a queue of connections ready to be accepted.
	 * If a connection is aborted and it has so_head set, then
	 * it has to be pulled out of either so_incomp or so_comp.
	 * We allow connections to queue up based on current queue lengths
	 * and limit on number of queued connections for this socket.
	 */
	struct	socket *so_head;	/* back pointer to accept socket */
	TAILQ_HEAD(, socket) so_incomp;	/* q of partially unaccepted conns */
	TAILQ_HEAD(, socket) so_comp;	/* q of complete unaccepted conns */
	TAILQ_ENTRY(socket) so_list;	/* list of unaccepted connections */
	short	so_qlen;		/* number of unaccepted connections */
	short	so_incqlen;		/* number of unaccepted incomplete
					   connections */
	short	so_qlimit;		/* max number queued connections */
	short	so_timeo;		/* connection timeout */
	u_short	so_error;		/* error affecting connection */
	pid_t	so_pgid;		/* pgid for signals */
	u_int32_t so_oobmark;		/* chars to oob mark */
	/*
	 * Variables for socket buffering.
	 */
	struct sockbuf {
		u_int32_t	sb_cc;		/* actual chars in buffer */
		u_int32_t	sb_hiwat;	/* max actual char count */
		u_int32_t	sb_mbcnt;	/* chars of mbufs used */
		u_int32_t	sb_mbmax;	/* max chars of mbufs to use */
		u_int32_t	sb_ctl;		/* non-data chars in buffer */
		u_int32_t	sb_lowat;	/* low water mark */
		struct mbuf	*sb_mb;		/* the mbuf chain */
		struct mbuf	*sb_mbtail;	/* the last mbuf in the chain */
		struct mbuf	*sb_lastrecord;	/* first mbuf of last record */
		struct socket	*sb_so;		/* socket back ptr for kexts */
		struct selinfo	sb_sel;		/* process selecting rd/wr */
		u_int32_t	sb_flags;	/* flags, see below */
		struct timeval	sb_timeo;	/* timeout for read/write */
		u_int32_t	sb_idealsize;	/* Ideal size for the sb based
						   on bandwidth and delay */
		void	(*sb_upcall)(struct socket *, void *arg, int waitf);
		void	*sb_upcallarg;		/* Arg for above */
		u_int32_t	sb_wantlock;	/* # of SB_LOCK waiters */
		u_int32_t	sb_waiters;	/* # of data/space waiters */
		thread_t	sb_cfil_thread;	/* content filter thread */
		u_int32_t	sb_cfil_refs;	/* # of nested calls */
	} so_rcv, so_snd;
#define	SB_MAX		(8192*1024)	/* default for max chars in sockbuf */
#define LOW_SB_MAX	(2*9*1024)	/* lower limit on max socket buffer
					   size, 2 max datagrams */
#define	SB_LOCK		0x1		/* lock on data queue */
#define	SB_NOINTR	0x2		/* operations not interruptible */
#define	SB_RECV		0x4		/* this is rcv sb */
#define	SB_SEL		0x8		/* someone is selecting */
#define	SB_ASYNC	0x10		/* ASYNC I/O, need signals */
#define	SB_UPCALL	0x20		/* someone wants an upcall */
#define	SB_KNOTE	0x40		/* kernel note attached */
#define	SB_DROP		0x80		/* does not accept any more data */
#define	SB_UNIX		0x100		/* UNIX domain socket buffer */
#define SB_USRSIZE	0x200		/* user specified sbreserve */
#define	SB_AUTOSIZE	0x400		/* automatically size socket buffer */
#define	SB_TRIM		0x800		/* Trim the socket buffer */
#define	SB_NOCOMPRESS	0x1000		/* do not compress socket buffer */

	caddr_t	so_tpcb;		/* Misc. protocol control block, used
					   by some kexts */

	void		(*so_event)(struct socket *, void *, u_int32_t);
	void		*so_eventarg;	/* Arg for above */
	kauth_cred_t	so_cred;	/* cred of who opened the socket */
	/* NB: generation count must not be first; easiest to make it last. */
	so_gen_t so_gencnt;		/* generation count */
	TAILQ_HEAD(, eventqelt) so_evlist;
	boolean_t	cached_in_sock_layer; /* bundled with inpcb and tcpcb */
	STAILQ_ENTRY(socket) so_cache_ent;	/* socache entry */
	u_int32_t	cache_timestamp;	/* time socket was cached */
	caddr_t		so_saved_pcb;	/* Saved pcb when cacheing */
	struct mbuf	*so_temp;	/* Holding area for outbound frags */
	/* Plug-in support - make the socket interface overridable */
	struct mbuf	*so_tail;
	struct socket_filter_entry *so_filt;	/* NKE hook */
	u_int32_t	so_flags;	/* Flags */
#define	SOF_NOSIGPIPE		0x00000001
#define	SOF_NOADDRAVAIL		0x00000002	/* EADDRNOTAVAIL if src addr is gone */
#define	SOF_PCBCLEARING		0x00000004	/* pru_disconnect done; don't call pru_detach */
#define	SOF_DEFUNCT		0x00000008	/* socket marked as inactive */
#define	SOF_CLOSEWAIT		0x00000010	/* blocked in close awaiting some events */
#define SOF_REUSESHAREUID	0x00000040	/* Allows SO_REUSEADDR/SO_REUSEPORT
						for multiple so_uid */
#define	SOF_MULTIPAGES		0x00000080	/* jumbo clusters may be used for sosend */
#define SOF_ABORTED		0x00000100	/* soabort was already called once */
#define SOF_OVERFLOW		0x00000200	/* socket was dropped as overflow of listen q */
#define SOF_NOTIFYCONFLICT	0x00000400	/* notify that a bind was done on a
					   port already in use */
#define	SOF_UPCALLCLOSEWAIT	0x00000800 /* block close until upcall returns  */
#define SOF_BINDRANDOMPORT	0x00001000 /* Randomized port number for bind */
#define SOF_NPX_SETOPTSHUT	0x00002000 /* Non POSIX extension to allow
					   setsockopt(2) after shut down */
#define SOF_RECV_TRAFFIC_CLASS	0x00004000 /* Receive TC as ancillary data */
#define	SOF_NODEFUNCT		0x00008000 /* socket cannot be defunct'd */
#define	SOF_PRIVILEGED_TRAFFIC_CLASS 0x00010000 /* traffic class is privileged */
#define SOF_SUSPENDED		0x00020000 /* i/f output queue is suspended */
#define SOF_INCOMP_INPROGRESS	0x00040000 /* incomp socket is being processed */
#define	SOF_NOTSENT_LOWAT	0x00080000 /* A different lowat on not sent
					   data has been set */
#define SOF_KNOTE		0x00100000 /* socket is on the EV_SOCK klist */
#define SOF_USELRO		0x00200000 /* TCP must use LRO on these sockets */
#define SOF_ENABLE_MSGS		0x00400000 /* TCP must enable message delivery */
#define SOF_FLOW_DIVERT		0x00800000 /* Flow Divert is enabled */
#define	SOF_MP_SUBFLOW		0x01000000 /* is a multipath subflow socket */
#define SOF_MPTCP_TRUE 		0x02000000 /* Established e2e MPTCP connection */
#define SOF_MPTCP_CLIENT        0x04000000 /* Only client starts addtnal flows */
#define SOF_MP_SEC_SUBFLOW      0x08000000 /* Set up secondary flow */
#define SOF_MP_TRYFAILOVER	0x10000000 /* Failing subflow */
#define	SOF_DELEGATED		0x20000000 /* on behalf of another process */
#define SOF_MPTCP_FASTJOIN	0x40000000 /* fast join support */
#define	SOF_CONTENT_FILTER	0x80000000 /* Content filter enabled */

	uint32_t	so_upcallusecount; /* number of upcalls in progress */
	int		so_usecount;	/* refcounting of socket use */;
	int		so_retaincnt;
	u_int32_t	so_filteruse;	/* usecount for the socket filters */
	u_int32_t	so_traffic_mgt_flags;	/* traffic_mgt socket config */
	thread_t	so_send_filt_thread;
	u_int32_t	so_restrictions;

	/* for debug pruposes */
#define	SO_LCKDBG_MAX 4	/* number of debug locking Link Registers recorded */
	void	*lock_lr[SO_LCKDBG_MAX];	/* locking calling history */
	int	next_lock_lr;
	void	*unlock_lr[SO_LCKDBG_MAX];	/* unlocking caller history */
	int	next_unlock_lr;

	struct label	*so_label;	/* MAC label for socket */
	struct label	*so_peerlabel;	/* cached MAC label for socket peer */
	thread_t	so_background_thread;	/* thread that marked
						   this socket background */
	int		so_traffic_class;

	u_int64_t	last_upid;	/* upid of most recent accessor */
	pid_t		last_pid;	/* pid of most recent accessor */
	struct data_stats so_tc_stats[SO_TC_STATS_MAX];
	struct klist	so_klist;		/* klist for EV_SOCK events */

	struct msg_state *so_msg_state;		/* unordered snd/rcv state */
	struct flow_divert_pcb	*so_fd_pcb;	/* Flow Divert control block */

	struct cfil_info	*so_cfil;

	u_int32_t	so_eventmask;		/* event mask */

	u_int64_t	e_upid;		/* upid of the effective owner */
	pid_t		e_pid;		/* pid of the effective owner */

	uuid_t		last_uuid;	/* uuid of most recent accessor */
	uuid_t		e_uuid;		/* uuid of effective owner */
	uuid_t		so_vuuid;	/* UUID of the Voucher originator */

	int32_t		so_policy_gencnt; /* UUID policy gencnt */
	u_int32_t	so_ifdenied_notifies; /* # of notifications generated */

	u_int32_t	so_flags1;
#define SOF1_POST_FALLBACK_SYNC	0x00000001 /* fallback to TCP */
#define	SOF1_AWDL_PRIVILEGED	0x00000002
#define	SOF1_IF_2KCL		0x00000004 /* interface prefers 2 KB clusters */
#define	SOF1_DEFUNCTINPROG	0x00000008
};

/* Control message accessor in mbufs */

#define _MIN_NXT_CMSGHDR_PTR(cmsg)					\
	((char *)(cmsg) +						\
	    __DARWIN_ALIGN32((__uint32_t)(cmsg)->cmsg_len) +		\
	    __DARWIN_ALIGN32(sizeof(struct cmsghdr)))

#define M_FIRST_CMSGHDR(m)						\
        ((char *)(m) != (char *)0L &&					\
	(size_t)(m)->m_len >= sizeof (struct cmsghdr) &&		\
	(socklen_t)(m)->m_len >=					\
	__DARWIN_ALIGN32(((struct cmsghdr *)(void *)(m)->m_data)->cmsg_len) ? \
	(struct cmsghdr *)(void *)(m)->m_data :	(struct cmsghdr *)0L)

#define M_NXT_CMSGHDR(m, cmsg)						\
        ((char *)(cmsg) == (char *)0L ? M_FIRST_CMSGHDR(m) :		\
	_MIN_NXT_CMSGHDR_PTR(cmsg) > ((char *)(m)->m_data) + (m)->m_len ||  \
	_MIN_NXT_CMSGHDR_PTR(cmsg) < (char *)(m)->m_data ?		\
	(struct cmsghdr *)0L /* NULL */ :				\
	(struct cmsghdr *)(void *)((unsigned char *)(cmsg) +		\
	__DARWIN_ALIGN32((__uint32_t)(cmsg)->cmsg_len)))

/*
 * Socket state bits.
 */
#define	SS_NOFDREF		0x0001	/* no file table ref any more */
#define	SS_ISCONNECTED		0x0002	/* socket connected to a peer */
#define	SS_ISCONNECTING		0x0004	/* in process of connecting to peer */
#define	SS_ISDISCONNECTING	0x0008	/* in process of disconnecting */
#define	SS_CANTSENDMORE		0x0010	/* can't send more data to peer */
#define	SS_CANTRCVMORE		0x0020	/* can't receive more data from peer */
#define	SS_RCVATMARK		0x0040	/* at mark on input */

#define	SS_PRIV			0x0080	/* privileged for broadcast, raw... */
#define	SS_NBIO			0x0100	/* non-blocking ops */
#define	SS_ASYNC		0x0200	/* async i/o notify */
#define	SS_ISCONFIRMING		0x0400	/* deciding to accept connection req */
#define	SS_INCOMP		0x0800	/* Unaccepted, incomplete connection */
#define	SS_COMP			0x1000	/* unaccepted, complete connection */
#define	SS_ISDISCONNECTED	0x2000	/* socket disconnected from peer */
#define	SS_DRAINING		0x4000	/* close waiting for blocked system
					   calls to drain */
#define	SS_DEFUNCT		0x8000	/* has been fully defunct'd */

#if defined(__LP64__)
#define	_XSOCKET_PTR(x)		u_int32_t
#else
#define	_XSOCKET_PTR(x)		x
#endif

/* Flags returned in data field for EVFILT_SOCK events. */
#define SOCKEV_CONNECTED	0x00000001 /* connected */
#define SOCKEV_DISCONNECTED	0x00000002 /* disconnected */

#pragma pack(4)

struct xsockbuf {
	u_int32_t	sb_cc;
	u_int32_t	sb_hiwat;
	u_int32_t	sb_mbcnt;
	u_int32_t	sb_mbmax;
	int32_t		sb_lowat;
	short		sb_flags;
	short		sb_timeo;
};

/*
 * Externalized form of struct socket used by the sysctl(3) interface.
 */
struct	xsocket {
	u_int32_t		xso_len;	/* length of this structure */
	_XSOCKET_PTR(struct socket *) xso_so;	/* makes a convenient handle */
	short			so_type;
	short			so_options;
	short			so_linger;
	short			so_state;
	_XSOCKET_PTR(caddr_t)	so_pcb;		/* another convenient handle */
	int			xso_protocol;
	int			xso_family;
	short			so_qlen;
	short			so_incqlen;
	short			so_qlimit;
	short			so_timeo;
	u_short			so_error;
	pid_t			so_pgid;
	u_int32_t		so_oobmark;
	struct xsockbuf		so_rcv;
	struct xsockbuf		so_snd;
	uid_t			so_uid;		/* XXX */
};

struct	xsocket64 {
	u_int32_t		xso_len;	/* length of this structure */
	u_int64_t		xso_so;		/* makes a convenient handle */
	short			so_type;
	short			so_options;
	short			so_linger;
	short			so_state;
	u_int64_t		so_pcb;		/* another convenient handle */
	int			xso_protocol;
	int			xso_family;
	short			so_qlen;
	short			so_incqlen;
	short			so_qlimit;
	short			so_timeo;
	u_short			so_error;
	pid_t			so_pgid;
	u_int32_t		so_oobmark;
	struct xsockbuf		so_rcv;
	struct xsockbuf		so_snd;
	uid_t			so_uid;		/* XXX */
};

#define XSO_SOCKET	0x001
#define XSO_RCVBUF	0x002
#define XSO_SNDBUF	0x004
#define XSO_STATS	0x008
#define XSO_INPCB	0x010
#define XSO_TCPCB	0x020
#define XSO_KCREG	0x040
#define XSO_KCB		0x080
#define XSO_EVT		0x100

struct	xsocket_n {
	u_int32_t		xso_len;	/* length of this structure */
	u_int32_t		xso_kind;	/* XSO_SOCKET */
	u_int64_t		xso_so;		/* makes a convenient handle */
	short			so_type;
	u_int32_t		so_options;
	short			so_linger;
	short			so_state;
	u_int64_t		so_pcb;		/* another convenient handle */
	int			xso_protocol;
	int			xso_family;
	short			so_qlen;
	short			so_incqlen;
	short			so_qlimit;
	short			so_timeo;
	u_short			so_error;
	pid_t			so_pgid;
	u_int32_t		so_oobmark;
	uid_t			so_uid;		/* XXX */
	pid_t			so_last_pid;
	pid_t			so_e_pid;
};

struct xsockbuf_n {
	u_int32_t		xsb_len;	/* length of this structure */
	u_int32_t		xsb_kind;	/* XSO_RCVBUF or XSO_SNDBUF */
	u_int32_t		sb_cc;
	u_int32_t		sb_hiwat;
	u_int32_t		sb_mbcnt;
	u_int32_t		sb_mbmax;
	int32_t			sb_lowat;
	short			sb_flags;
	short			sb_timeo;
};

struct xsockstat_n {
	u_int32_t		xst_len;	/* length of this structure */
	u_int32_t		xst_kind;	/* XSO_STATS */
	struct data_stats	xst_tc_stats[SO_TC_STATS_MAX];
};

#pragma pack()

#include <sys/kpi_mbuf.h>

/*
 * Argument structure for sosetopt et seq.  This is in the KERNEL
 * section because it will never be visible to user code.
 */
enum sopt_dir { SOPT_GET, SOPT_SET };
struct sockopt {
	enum	sopt_dir sopt_dir; /* is this a get or a set? */
	int	sopt_level;	/* second arg of [gs]etsockopt */
	int	sopt_name;	/* third arg of [gs]etsockopt */
	user_addr_t sopt_val;	/* fourth arg of [gs]etsockopt */
	size_t	sopt_valsize;	/* (almost) fifth arg of [gs]etsockopt */
	struct	proc *sopt_p;	/* calling process or null if kernel */
};

#ifdef MALLOC_DECLARE
MALLOC_DECLARE(M_PCB);
MALLOC_DECLARE(M_SONAME);
#endif /* MALLOC_DECLARE */


struct mbuf;
struct sockaddr;
struct ucred;
struct uio;

/*
 * From uipc_socket and friends
 */
__BEGIN_DECLS
/* Exported */
extern int sbappendaddr(struct sockbuf *sb, struct sockaddr *asa,
    struct mbuf *m0, struct mbuf *control, int *error_out);
extern int sbappendrecord(struct sockbuf *sb, struct mbuf *m0);
extern void sbflush(struct sockbuf *sb);
extern int sbspace(struct sockbuf *sb);
extern int soabort(struct socket *so);
extern void socantrcvmore(struct socket *so);
extern void socantsendmore(struct socket *so);
extern int sodisconnect(struct socket *so);
extern void sofree(struct socket *so);
extern void sofreelastref(struct socket *, int);
extern void soisconnected(struct socket *so);
extern void soisconnecting(struct socket *so);
extern void soisdisconnected(struct socket *so);
extern void soisdisconnecting(struct socket *so);
extern struct socket *sonewconn(struct socket *head, int connstatus,
    const struct sockaddr *from);
extern int sopoll(struct socket *so, int events, struct ucred *cred, void *wql);
extern int sooptcopyin(struct sockopt *sopt, void *data, size_t len,
    size_t minlen);
extern int sooptcopyout(struct sockopt *sopt, void *data, size_t len);
extern int soreceive(struct socket *so, struct sockaddr **paddr,
    struct uio *uio, struct mbuf **mp0, struct mbuf **controlp, int *flagsp);
extern int soreserve(struct socket *so, u_int32_t sndcc, u_int32_t rcvcc);
extern void sorwakeup(struct socket *so);
extern int sosend(struct socket *so, struct sockaddr *addr, struct uio *uio,
    struct mbuf *top, struct mbuf *control, int flags);
extern int sosend_list(struct socket *so, struct sockaddr *addr, struct uio **uio,
    u_int uiocnt, struct mbuf *top, struct mbuf *control, int flags);
extern int soreceive_list(struct socket *so, struct sockaddr **psa, struct uio **uio,
		u_int uiocnt, struct mbuf **mp0, struct mbuf **controlp, int *flagsp);
extern void sonullevent(struct socket *so, void *arg, uint32_t hint);
__END_DECLS

#endif /* !_SYS_SOCKETVAR_H_ */
