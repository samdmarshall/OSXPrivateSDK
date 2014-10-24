#ifndef __CFXPCBRIDGE__
#define __CFXPCBRIDGE__

#include <CoreFoundation/CoreFoundation.h>
#include <xpc/xpc.h>

extern CFTypeRef _CFXPCCreateCFObjectFromXPCObject(xpc_object_t xpcattrs);

extern xpc_object_t _CFXPCCreateXPCObjectFromCFObject(CFTypeRef attrs);

#endif