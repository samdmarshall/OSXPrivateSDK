/*
 * Copyright (c) 2000-2008 Apple Inc. All rights reserved.
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
 */

#ifndef	_KERN_CLOCK_H_
#define	_KERN_CLOCK_H_

#include <stdint.h>
#include <mach/mach_types.h>
#include <mach/clock_types.h>
#include <mach/message.h>
#include <mach/mach_time.h>

#include <kern/kern_types.h>

#include <sys/cdefs.h>

#ifdef	__LP64__

typedef unsigned long		clock_sec_t;
typedef unsigned int		clock_usec_t, clock_nsec_t;

#else	/* __LP64__ */

typedef uint32_t			clock_sec_t;
typedef uint32_t			clock_usec_t, clock_nsec_t;

#endif	/* __LP64__ */


__BEGIN_DECLS


extern void			clock_get_calendar_microtime(
						clock_sec_t			*secs,
						clock_usec_t		*microsecs);

extern void			clock_get_calendar_absolute_and_microtime(
						clock_sec_t			*secs,
						clock_usec_t		*microsecs,
						uint64_t    		*abstime);

extern void			clock_get_calendar_nanotime(
						clock_sec_t			*secs,
						clock_nsec_t		*nanosecs);

extern void			clock_get_system_microtime(
						clock_sec_t			*secs,
						clock_usec_t		*microsecs);

extern void			clock_get_system_nanotime(
						clock_sec_t			*secs,
						clock_nsec_t		*nanosecs);

extern void				clock_timebase_info(
							mach_timebase_info_t	info);

extern void				clock_get_uptime(
							uint64_t		*result);

extern void				clock_interval_to_deadline(
							uint32_t		interval,
							uint32_t		scale_factor,
							uint64_t		*result);

extern void				clock_interval_to_absolutetime_interval(
							uint32_t		interval,
							uint32_t		scale_factor,
							uint64_t		*result);

extern void				clock_absolutetime_interval_to_deadline(
							uint64_t		abstime,
							uint64_t		*result);

extern void				clock_delay_until(
							uint64_t		deadline);

extern void				absolutetime_to_nanoseconds(
							uint64_t		abstime,
							uint64_t		*result);

extern void             nanoseconds_to_absolutetime(
							uint64_t		nanoseconds,
							uint64_t		*result);


/*
 * Obsolete interfaces.
 */

#ifndef	__LP64__

#define MACH_TIMESPEC_SEC_MAX		(0 - 1)
#define MACH_TIMESPEC_NSEC_MAX		(NSEC_PER_SEC - 1)

#define MACH_TIMESPEC_MAX	((mach_timespec_t) {				\
									MACH_TIMESPEC_SEC_MAX,		\
									MACH_TIMESPEC_NSEC_MAX } )
#define MACH_TIMESPEC_ZERO	((mach_timespec_t) { 0, 0 } )

#define ADD_MACH_TIMESPEC_NSEC(t1, nsec)		\
  do {											\
	(t1)->tv_nsec += (clock_res_t)(nsec);		\
	if ((clock_res_t)(nsec) > 0 &&				\
			(t1)->tv_nsec >= NSEC_PER_SEC) {	\
		(t1)->tv_nsec -= NSEC_PER_SEC;			\
		(t1)->tv_sec += 1;						\
	}											\
	else if ((clock_res_t)(nsec) < 0 &&			\
				 (t1)->tv_nsec < 0) {			\
		(t1)->tv_nsec += NSEC_PER_SEC;			\
		(t1)->tv_sec -= 1;						\
	}											\
  } while (0)

#include <Availability.h>

/* Use mach_absolute_time() */
extern mach_timespec_t	clock_get_system_value(void) __OSX_AVAILABLE_BUT_DEPRECATED(__MAC_10_0, __MAC_10_8, __IPHONE_2_0, __IPHONE_6_0);

extern mach_timespec_t	clock_get_calendar_value(void) __OSX_AVAILABLE_BUT_DEPRECATED(__MAC_10_0, __MAC_10_8, __IPHONE_2_0, __IPHONE_6_0);

#else	/* __LP64__ */


#endif	/* __LP64__ */

extern void				delay_for_interval(
							uint32_t		interval,
							uint32_t		scale_factor);


__END_DECLS

#endif	/* _KERN_CLOCK_H_ */
