#ifndef __OS_LOCK_PRIVATE_H__
#define __OS_LOCK_PRIVATE_H__

#include <stdbool.h>

#define OS_LOCK_HANDOFF_INIT 0
#define OS_LOCK_SPIN_INIT 0

typedef int32_t * os_lock_handoff_s;
typedef int32_t * os_lock_spin_s;

extern bool os_lock_trylock(int32_t * lock);
extern void os_lock_lock(int32_t * lock);
extern void os_lock_unlock(int32_t * lock);

#endif