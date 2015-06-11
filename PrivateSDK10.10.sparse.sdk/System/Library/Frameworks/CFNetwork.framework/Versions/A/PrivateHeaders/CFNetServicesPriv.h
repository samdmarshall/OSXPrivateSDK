#ifndef __CFNETSERVICESPRIV_H__
#define __CFNETSERVICESPRIV_H__

#include <CFNetwork/CFNetwork.h>

extern CFNetServiceRef _CFNetServiceCreateFromURL(CFAllocatorRef allocator, CFURLRef url);

const SInt32 kCFStreamErrorHTTPConnectionLost = -4;

extern CFStringRef _kCFStreamSSLTrustedLeafCertificates;

#endif