#ifndef __MEDIAKIT_MKMEDIA_H__
#define __MEDIAKIT_MKMEDIA_H__

#include <CoreFoundation/CoreFoundation.h>

typedef struct __MKMedia * MKMediaRef;

MKMediaRef MKMediaCreateWithPath(CFAllocatorRef alloc, const char *device, void *a, int32_t *i32);

#endif
