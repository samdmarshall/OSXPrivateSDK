/*
 * Copyright (c) 2000-2009 Apple Inc. All rights reserved.
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
/*
 * @OSF_COPYRIGHT@
 */
/* 
 * Mach Operating System
 * Copyright (c) 1991,1990,1989,1988,1987 Carnegie Mellon University
 * All Rights Reserved.
 * 
 * Permission to use, copy, modify and distribute this software and its
 * documentation is hereby granted, provided that both the copyright
 * notice and this permission notice appear in all copies of the
 * software, derivative works or modified versions, and any portions
 * thereof, and that both notices appear in supporting documentation.
 * 
 * CARNEGIE MELLON ALLOWS FREE USE OF THIS SOFTWARE IN ITS "AS IS"
 * CONDITION.  CARNEGIE MELLON DISCLAIMS ANY LIABILITY OF ANY KIND FOR
 * ANY DAMAGES WHATSOEVER RESULTING FROM THE USE OF THIS SOFTWARE.
 * 
 * Carnegie Mellon requests users of this software to return to
 * 
 *  Software Distribution Coordinator  or  Software.Distribution@CS.CMU.EDU
 *  School of Computer Science
 *  Carnegie Mellon University
 *  Pittsburgh PA 15213-3890
 * 
 * any improvements or extensions that they make and grant Carnegie Mellon
 * the rights to redistribute these changes.
 */
/*
 */

/*
 *	File:	vm/vm_map.h
 *	Author:	Avadis Tevanian, Jr., Michael Wayne Young
 *	Date:	1985
 *
 *	Virtual memory map module definitions.
 *
 * Contributors:
 *	avie, dlb, mwyoung
 */

#ifndef	_VM_VM_MAP_H_
#define _VM_VM_MAP_H_

#include <mach/mach_types.h>
#include <mach/kern_return.h>
#include <mach/boolean.h>
#include <mach/vm_types.h>
#include <mach/vm_prot.h>
#include <mach/vm_inherit.h>
#include <mach/vm_behavior.h>
#include <mach/vm_param.h>
#include <vm/pmap.h>


#include <sys/cdefs.h>

__BEGIN_DECLS

extern void	vm_map_reference(vm_map_t	map);
extern vm_map_t current_map(void);

/* Setup reserved areas in a new VM map */
extern kern_return_t	vm_map_exec(
				vm_map_t		new_map,
				task_t			task,
				void			*fsroot,
				cpu_type_t		cpu);

__END_DECLS


__BEGIN_DECLS

/* Create an empty map */
extern vm_map_t		vm_map_create(
				pmap_t			pmap,
				vm_map_offset_t 	min_off,
				vm_map_offset_t 	max_off,
				boolean_t		pageable);

/* Get rid of a map */
extern void		vm_map_destroy(
				vm_map_t		map,
				int			flags);

/* Lose a reference */
extern void		vm_map_deallocate(
				vm_map_t		map);

extern vm_map_t		vm_map_switch(
				vm_map_t		map);

/* Change protection */
extern kern_return_t	vm_map_protect(
				vm_map_t		map,
				vm_map_offset_t		start,
				vm_map_offset_t		end,
				vm_prot_t		new_prot,
				boolean_t		set_max);

/* Check protection */
extern boolean_t vm_map_check_protection(
				vm_map_t		map,
				vm_map_offset_t		start,
				vm_map_offset_t		end,
				vm_prot_t		protection);

/* wire down a region */
extern kern_return_t	vm_map_wire(
				vm_map_t		map,
				vm_map_offset_t		start,
				vm_map_offset_t		end,
				vm_prot_t		access_type,
				boolean_t		user_wire);

/* unwire a region */
extern kern_return_t	vm_map_unwire(
				vm_map_t		map,
				vm_map_offset_t		start,
				vm_map_offset_t		end,
				boolean_t		user_wire);

/* Enter a mapping of a memory object */
extern kern_return_t	vm_map_enter_mem_object(
				vm_map_t		map,
				vm_map_offset_t		*address,
				vm_map_size_t		size,
				vm_map_offset_t		mask,
				int			flags,
				ipc_port_t		port,
				vm_object_offset_t	offset,
				boolean_t		needs_copy,
				vm_prot_t		cur_protection,
				vm_prot_t		max_protection,
				vm_inherit_t		inheritance);

/* Enter a mapping of a memory object */
extern kern_return_t	vm_map_enter_mem_object_control(
				vm_map_t		map,
				vm_map_offset_t		*address,
				vm_map_size_t		size,
				vm_map_offset_t		mask,
				int			flags,
				memory_object_control_t	control,
				vm_object_offset_t	offset,
				boolean_t		needs_copy,
				vm_prot_t		cur_protection,
				vm_prot_t		max_protection,
				vm_inherit_t		inheritance);

/* Deallocate a region */
extern kern_return_t	vm_map_remove(
				vm_map_t		map,
				vm_map_offset_t		start,
				vm_map_offset_t		end,
				boolean_t		flags);

/* Discard a copy without using it */
extern void		vm_map_copy_discard(
				vm_map_copy_t		copy);

/* Overwrite existing memory with a copy */
extern kern_return_t	vm_map_copy_overwrite(
				vm_map_t                dst_map,
				vm_map_address_t        dst_addr,
				vm_map_copy_t           copy,
				boolean_t               interruptible);

/* Place a copy into a map */
extern kern_return_t	vm_map_copyout(
				vm_map_t		dst_map,
				vm_map_address_t	*dst_addr,	/* OUT */
				vm_map_copy_t		copy);

