/*
 * Copyright (c) 2009-2012 Apple Inc. All rights reserved.
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
#ifndef _I386_PAL_ROUTINES_H
#define _I386_PAL_ROUTINES_H

#include <stdint.h>
#include <mach/kern_return.h>
#include <mach/mach_types.h>

#if defined(__cplusplus)
extern "C" {
#endif

/* PAL routines exported to kexts */

/*
 * Load registers with these values. In 32-bit mode,
 * only the low-order half is loaded (if applicable)
 */
struct pal_efi_registers {
    uint64_t rcx;
    uint64_t rdx;
    uint64_t r8;
    uint64_t r9;
    uint64_t rax;
};

/*
 * Load registers and stack with these values before
 * executing "call" instruction
 */
kern_return_t
pal_efi_call_in_64bit_mode(uint64_t func,
                           struct pal_efi_registers *efi_reg,
                           void *stack_contents,
                           size_t stack_contents_size, /* 16-byte multiple */
                           uint64_t *efi_status);

kern_return_t
pal_efi_call_in_32bit_mode(uint32_t func,
                           struct pal_efi_registers *efi_reg,
                           void *stack_contents,
                           size_t stack_contents_size, /* 16-byte multiple */
                           uint32_t *efi_status);

/* Go into ACPI sleep */

boolean_t pal_machine_sleep(uint8_t type_a, 
                            uint8_t type_b, 
                            uint32_t bit_position, 
                            uint32_t disable_mask, 
                            uint32_t enable_mask);

/* xnu internal PAL routines */

#if defined(__cplusplus)
}
#endif

#endif /* _I386_PAL_ROUTINES_H */
