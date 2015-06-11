#ifndef __NETFSUTIL_PRIVATE_H__
#define __NETFSUTIL_PRIVATE_H__

#include <CoreFoundation/CoreFoundation.h>

#define kNetFSTraceMessageSchemeKey CFSTR("TraceMessageScheme")
#define kNetFSSMBNativeOSKey CFSTR("SMBNativeOS")
#define kNetFSSMBNativeLANManagerKey CFSTR("SMBNativeLANManager")
#define kNetFSMachineTypeKey CFSTR("MachineType")
#define kNetFSUseAnonymousKey CFSTR("Anonymous")

extern int NetFSCopyHostAndPort(CFURLRef url, CFStringRef *server, CFStringRef *port);

#endif