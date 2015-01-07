#ifndef __CORESTORAGEUSERLIB__
#define __CORESTORAGEUSERLIB__

#include <IOKit/IOKitLib.h>

#define kCoreStorageIsEncryptedKey "CoreStorage Encrypted"
#define kCoreStorageNotificationLVGChanged "CoreStorageNotificationLVGChanged"
#define kCoreStorageNotificationVolumeChanged "CoreStorageNotificationVolumeChanged"

#define kCoreStorageGroupTypeKey "com.apple.corestorage.lvg.type"
#define kCoreStorageLogicalGroupUUIDKey "com.apple.corestorage.lv.groupUUID"
#define kCoreStorageGroupTypeCPDK "CPDK"
#define kCoreStorageLogicalClassName "CoreStorageLogical"

#define kCSFDEEFILoginUnlockIdentID "efilogin-unlock-ident"

kern_return_t CoreStorageEnableNotifications();

typedef CFStringRef CoreStorageLogicalRef;
typedef CFStringRef CoreStorageGroupRef;

CFMutableDictionaryRef CoreStorageCopyVolumeProperties(CoreStorageLogicalRef lvgUUID);
CFMutableDictionaryRef CoreStorageCopyLVGProperties(CoreStorageLogicalRef lvgUUID);

#endif