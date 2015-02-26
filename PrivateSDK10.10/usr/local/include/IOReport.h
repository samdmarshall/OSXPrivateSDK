#ifndef __IOREPORT_H__
#define __IOREPORT_H__

#include <CoreFoundation/CoreFoundation.h>
#include <IOKit/IOReportMacros.h>

enum {
	kIOReportIterOk,
};

#define kIOPMAssertionTypeDisableRealPowerSources_Debug CFSTR("DisableRealPowerSources_Debug")

typedef struct IOReportSubscriptionRef *IOReportSubscriptionRef;
typedef CFDictionaryRef IOReportSampleRef;
typedef CFDictionaryRef IOReportChannelRef;

extern CFMutableDictionaryRef IOReportCopyChannelsWithID(CFDictionaryRef mdict, uint64_t channel_id, CFTypeRef a);

extern IOReportSubscriptionRef IOReportCreateSubscription(void *a, CFMutableDictionaryRef desiredChannels, CFMutableDictionaryRef *subbedChannels, uint64_t channel_id, CFTypeRef b);

extern CFDictionaryRef IOReportCreateSamples(IOReportSubscriptionRef iorsub, CFMutableDictionaryRef subbedChannels, CFTypeRef a);


typedef int (^ioreportiterateblock)(IOReportSampleRef ch);

extern void IOReportIterate(CFDictionaryRef samples, ioreportiterateblock);

extern uint64_t IOReportSimpleGetIntegerValue(IOReportChannelRef ch, void *a);

extern CFStringRef IOReportChannelGetDriverName(IOReportChannelRef ch);

extern uint32_t IOReportStateGetCount(IOReportChannelRef ch);

extern uint64_t IOReportStateGetIDForIndex(IOReportChannelRef ch, uint32_t index);

extern int IOReportStateGetCurrent(IOReportChannelRef ch);

extern uint64_t IOReportStateGetResidency(IOReportChannelRef ch, uint32_t index);

extern uint64_t IOReportStateGetInTransitions(IOReportChannelRef ch, uint32_t index);

extern CFDictionaryRef IOReportCreateSamplesDelta(CFDictionaryRef prev, CFDictionaryRef current, CFTypeRef a);

extern pid_t IOReportChannelGetChannelID(IOReportChannelRef ch);

extern int64_t IOReportArrayGetValueAtIndex(IOReportChannelRef ch, uint32_t index);

#endif