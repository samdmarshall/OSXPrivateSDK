#ifndef __NETWORK_EXTENSION__NEPOLICY_H__
#define __NETWORK_EXTENSION__NEPOLICY_H__

#include <CoreFoundation/CoreFoundation.h>

typedef struct NEPolicySession * NEPolicySessionRef;

extern NEPolicySessionRef NEPolicyCreateSession(CFAllocatorRef alloc, CFStringRef name, CFTypeRef a, CFTypeRef b);

extern Boolean NEPolicyApply(NEPolicySessionRef policySession);

extern NEPolicyAdd(NEPolicySessionRef policySession, void *a, CFMutableArrayRef conditions, CFMutableDictionaryRef result, void *b);


#define kNEPolicyConditionType CFSTR("ConditionType")
#define kNEPolicyValPolicyConditionTypeApplication CFSTR("Application")

#define kNEPolicyApplicationUUID CFSTR("ApplicationUUID")

#define kNEPolicyConditionType CFSTR("ConditionType")
#define kNEPolicyValPolicyConditionTypeAllInterfaces CFSTR("AllInterfaces")

#define kNEPolicyResult CFSTR("Result")
#define kNEPolicyValPolicyResultPass CFSTR("Pass")

#define kNEPolicyIDInvalid 0

#endif