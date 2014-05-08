/*
 * Copyright (c) 2000-2005 Apple Computer, Inc. All rights reserved.
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


#ifndef _KERN_WAIT_QUEUE_H_
#define _KERN_WAIT_QUEUE_H_

#include <mach/mach_types.h>
#include <mach/sync_policy.h>
#include <mach/kern_return.h>		/* for kern_return_t */

#include <kern/kern_types.h>		/* for wait_queue_t */
#include <kern/queue.h>

#include <sys/cdefs.h>


__BEGIN_DECLS

/******** Semi-Public interfaces (not a part of a higher construct) ************/

extern unsigned int wait_queue_set_size(void);
extern unsigned int wait_queue_link_size(void);

extern kern_return_t wait_queue_init(
			wait_queue_t wait_queue,
			int policy);

extern wait_queue_set_t wait_queue_set_alloc(
			int policy);

extern kern_return_t wait_queue_set_init(
			wait_queue_set_t set_queue,
			int policy);

extern kern_return_t wait_queue_set_free(
			wait_queue_set_t set_queue);

extern wait_queue_link_t wait_queue_link_alloc(
			int policy);

extern kern_return_t wait_queue_link_free(
			wait_queue_link_t link_element);

extern kern_return_t wait_queue_link(
			wait_queue_t wait_queue,
			wait_queue_set_t set_queue);

extern kern_return_t wait_queue_link_noalloc(
			wait_queue_t wait_queue,
			wait_queue_set_t set_queue,
			wait_queue_link_t link);

extern boolean_t wait_queue_member(
			wait_queue_t wait_queue,
			wait_queue_set_t set_queue);

extern kern_return_t wait_queue_unlink(
			wait_queue_t wait_queue,
			wait_queue_set_t set_queue);

extern kern_return_t wait_queue_unlink_all(
			wait_queue_t wait_queue);

extern kern_return_t wait_queue_set_unlink_all(
			wait_queue_set_t set_queue);


/* legacy API */
kern_return_t wait_queue_sub_init(
			wait_queue_set_t set_queue,
			int policy);

kern_return_t wait_queue_sub_clearrefs(
			wait_queue_set_t wq_set);

extern kern_return_t wait_subqueue_unlink_all(
			wait_queue_set_t set_queue);

extern wait_queue_t wait_queue_alloc(
			int policy);

extern kern_return_t wait_queue_free(
			wait_queue_t wait_queue);

/* assert intent to wait on <wait_queue,event64> pair */
extern wait_result_t wait_queue_assert_wait64(
			wait_queue_t wait_queue,
			event64_t wait_event,
			wait_interrupt_t interruptible,
			uint64_t deadline);

extern wait_result_t wait_queue_assert_wait64_with_leeway(
			wait_queue_t wait_queue,
			event64_t wait_event,
			wait_interrupt_t interruptible,
			wait_timeout_urgency_t urgency,
			uint64_t deadline,
			uint64_t leeway);

/* wakeup the most appropriate thread waiting on <wait_queue,event64> pair */
extern kern_return_t wait_queue_wakeup64_one(
			wait_queue_t wait_queue,
			event64_t wake_event,
			wait_result_t result);

/* wakeup all the threads waiting on <wait_queue,event64> pair */
extern kern_return_t wait_queue_wakeup64_all(
			wait_queue_t wait_queue,
			event64_t wake_event,
			wait_result_t result);

/* wakeup a specified thread waiting iff waiting on <wait_queue,event64> pair */
extern kern_return_t wait_queue_wakeup64_thread(
			wait_queue_t wait_queue,
			event64_t wake_event,
			thread_t thread,
			wait_result_t result);

/*
 * Compatibility Wait Queue APIs based on pointer events instead of 64bit
 * integer events.
 */

/* assert intent to wait on <wait_queue,event> pair */
extern wait_result_t wait_queue_assert_wait(
			wait_queue_t wait_queue,
			event_t wait_event,
			wait_interrupt_t interruptible,
			uint64_t deadline);

/* assert intent to wait on <wait_queue,event> pair */
extern wait_result_t wait_queue_assert_wait_with_leeway(
			wait_queue_t wait_queue,
			event_t wait_event,
			wait_interrupt_t interruptible,
			wait_timeout_urgency_t urgency,
			uint64_t deadline,
			uint64_t leeway);

/* wakeup the most appropriate thread waiting on <wait_queue,event> pair */
extern kern_return_t wait_queue_wakeup_one(
			wait_queue_t wait_queue,
			event_t wake_event,
			wait_result_t result,
	                int priority);

/* wakeup all the threads waiting on <wait_queue,event> pair */
extern kern_return_t wait_queue_wakeup_all(
			wait_queue_t wait_queue,
			event_t wake_event,
			wait_result_t result);

/* wakeup a specified thread waiting iff waiting on <wait_queue,event> pair */
extern kern_return_t wait_queue_wakeup_thread(
			wait_queue_t wait_queue,
			event_t wake_event,
			thread_t thread,
			wait_result_t result);

__END_DECLS

#endif	/* _KERN_WAIT_QUEUE_H_ */

