#ifndef __SERVICEMANAGEMENT_PRIVATE_H__
#define __SERVICEMANAGEMENT_PRIVATE_H__

#include <ServiceManagement/ServiceManagement.h>

extern int SMJobIsEnabled(CFStringRef domain, CFStringRef service, Boolean *value);

#endif