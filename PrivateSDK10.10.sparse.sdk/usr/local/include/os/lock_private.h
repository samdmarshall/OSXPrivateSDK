#ifndef __OS_LOCK_PRIVATE_H__
#define __OS_LOCK_PRIVATE_H__

#include <stdbool.h>

#define OS_LOCK_HANDOFF_INIT 0
#define OS_LOCK_SPIN_INIT 0

typedef uintptr_t os_lock_handoff_s;
typedef uintptr_t os_lock_spin_s;

extern bool os_lock_trylock(uintptr_t lock);
extern uintptr_t os_lock_lock(uintptr_t lock);
extern uintptr_t os_lock_unlock(uintptr_t lock);

#endif