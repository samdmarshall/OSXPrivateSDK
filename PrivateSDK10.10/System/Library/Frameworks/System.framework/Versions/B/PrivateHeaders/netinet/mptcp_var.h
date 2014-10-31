/*
 * Copyright (c) 2012-2014 Apple Inc. All rights reserved.
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

#ifndef _NETINET_MPTCP_VAR_H_
#define	_NETINET_MPTCP_VAR_H_

#include <netinet/in.h>
#include <netinet/tcp.h>

typedef struct mptcp_flow {
	uint32_t		flow_flags;
	connid_t		flow_cid;
	struct sockaddr_storage flow_src;
	struct sockaddr_storage flow_dst;
	conninfo_tcp_t		flow_ci;
} mptcp_flow_t;

typedef struct conninfo_mptcp {
	size_t		mptcpci_len;
	size_t		mptcpci_nflows;
	uint32_t	mptcpci_state;
	mptcp_flow_t	mptcpci_flows[1];
} conninfo_mptcp_t;

#endif /* _NETINET_MPTCP_VAR_H_ */
