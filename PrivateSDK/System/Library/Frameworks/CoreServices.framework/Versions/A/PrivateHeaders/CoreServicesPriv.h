#ifndef __CORESERVICESPRIV_H__
#define __CORESERVICESPRIV_H__

#include <CoreFoundation/CoreFoundation.h>
#include <Security/Secbase.h>

extern CFStringRef _CSBackToMyMacCopyDomain();

extern CFStringRef _CSCopyKerberosPrincipalForCertificate(SecCertificateRef cert);

extern CFStringRef _CSCopyAppleIDAccountForAppleIDCertificate(SecCertificateRef cert, CFTypeRef thing);

#endif