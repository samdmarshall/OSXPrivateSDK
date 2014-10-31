/*
 * Copyright (c) 2000-2004 Apple Computer, Inc. All rights reserved.
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
#ifndef	_IPC_IPC_VOUCHER_H_
#define	_IPC_IPC_VOUCHER_H_

#include <mach/mach_types.h>
#include <mach/mach_voucher_types.h>
#include <mach/boolean.h>
#include <ipc/ipc_types.h>


/*
 * IPC voucher attribute recipe
 *
 * In-kernel recipe format with an ipc_voucher_t pointer for the previous
 * voucher reference.
 */
#pragma pack(1)
typedef struct ipc_voucher_attr_recipe_data {
	mach_voucher_attr_key_t	                key;
	mach_voucher_attr_recipe_command_t      command;
	ipc_voucher_t		                previous_voucher;
	mach_voucher_attr_content_size_t	content_size;
	uint8_t				        content[];
} ipc_voucher_attr_recipe_data_t;
typedef ipc_voucher_attr_recipe_data_t *ipc_voucher_attr_recipe_t;
typedef mach_msg_type_number_t ipc_voucher_attr_recipe_size_t;

typedef uint8_t *ipc_voucher_attr_raw_recipe_t;
typedef ipc_voucher_attr_raw_recipe_t ipc_voucher_attr_raw_recipe_array_t;
typedef mach_msg_type_number_t ipc_voucher_attr_raw_recipe_size_t;
typedef mach_msg_type_number_t ipc_voucher_attr_raw_recipe_array_size_t;

#pragma pack()

/*
 * In-kernel Resource Manager Definition
 *
 * In-kernel resource managers are defined by a v-table like structure for
 * the three callouts supported by a resource manager (and release function).
 *
 * There is a single in-kernel resource manager that represents all the
 * outside kernel managers (and reflects the calls through MIG to user-space).
 */

typedef kern_return_t (*ipc_voucher_attr_manager_release_value_t)(ipc_voucher_attr_manager_t,
								  mach_voucher_attr_key_t,
								  mach_voucher_attr_value_handle_t,
								  mach_voucher_attr_value_reference_t);

typedef kern_return_t (*ipc_voucher_attr_manager_get_value_t)(ipc_voucher_attr_manager_t,
							      mach_voucher_attr_key_t,
							      mach_voucher_attr_recipe_command_t,
							      mach_voucher_attr_value_handle_array_t,
							      mach_voucher_attr_value_handle_array_size_t,
							      mach_voucher_attr_content_t,
							      mach_voucher_attr_content_size_t,
							      mach_voucher_attr_value_handle_t *,
							      ipc_voucher_t *);

typedef kern_return_t (*ipc_voucher_attr_manager_extract_content_t)(ipc_voucher_attr_manager_t,
								    mach_voucher_attr_key_t,
								    mach_voucher_attr_value_handle_array_t,
								    mach_voucher_attr_value_handle_array_size_t,
								    mach_voucher_attr_recipe_command_t *,
								    mach_voucher_attr_content_t,
								    mach_voucher_attr_content_size_t *);

typedef kern_return_t (*ipc_voucher_attr_manager_command_t)(ipc_voucher_attr_manager_t,
							    mach_voucher_attr_key_t,
							    mach_voucher_attr_value_handle_array_t,
							    mach_voucher_attr_value_handle_array_size_t,
							    mach_voucher_attr_command_t,
							    mach_voucher_attr_content_t,
							    mach_voucher_attr_content_size_t,
							    mach_voucher_attr_content_t,
							    mach_voucher_attr_content_size_t *);

typedef void (*ipc_voucher_attr_manager_release_t)(ipc_voucher_attr_manager_t);

struct ipc_voucher_attr_manager {
	ipc_voucher_attr_manager_release_value_t	ivam_release_value;
	ipc_voucher_attr_manager_get_value_t		ivam_get_value;
	ipc_voucher_attr_manager_extract_content_t	ivam_extract_content;
	ipc_voucher_attr_manager_command_t		ivam_command;
	ipc_voucher_attr_manager_release_t		ivam_release;
};

__BEGIN_DECLS

/* DEBUG/TRACE Convert from a port to a voucher */
extern uintptr_t unsafe_convert_port_to_voucher(
	ipc_port_t		port);

/* Convert from a port to a voucher */
extern ipc_voucher_t convert_port_to_voucher(
	ipc_port_t		port);

/* Convert from a port name to an ipc_voucher */
extern ipc_voucher_t convert_port_name_to_voucher(
	mach_port_name_t	name);

/* add a reference to the specified voucher */
extern void ipc_voucher_reference(
	ipc_voucher_t		voucher);

/* drop the voucher reference picked up above */
extern void ipc_voucher_release(
	ipc_voucher_t		voucher);

/* deliver voucher notifications */
extern void ipc_voucher_notify(
	mach_msg_header_t 	*msg);

/* Convert from a voucher to a port */
extern ipc_port_t convert_voucher_to_port(
	ipc_voucher_t		voucher);

/* convert from a voucher attribute control to a port */
extern ipc_port_t convert_voucher_attr_control_to_port(
	ipc_voucher_attr_control_t	control);

/* add a reference to the specified voucher */
extern void ipc_voucher_attr_control_reference(
	ipc_voucher_attr_control_t	control);

/* drop the reference picked up above */
extern void ipc_voucher_attr_control_release(
	ipc_voucher_attr_control_t	control);

/* deliver voucher control notifications */
extern void ipc_voucher_attr_control_notify(
	mach_msg_header_t 	*msg);

/* convert from a port to a voucher attribute control */
extern ipc_voucher_attr_control_t convert_port_to_voucher_attr_control(
	ipc_port_t 		port);

/*
 * In-kernel equivalents to the user syscalls
 */
extern kern_return_t
ipc_create_mach_voucher(
	ipc_voucher_attr_raw_recipe_array_t	 	recipes,
	ipc_voucher_attr_raw_recipe_array_size_t	recipe_size,
	ipc_voucher_t 					*new_voucher);

extern kern_return_t
ipc_voucher_attr_control_create_mach_voucher(
	ipc_voucher_attr_control_t			control,
	ipc_voucher_attr_raw_recipe_array_t 		recipes,
	ipc_voucher_attr_raw_recipe_array_size_t	recipe_size,
	ipc_voucher_t 					*new_voucher);

extern kern_return_t 
ipc_register_well_known_mach_voucher_attr_manager(
	ipc_voucher_attr_manager_t 		manager,
	mach_voucher_attr_value_handle_t 	default_value,
        mach_voucher_attr_key_t 		key,
	ipc_voucher_attr_control_t 		*control);


extern kern_return_t
ipc_register_mach_voucher_attr_manager(
	ipc_voucher_attr_manager_t 		manager,
	mach_voucher_attr_value_handle_t 	default_value,
        mach_voucher_attr_key_t 		*key,
	ipc_voucher_attr_control_t 		*control);

__END_DECLS
					     
#endif	/* _IPC_IPC_VOUCHER_H_ */
