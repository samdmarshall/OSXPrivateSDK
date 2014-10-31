/*
 * Copyright (c) 2013, 2014 Apple Inc. All rights reserved.
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

#ifndef	_NET_NECP_H_
#define	_NET_NECP_H_

#include <netinet/in.h>
#include <sys/socket.h>

/*
 * Name registered by the ipsec kernel control
 */
#define	NECP_CONTROL_NAME "com.apple.net.necp_control"

struct necp_packet_header {
    u_int8_t		packet_type;
	u_int8_t		flags;
    u_int32_t		message_id;
};
#define	NECP_PACKET_TYPE_POLICY_ADD				1
#define	NECP_PACKET_TYPE_POLICY_GET				2
#define	NECP_PACKET_TYPE_POLICY_DELETE			3
#define	NECP_PACKET_TYPE_POLICY_APPLY_ALL		4
#define	NECP_PACKET_TYPE_POLICY_LIST_ALL		5
#define	NECP_PACKET_TYPE_POLICY_DELETE_ALL		6
#define	NECP_PACKET_TYPE_SET_SESSION_PRIORITY	7
#define	NECP_PACKET_TYPE_LOCK_SESSION_TO_PROC	8
#define	NECP_PACKET_TYPE_REGISTER_SERVICE		9
#define	NECP_PACKET_TYPE_UNREGISTER_SERVICE		10

#define	NECP_PACKET_FLAGS_RESPONSE				0x01	// Used for acks, errors, and query responses

#define	NECP_TLV_NIL							0
#define	NECP_TLV_ERROR							1	// u_int32_t
#define	NECP_TLV_POLICY_ORDER					2	// u_int32_t
#define	NECP_TLV_POLICY_CONDITION				3
#define	NECP_TLV_POLICY_RESULT					4
#define	NECP_TLV_POLICY_ID						5	// u_int32_t
#define	NECP_TLV_SESSION_PRIORITY				6	// u_int32_t
#define	NECP_TLV_ATTRIBUTE_DOMAIN				7	// char[]
#define	NECP_TLV_ATTRIBUTE_ACCOUNT				8	// char[]
#define	NECP_TLV_SERVICE_UUID					9	// uuid_t

#define	NECP_POLICY_CONDITION_FLAGS_NEGATIVE	0x01 // Negative

// Conditions
#define	NECP_POLICY_CONDITION_DEFAULT			0	// N/A, not valid with any other conditions
// Socket/Application conditions
#define	NECP_POLICY_CONDITION_APPLICATION		1	// uuid_t, uses effective UUID when possible
#define	NECP_POLICY_CONDITION_REAL_APPLICATION	2	// uuid_t, never uses effective UUID. Only valid with NECP_POLICY_CONDITION_APPLICATION
// Application-only Conditions
#define	NECP_POLICY_CONDITION_DOMAIN			3	// String, such as apple.com
#define	NECP_POLICY_CONDITION_ACCOUNT			4	// String
// Socket/Application condition
#define	NECP_POLICY_CONDITION_ENTITLEMENT		5	// String
#define	NECP_POLICY_CONDITION_PID				6	// pid_t
#define	NECP_POLICY_CONDITION_UID				7	// uid_t
#define	NECP_POLICY_CONDITION_ALL_INTERFACES	8	// N/A
#define	NECP_POLICY_CONDITION_BOUND_INTERFACE	9	// String
#define	NECP_POLICY_CONDITION_TRAFFIC_CLASS		10	// necp_policy_condition_tc_range
// Socket/IP conditions
#define	NECP_POLICY_CONDITION_IP_PROTOCOL		11	// u_int8_t
#define	NECP_POLICY_CONDITION_LOCAL_ADDR		12	// necp_policy_condition_addr
#define	NECP_POLICY_CONDITION_REMOTE_ADDR		13	// necp_policy_condition_addr
#define	NECP_POLICY_CONDITION_LOCAL_ADDR_RANGE	14	// necp_policy_condition_addr_range
#define	NECP_POLICY_CONDITION_REMOTE_ADDR_RANGE	15	// necp_policy_condition_addr_range

