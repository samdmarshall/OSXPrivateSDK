#ifndef __CSFULLDISKENCRYPTION_H__
#define __CSFULLDISKENCRYPTION_H__

#include <CoreFoundation/CoreFoundation.h>

#define kCSFDEPropertyCacheDir "/System/Library/Caches/com.apple.corestorage"
#define kCSFDEPropertyCacheFileEncrypted "EncryptedRoot.plist.wipekey"
#define kCSFDECryptoUsersID "CryptoUsers"
#define kCSFDELastUpdateTime "LastUpdateTime"

Boolean CSFDEInitPropertyCache(CFDictionaryRef ectx, char *parentPath, CFStringRef wipeKeyUUID);
Boolean CSFDEWritePropertyCacheToFD(CFDictionaryRef ectx, int erfd, CFStringRef wipeKeyUUID);

#endif