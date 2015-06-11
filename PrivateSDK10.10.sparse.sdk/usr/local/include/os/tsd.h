/*
 * Copyright (c) 2012 Apple Inc. All rights reserved.
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

#ifndef OS_TSD_H
#define OS_TSD_H

#include <stdint.h>

/* The low nine slots of the TSD are reserved for libsyscall usage. */
#define __TSD_RESERVED_BASE 0
#define __TSD_RESERVED_MAX 9

#define __TSD_THREAD_SELF 0
#define __TSD_ERRNO 1
#define __TSD_MIG_REPLY 2
#define __TSD_SEMAPHORE_CACHE 9


__attribute__((always_inline))
static __inline__ unsigned int
_os_cpu_number(void)
{
	/* Not yet implemented */
	return 0;
}

__attribute__((always_inline))
static __inline__ void*
_os_tsd_get_direct(unsigned long slot)
{
	void *ret;
#if defined(__i386__) || defined(__x86_64__)
	__asm__("mov %%gs:%1, %0" : "=r" (ret) : "m" (*(void **)(slot * sizeof(void *))));
#endif


	return ret;
}

__attribute__((always_inline))
static __inline__ int
_os_tsd_set_direct(unsigned long slot, void* val)
{
#if defined(__i386__) && defined(__PIC__)
	__asm__("movl %1, %%gs:%0" : "=m" (*(void **)(slot * sizeof(void *))) : "rn" (val));
#elif defined(__i386__) && !defined(__PIC__)
	__asm__("movl %1, %%gs:%0" : "=m" (*(void **)(slot * sizeof(void *))) : "ri" (val));
#elif defined(__x86_64__)
	__asm__("movq %1, %%gs:%0" : "=m" (*(void **)(slot * sizeof(void *))) : "rn" (val));
#endif

	return 0;
}

#define DISPATCH_TSD_INLINE DISPATCH_ALWAYS_INLINE_NDEBUG

#if DISPATCH_USE_DIRECT_TSD
static const unsigned long dispatch_queue_key		= __PTK_LIBDISPATCH_KEY0;
static const unsigned long dispatch_voucher_key		= __PTK_LIBDISPATCH_KEY1;
static const unsigned long dispatch_cache_key		= __PTK_LIBDISPATCH_KEY2;
static const unsigned long dispatch_io_key			= __PTK_LIBDISPATCH_KEY3;
static const unsigned long dispatch_apply_key		= __PTK_LIBDISPATCH_KEY4;
static const unsigned long dispatch_defaultpriority_key =__PTK_LIBDISPATCH_KEY5;
#if DISPATCH_INTROSPECTION
static const unsigned long dispatch_introspection_key =__PTK_LIBDISPATCH_KEY5+1;
#elif DISPATCH_PERF_MON
static const unsigned long dispatch_bcounter_key	= __PTK_LIBDISPATCH_KEY5+1;
#endif
#if DISPATCH_USE_OS_SEMAPHORE_CACHE
static const unsigned long dispatch_sema4_key		= __TSD_SEMAPHORE_CACHE;
#else
static const unsigned long dispatch_sema4_key		= __PTK_LIBDISPATCH_KEY5+2;
#endif

#ifndef __TSD_THREAD_QOS_CLASS
#define __TSD_THREAD_QOS_CLASS 4
#endif
static const unsigned long dispatch_priority_key	= __TSD_THREAD_QOS_CLASS;

DISPATCH_TSD_INLINE
static inline void
_dispatch_thread_key_create(const unsigned long *k, void (*d)(void *))
{
	if (!*k || !d) return;
	dispatch_assert_zero(pthread_key_init_np((int)*k, d));
}
#else
extern pthread_key_t dispatch_queue_key;
extern pthread_key_t dispatch_voucher_key;
#if DISPATCH_USE_OS_SEMAPHORE_CACHE
#error "Invalid DISPATCH_USE_OS_SEMAPHORE_CACHE configuration"
#else
extern pthread_key_t dispatch_sema4_key;
#endif
extern pthread_key_t dispatch_cache_key;
extern pthread_key_t dispatch_io_key;
extern pthread_key_t dispatch_apply_key;
extern pthread_key_t dispatch_defaultpriority_key;
#if DISPATCH_INTROSPECTION
extern pthread_key_t dispatch_introspection_key;
#elif DISPATCH_PERF_MON
extern pthread_key_t dispatch_bcounter_key;
#endif


DISPATCH_TSD_INLINE
static inline void
_dispatch_thread_key_create(pthread_key_t *k, void (*d)(void *))
{
	dispatch_assert_zero(pthread_key_create(k, d));
}
#endif

#if DISPATCH_USE_TSD_BASE && !DISPATCH_DEBUG
#else // DISPATCH_USE_TSD_BASE
DISPATCH_TSD_INLINE
static inline void
_dispatch_thread_setspecific(pthread_key_t k, void *v)
{
#if DISPATCH_USE_DIRECT_TSD
	if (_pthread_has_direct_tsd()) {
		(void)_pthread_setspecific_direct(k, v);
		return;
	}
#endif
	dispatch_assert_zero(pthread_setspecific(k, v));
}

DISPATCH_TSD_INLINE
static inline void *
_dispatch_thread_getspecific(pthread_key_t k)
{
#if DISPATCH_USE_DIRECT_TSD
	if (_pthread_has_direct_tsd()) {
		return _pthread_getspecific_direct(k);
	}
#endif
	return pthread_getspecific(k);
}
#endif // DISPATCH_USE_TSD_BASE

#if TARGET_OS_WIN32
#define _dispatch_thread_self() ((uintptr_t)GetCurrentThreadId())
#else
#if DISPATCH_USE_DIRECT_TSD
#define _dispatch_thread_self() ((uintptr_t)_dispatch_thread_getspecific( \
		_PTHREAD_TSD_SLOT_PTHREAD_SELF))
#else
#define _dispatch_thread_self() ((uintptr_t)pthread_self())
#endif
#endif

#if TARGET_OS_WIN32
#define _dispatch_thread_port() ((mach_port_t)0)
#else
#if DISPATCH_USE_DIRECT_TSD
#define _dispatch_thread_port() ((mach_port_t)_dispatch_thread_getspecific(\
		_PTHREAD_TSD_SLOT_MACH_THREAD_SELF))
#else
#define _dispatch_thread_port() (pthread_mach_thread_np(_dispatch_thread_self()))
#endif
#endif

DISPATCH_TSD_INLINE DISPATCH_CONST
static inline unsigned int
_dispatch_cpu_number(void)
{
#if TARGET_IPHONE_SIMULATOR && IPHONE_SIMULATOR_HOST_MIN_VERSION_REQUIRED < 1090
	return 0;
#elif __has_include(<os/tsd.h>)
	return _os_cpu_number();
#elif defined(__x86_64__) || defined(__i386__)
	struct { uintptr_t p1, p2; } p;
	__asm__("sidt %[p]" : [p] "=&m" (p));
	return (unsigned int)(p.p1 & 0xfff);
#else
	// Not yet implemented.
	return 0;
#endif
}

#undef DISPATCH_TSD_INLINE

#endif
