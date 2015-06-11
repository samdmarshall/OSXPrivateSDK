#ifndef __EFILOGIN_H__
#define __EFILOGIN_H__

#include <CoreFoundation/CoreFoundation.h>

CFArrayRef EFILoginCopyInterfaceGraphics(CFMutableArrayRef locsList, CFStringRef volStr);

#define kEFILoginDataKey CFSTR("data")
#define kEFILoginFileNameKey CFSTR("file name")

#endif