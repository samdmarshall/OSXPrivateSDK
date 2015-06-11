#ifndef __OS_BASE_PRIVATE_H__
#define __OS_BASE_PRIVATE_H__

#include <os/base.h>

#if __GNUC__
#define os_fastpath(x) ((__typeof__(x))(uintptr_t)__builtin_expect((uintptr_t)(x), ~0l))
#define os_slowpath(x) ((__typeof__(x))(uintptr_t)__builtin_expect((uintptr_t)(x), 0l))
#define os_constant(x) __builtin_constant_p((x))
#define os_hardware_trap() __asm__ __volatile__ (""); __builtin_trap()

#define __OS_COMPILETIME_ASSERT__(e) __extension__({ \
	char __compile_time_assert__[(e) ? 1 : -1];	\
	(void)__compile_time_assert__; \
})

#define __OS_CONST __attribute__((__const__))
#define __OS_PRINTFLIKE(x,y) __attribute__((__format__(printf,x,y)))
#else /* __GNUC__ */
#define os_fastpath(x) (x)
#define os_slowpath(x) (x)
#define os_constant(x) ((long)0)
#define os_hardware_trap() abort()

#define __OS_COMPILETIME_ASSERT__(e) (e)

#define __OS_CONST
#define __OS_PRINTFLIKE(x,y)
#endif /* __GNUC__ */


#endif