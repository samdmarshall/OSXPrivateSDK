/*
 * Copyright (c) 2000-2012 Apple Inc. All rights reserved.
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
 *	File:	vm/pmap.h
 *	Author:	Avadis Tevanian, Jr.
 *	Date:	1985
 *
 *	Machine address mapping definitions -- machine-independent
 *	section.  [For machine-dependent section, see "machine/pmap.h".]
 */

#ifndef	_VM_PMAP_H_
#define _VM_PMAP_H_

#include <mach/kern_return.h>
#include <mach/vm_param.h>
#include <mach/vm_types.h>
#include <mach/vm_attributes.h>
#include <mach/boolean.h>
#include <mach/vm_prot.h>


/*
 *	The following is a description of the interface to the
 *	machine-dependent "physical map" data structure.  The module
 *	must provide a "pmap_t" data type that represents the
 *	set of valid virtual-to-physical addresses for one user
 *	address space.  [The kernel address space is represented
 *	by a distinguished "pmap_t".]  The routines described manage
 *	this type, install and update virtual-to-physical mappings,
 *	and perform operations on physical addresses common to
 *	many address spaces.
 */

/* Copy between a physical page and a virtual address */
/* LP64todo - switch to vm_map_offset_t when it grows */
extern kern_return_t 	copypv(
				addr64_t source, 
				addr64_t sink, 
				unsigned int size, 
				int which);	
#define cppvPsnk        1
#define cppvPsnkb      31
#define cppvPsrc        2
#define cppvPsrcb      30
#define cppvFsnk        4
#define cppvFsnkb      29
#define cppvFsrc        8
#define cppvFsrcb      28
#define cppvNoModSnk   16
#define cppvNoModSnkb  27
#define cppvNoRefSrc   32
#define cppvNoRefSrcb  26
#define cppvKmap       64	/* Use the kernel's vm_map */
#define cppvKmapb      25


extern boolean_t	pmap_is_noencrypt(ppnum_t);
extern void		pmap_set_noencrypt(ppnum_t pn);
extern void		pmap_clear_noencrypt(ppnum_t pn);

/*
 * JMM - This portion is exported to other kernel components right now,
 * but will be pulled back in the future when the needed functionality
 * is provided in a cleaner manner.
 */

extern pmap_t	kernel_pmap;			/* The kernel's map */
#define		pmap_kernel()	(kernel_pmap)

/* machine independent WIMG bits */

#define VM_MEM_GUARDED 		0x1		/* (G) Guarded Storage */
#define VM_MEM_COHERENT		0x2		/* (M) Memory Coherency */
#define VM_MEM_NOT_CACHEABLE	0x4		/* (I) Cache Inhibit */
#define VM_MEM_WRITE_THROUGH	0x8		/* (W) Write-Through */

#define VM_WIMG_USE_DEFAULT	0x80
#define VM_WIMG_MASK		0xFF

#define VM_MEM_SUPERPAGE	0x100		/* map a superpage instead of a base page */
#define VM_MEM_STACK		0x200

#define PMAP_OPTIONS_NOWAIT	0x1		/* don't block, return 
						 * KERN_RESOURCE_SHORTAGE 
						 * instead */
#define PMAP_OPTIONS_NOENTER	0x2		/* expand pmap if needed
						 * but don't enter mapping
						 */
#define PMAP_OPTIONS_COMPRESSOR 0x4		/* credit the compressor for
						 * this operation */
#define PMAP_OPTIONS_INTERNAL	0x8		/* page from internal object */
#define PMAP_OPTIONS_REUSABLE	0x10		/* page is "reusable" */
#define PMAP_OPTIONS_NOFLUSH	0x20		/* delay flushing of pmap */
#define PMAP_OPTIONS_NOREFMOD	0x40		/* don't need ref/mod on disconnect */
#define	PMAP_OPTIONS_ALT_ACCT	0x80		/* use alternate accounting scheme for page */
#define PMAP_OPTIONS_REMOVE	0x100		/* removing a mapping */
#define PMAP_OPTIONS_SET_REUSABLE   0x200	/* page is now "reusable" */
#define PMAP_OPTIONS_CLEAR_REUSABLE 0x400	/* page no longer "reusable" */

#if	!defined(__LP64__)
extern vm_offset_t	pmap_extract(pmap_t pmap,
				vm_map_offset_t va);
#endif
extern void		pmap_change_wiring(	/* Specify pageability */
				pmap_t		pmap,
				vm_map_offset_t	va,
				boolean_t	wired);

/* LP64todo - switch to vm_map_offset_t when it grows */
extern void		pmap_remove(	/* Remove mappings. */
				pmap_t		map,
				vm_map_offset_t	s,
				vm_map_offset_t	e);

extern void		pmap_remove_options(	/* Remove mappings. */
				pmap_t		map,
				vm_map_offset_t	s,
				vm_map_offset_t	e,
				int		options);

extern void		fillPage(ppnum_t pa, unsigned int fill);

extern void pmap_map_sharedpage(task_t task, pmap_t pmap);
extern void pmap_unmap_sharedpage(pmap_t pmap);

#if defined(__LP64__)
void pmap_pre_expand(pmap_t pmap, vm_map_offset_t vaddr);
#endif

unsigned int pmap_query_resident(pmap_t pmap,
				 vm_map_offset_t s,
				 vm_map_offset_t e);


#endif	/* _VM_PMAP_H_ */