// Results
#define	NECP_POLICY_RESULT_PASS					1	// N/A
#define	NECP_POLICY_RESULT_SKIP					2	// u_int32_t, policy order to skip to. 0 to skip all session policies.
#define	NECP_POLICY_RESULT_DROP					3	// N/A
#define	NECP_POLICY_RESULT_SOCKET_DIVERT		4	// u_int32_t, flow divert control unit
#define	NECP_POLICY_RESULT_SOCKET_FILTER		5	// u_int32_t, filter control unit
#define	NECP_POLICY_RESULT_IP_TUNNEL			6	// String, interface name
#define	NECP_POLICY_RESULT_IP_FILTER			7	// ?
#define	NECP_POLICY_RESULT_TRIGGER				8	// service uuid_t
#define	NECP_POLICY_RESULT_TRIGGER_IF_NEEDED	9	// service uuid_t
#define	NECP_POLICY_RESULT_TRIGGER_SCOPED		10	// service uuid_t
#define	NECP_POLICY_RESULT_NO_TRIGGER_SCOPED	11	// service uuid_t
#define	NECP_POLICY_RESULT_SOCKET_SCOPED		12	// String, interface name

#define	NECP_POLICY_RESULT_MAX					NECP_POLICY_RESULT_SOCKET_SCOPED

// Errors
#define	NECP_ERROR_INTERNAL						0
#define	NECP_ERROR_UNKNOWN_PACKET_TYPE			1
#define	NECP_ERROR_INVALID_TLV					2
#define	NECP_ERROR_POLICY_RESULT_INVALID		3
#define	NECP_ERROR_POLICY_CONDITIONS_INVALID	4
#define	NECP_ERROR_POLICY_ID_NOT_FOUND			5
#define	NECP_ERROR_INVALID_PROCESS				6

// Modifiers
#define	NECP_MASK_USERSPACE_ONLY	0x80000000	// on filter_control_unit value

struct necp_policy_condition_tc_range {
	u_int32_t start_tc;
	u_int32_t end_tc;
} __attribute__((__packed__));

struct necp_policy_condition_addr {
	u_int8_t		prefix;
	union {
		struct sockaddr			sa;
		struct sockaddr_in		sin;
		struct sockaddr_in6		sin6;
	} address;
} __attribute__((__packed__));

struct necp_policy_condition_addr_range {
	union {
		struct sockaddr			sa;
		struct sockaddr_in		sin;
		struct sockaddr_in6		sin6;
	} start_address;
	union {
		struct sockaddr			sa;
		struct sockaddr_in		sin;
		struct sockaddr_in6		sin6;
	} end_address;
} __attribute__((__packed__));

#define	NECP_SESSION_PRIORITY_UNKNOWN			0
#define	NECP_SESSION_PRIORITY_CONTROL			1
#define	NECP_SESSION_PRIORITY_PRIVILEGED_TUNNEL	2
#define	NECP_SESSION_PRIORITY_HIGH				3
#define	NECP_SESSION_PRIORITY_DEFAULT			4
#define	NECP_SESSION_PRIORITY_LOW				5

#define	NECP_SESSION_NUM_PRIORITIES				NECP_SESSION_PRIORITY_LOW

typedef u_int32_t necp_policy_id;
typedef u_int32_t necp_policy_order;

typedef u_int32_t necp_kernel_policy_result;
typedef u_int32_t necp_kernel_policy_filter;

typedef union {
	u_int						tunnel_interface_index;
	u_int						scoped_interface_index;
	u_int32_t					flow_divert_control_unit;
	u_int32_t					filter_control_unit;
} necp_kernel_policy_routing_result_parameter;

#define	NECP_SERVICE_FLAGS_REGISTERED			0x01
struct necp_aggregate_result {
	necp_kernel_policy_result			routing_result;
	necp_kernel_policy_routing_result_parameter	routing_result_parameter;
	necp_kernel_policy_filter			filter_control_unit;
	necp_kernel_policy_result			service_action;
	uuid_t								service_uuid;
	u_int32_t							service_flags;
	u_int32_t							service_data;
};

int necp_match_policy(const uint8_t *parameters, size_t parameters_size, struct necp_aggregate_result *returned_result);

#endif
