#ifndef __ONCE_PRIVATE_H__
#define __ONCE_PRIVATE_H__

#include <os/base_private.h>

typedef struct os_once_t {
	
} os_once_t;

typedef semaphore_t os_semaphore_t;

extern semaphore_t os_get_cached_semaphore();

extern void os_put_cached_semaphore(semaphore_t semaphore);

extern os_once(os_once_t *once, struct _pthread_once_context *ctx, void (*pth_once_handler)(void *context));

extern void* __os_once_reset();

#endif