extern kern_return_t	vm_map_copyout_internal(
	vm_map_t		dst_map,
	vm_map_address_t	*dst_addr,	/* OUT */
	vm_map_copy_t		copy,
	boolean_t		consume_on_success,
	vm_prot_t		cur_protection,
	vm_prot_t		max_protection,
	vm_inherit_t		inheritance);

extern kern_return_t	vm_map_copyin(
				vm_map_t			src_map,
				vm_map_address_t	src_addr,
				vm_map_size_t		len,
				boolean_t			src_destroy,
				vm_map_copy_t		*copy_result);	/* OUT */

extern kern_return_t	vm_map_copyin_common(
				vm_map_t		src_map,
				vm_map_address_t	src_addr,
				vm_map_size_t		len,
				boolean_t		src_destroy,
				boolean_t		src_volatile,
				vm_map_copy_t		*copy_result,	/* OUT */
				boolean_t		use_maxprot);

extern kern_return_t	vm_map_copy_extract(
	vm_map_t		src_map,
	vm_map_address_t	src_addr,
	vm_map_size_t		len,
	vm_map_copy_t		*copy_result,	/* OUT */
	vm_prot_t		*cur_prot,	/* OUT */
	vm_prot_t		*max_prot);


extern void		vm_map_disable_NX(
			        vm_map_t		map);

extern void		vm_map_disallow_data_exec(
			        vm_map_t		map);

extern void		vm_map_set_64bit(
			        vm_map_t		map);

extern void		vm_map_set_32bit(
			        vm_map_t		map);

extern boolean_t	vm_map_has_hard_pagezero(
		       		vm_map_t		map,
				vm_map_offset_t		pagezero_size);

extern boolean_t	vm_map_is_64bit(
			        vm_map_t		map);
#define vm_map_has_4GB_pagezero(map) 	vm_map_has_hard_pagezero(map, (vm_map_offset_t)0x100000000ULL)


extern void		vm_map_set_4GB_pagezero(
			        vm_map_t		map);

extern void		vm_map_clear_4GB_pagezero(
			        vm_map_t		map);

extern kern_return_t	vm_map_raise_max_offset(
	vm_map_t	map,
	vm_map_offset_t	new_max_offset);

extern kern_return_t	vm_map_raise_min_offset(
	vm_map_t	map,
	vm_map_offset_t	new_min_offset);

extern vm_map_offset_t	vm_compute_max_offset(
				unsigned		is64);

extern uint64_t 	vm_map_get_max_aslr_slide_pages(
				vm_map_t map);
	
extern void		vm_map_set_user_wire_limit(
				vm_map_t		map,
				vm_size_t		limit);

extern void vm_map_switch_protect(
				vm_map_t		map, 
				boolean_t		val);

extern void vm_map_iokit_mapped_region(
				vm_map_t		map,
				vm_size_t		bytes);

extern void vm_map_iokit_unmapped_region(
				vm_map_t		map,
				vm_size_t		bytes);


extern boolean_t first_free_is_valid(vm_map_t);

extern int 		vm_map_page_shift(
				vm_map_t 		map);

extern int		vm_map_page_mask(
				vm_map_t 		map);

extern int		vm_map_page_size(
				vm_map_t 		map);

extern vm_map_offset_t	vm_map_round_page_mask(
				vm_map_offset_t		offset,
				vm_map_offset_t		mask);

extern vm_map_offset_t	vm_map_trunc_page_mask(
				vm_map_offset_t		offset,
				vm_map_offset_t		mask);





#define vm_map_round_page(x,pgmask) (((vm_map_offset_t)(x) + (pgmask)) & ~((signed)(pgmask)))
#define vm_map_trunc_page(x,pgmask) ((vm_map_offset_t)(x) & ~((signed)(pgmask)))

/*
 * Flags for vm_map_remove() and vm_map_delete()
 */
#define	VM_MAP_NO_FLAGS	  		0x0
#define	VM_MAP_REMOVE_KUNWIRE	  	0x1
#define	VM_MAP_REMOVE_INTERRUPTIBLE  	0x2
#define	VM_MAP_REMOVE_WAIT_FOR_KWIRE  	0x4
#define VM_MAP_REMOVE_SAVE_ENTRIES	0x8
#define VM_MAP_REMOVE_NO_PMAP_CLEANUP	0x10

/* Support for UPLs from vm_maps */

extern kern_return_t vm_map_get_upl(
				vm_map_t		target_map,
				vm_map_offset_t		map_offset,
				upl_size_t		*size,
				upl_t			*upl,
				upl_page_info_array_t	page_info,
				unsigned int	*page_infoCnt,
				int		*flags,
				int		force_data_sync);

#if CONFIG_DYNAMIC_CODE_SIGNING
extern kern_return_t vm_map_sign(vm_map_t map, 
				 vm_map_offset_t start, 
				 vm_map_offset_t end);
#endif

#if CONFIG_FREEZE
void	vm_map_freeze_thaw_init(void);
void	vm_map_freeze_thaw(void);
void	vm_map_demand_fault(void);

extern kern_return_t vm_map_freeze_walk(
              	vm_map_t map,
              	unsigned int *purgeable_count,
              	unsigned int *wired_count,
              	unsigned int *clean_count,
              	unsigned int *dirty_count,
             	unsigned int dirty_budget,
              	boolean_t *has_shared);

extern kern_return_t vm_map_freeze(
             	vm_map_t map,
             	unsigned int *purgeable_count,
             	unsigned int *wired_count,
             	unsigned int *clean_count,
             	unsigned int *dirty_count,
             	unsigned int dirty_budget,
             	boolean_t *has_shared);
                
extern kern_return_t vm_map_thaw(
                vm_map_t map);
#endif

__END_DECLS

 
#endif	/* _VM_VM_MAP_H_ */
