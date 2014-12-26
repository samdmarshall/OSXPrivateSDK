#ifndef __CORESTORAGECRYPTOIDS_H__
#define __CORESTORAGECRYPTOIDS_H__

#include <CoreFoundation/CoreFoundation.h>

CFDictionaryRef CoreStorageCopyFamilyProperties(CFStringRef uuidStr);
CFStringRef CoreStorageCopyPVWipeKeyUUID(char *cspvbsd);

#define kCoreStorageLVFUUIDKey "CoreStorage LVF UUID"
#define kCoreStorageFamilyEncryptionContextKey "com.apple.corestorage.lvf.encryption.context"

#endif