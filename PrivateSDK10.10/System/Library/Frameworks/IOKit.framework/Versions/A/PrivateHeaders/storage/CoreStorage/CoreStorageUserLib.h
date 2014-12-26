#ifndef __CORESTORAGEUSERLIB__
#define __CORESTORAGEUSERLIB__

#include <IOKit/IOKitLib.h>

#define kCoreStorageIsEncryptedKey "CoreStorage Encrypted"
#define kCoreStorageNotificationLVGChanged "CoreStorageNotificationLVGChanged"
#define kCoreStorageNotificationVolumeChanged "CoreStorageNotificationVolumeChanged"

kern_return_t CoreStorageEnableNotifications();

#endif