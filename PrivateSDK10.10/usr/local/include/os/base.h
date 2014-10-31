/* Copyright (c) 2012 Apple Inc. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this
 * file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_LICENSE_HEADER_END@
 */

#ifndef __OS_BASE_H__
#define __OS_BASE_H__

#include <sys/cdefs.h>

#ifndef __has_builtin
#define __has_builtin(x) 0
#endif
#ifndef __has_include
#define __has_include(x) 0
#endif
#ifndef __has_feature
#define __has_feature(x) 0
#endif
#ifndef __has_attribute
#define __has_attribute(x) 0
#endif

#if __GNUC__
#define OS_NORETURN __attribute__((__noreturn__))
#define OS_NOTHROW __attribute__((__nothrow__))
#define OS_NONNULL1 __attribute__((__nonnull__(1)))
#define OS_NONNULL2 __attribute__((__nonnull__(2)))
#define OS_NONNULL3 __attribute__((__nonnull__(3)))
#define OS_NONNULL4 __attribute__((__nonnull__(4)))
#define OS_NONNULL5 __attribute__((__nonnull__(5)))
#define OS_NONNULL6 __attribute__((__nonnull__(6)))
#define OS_NONNULL7 __attribute__((__nonnull__(7)))
#define OS_NONNULL8 __attribute__((__nonnull__(8)))
#define OS_NONNULL9 __attribute__((__nonnull__(9)))
#define OS_NONNULL10 __attribute__((__nonnull__(10)))
#define OS_NONNULL11 __attribute__((__nonnull__(11)))
#define OS_NONNULL12 __attribute__((__nonnull__(12)))
#define OS_NONNULL13 __attribute__((__nonnull__(13)))
#define OS_NONNULL14 __attribute__((__nonnull__(14)))
#define OS_NONNULL15 __attribute__((__nonnull__(15)))
#define OS_NONNULL_ALL __attribute__((__nonnull__))
#define OS_SENTINEL __attribute__((__sentinel__))
#define OS_PURE __attribute__((__pure__))
#define OS_CONST __attribute__((__const__))
#define OS_WARN_RESULT __attribute__((__warn_unused_result__))
#define OS_MALLOC __attribute__((__malloc__))
#define OS_USED __attribute__((__used__))
#define OS_UNUSED __attribute__((__unused__))
#define OS_WEAK __attribute__((__weak__))
#define OS_WEAK_IMPORT __attribute__((__weak_import__))
#define OS_NOINLINE __attribute__((__noinline__))
#define OS_ALWAYS_INLINE __attribute__((__always_inline__))
#define OS_TRANSPARENT_UNION __attribute__((__transparent_union__))
#define OS_ALIGNED(n) __attribute__((__aligned__((n))))
#define OS_FORMAT_PRINTF(x,y) __attribute__((__format__(printf,x,y)))
#define OS_EXPORT extern __attribute__((__visibility__("default")))
#define OS_INLINE static __inline__
#define OS_EXPECT(x, v) __builtin_expect((x), (v))
#else
#define OS_NORETURN
#define OS_NOTHROW
#define OS_NONNULL1
#define OS_NONNULL2
#define OS_NONNULL3
#define OS_NONNULL4
#define OS_NONNULL5
#define OS_NONNULL6
#define OS_NONNULL7
#define OS_NONNULL8
#define OS_NONNULL9
#define OS_NONNULL10
#define OS_NONNULL11
#define OS_NONNULL12
#define OS_NONNULL13
#define OS_NONNULL14
#define OS_NONNULL15
#define OS_NONNULL_ALL
#define OS_SENTINEL
#define OS_PURE
#define OS_CONST
#define OS_WARN_RESULT
#define OS_MALLOC
#define OS_USED
#define OS_UNUSED
#define OS_WEAK
#define OS_WEAK_IMPORT
#define OS_NOINLINE
#define OS_ALWAYS_INLINE
#define OS_TRANSPARENT_UNION
#define OS_ALIGNED(n)
#define OS_FORMAT_PRINTF(x,y)
#define OS_EXPORT extern
#define OS_INLINE static inline
#define OS_EXPECT(x, v) (x)
#endif

#if __has_extension(attribute_overloadable)
#define OS_OVERLOADABLE __attribute__((__overloadable__))
#else
#define OS_OVERLOADABLE
#endif

#if __has_feature(objc_fixed_enum) || __has_extension(cxx_strong_enums)
#define OS_ENUM(_name, _type, ...) \
		typedef enum : _type { __VA_ARGS__ } _name##_t
#else
#define OS_ENUM(_name, _type, ...) \
		enum { __VA_ARGS__ }; typedef _type _name##_t
#endif

#define __OS_STRINGIFY(s) #s
#define OS_STRINGIFY(s) __OS_STRINGIFY(s)
#define __OS_CONCAT(x, y) x ## y
#define OS_CONCAT(x, y) __OS_CONCAT(x, y)

#endif /* __OS_BASE_H__ */
