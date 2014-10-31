/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary, NSString, TLAccessQueue;

@interface TLToneManager : NSObject
{
    BOOL _shouldUseServiceToAccessTonePreferences;
    BOOL _shouldIgnoreNextToneDidChangeNotification;
    NSMutableDictionary *_iTunesTonesByIdentifier;
    NSMutableDictionary *_iTunesToneIdentifiersByPID;
    NSMutableDictionary *_alertTonesByIdentifier;
    NSDictionary *_toneIdentifierAliasMap;
    NSDictionary *_cachedTonePreferences;
    TLAccessQueue *_accessQueue;
}

+ (struct __CFString *)_copySharedResourcesPreferencesDomainForDomain:(struct __CFString *)arg1;
+ (id)_defaultToneIdentifierForAlertType:(int)arg1;
+ (id)_copySystemWideTonePreferenceKeyForAlertType:(int)arg1 accountIdentifier:(id)arg2;
+ (id)sharedToneManager;
@property(retain, setter=_setAccessQueue:) TLAccessQueue *_accessQueue; // @synthesize _accessQueue;
@property(nonatomic, setter=_setShouldIgnoreNextToneDidChangeNotification:) BOOL _shouldIgnoreNextToneDidChangeNotification; // @synthesize _shouldIgnoreNextToneDidChangeNotification;
@property(retain, nonatomic, setter=_setCachedTonePreferences:) NSDictionary *_cachedTonePreferences; // @synthesize _cachedTonePreferences;
@property(nonatomic, setter=_setShouldUseServiceToAccessTonePreferences:) BOOL _shouldUseServiceToAccessTonePreferences; // @synthesize _shouldUseServiceToAccessTonePreferences;
@property(retain, nonatomic, setter=_setToneIdentifierAliasMap:) NSDictionary *_toneIdentifierAliasMap; // @synthesize _toneIdentifierAliasMap;
@property(retain, nonatomic, setter=_setAlertTonesByIdentifier:) NSMutableDictionary *_alertTonesByIdentifier; // @synthesize _alertTonesByIdentifier;
@property(retain, nonatomic, setter=_setITunesToneIdentifiersByPID:) NSMutableDictionary *_iTunesToneIdentifiersByPID; // @synthesize _iTunesToneIdentifiersByPID;
@property(retain, nonatomic, setter=_setITunesTonesByIdentifier:) NSMutableDictionary *_iTunesTonesByIdentifier; // @synthesize _iTunesTonesByIdentifier;
- (void)_handleTonePreferencesChangedNotification;
- (BOOL)_toneIsSettableForAlertType:(int)arg1;
- (BOOL)_ensureDirectoryExistsAtPath:(id)arg1;
- (id)_localizedNameOfToneWithIdentifier:(id)arg1;
- (BOOL)_filePathHasSupportedExtensionForRingtone:(id)arg1;
- (id)_fileNameFromToneIdentifier:(id)arg1 withPrefix:(id)arg2;
- (void)_performBlockInAccessQueue:(id)arg1;
- (BOOL)toneWithIdentifierIsValid:(id)arg1;
- (BOOL)_toneWithIdentifierIsValid:(id)arg1;
- (id)_toneIdentifierForFileAtPath:(id)arg1 isValid:(char *)arg2;
- (id)_toneIdentifierForFileAtPath:(id)arg1;
- (id)_nameForToneIdentifier:(id)arg1 isValid:(char *)arg2;
- (id)nameForToneIdentifier:(id)arg1;
- (id)_previewSoundForToneIdentifier:(id)arg1;
- (id)_filePathForToneIdentifier:(id)arg1 isValid:(char *)arg2;
- (id)filePathForToneIdentifier:(id)arg1;
- (unsigned int)soundIDForToneIdentifier:(id)arg1;
- (id)_defaultRingtonePath;
- (id)_defaultRingtoneName;
- (id)defaultRingtoneIdentifier;
- (id)defaultToneIdentifierForAlertType:(int)arg1;
- (unsigned int)currentToneSoundIDForAlertType:(int)arg1 accountIdentifier:(id)arg2;
- (unsigned int)currentToneSoundIDForAlertType:(int)arg1;
- (id)currentToneNameForAlertType:(int)arg1;
- (void)setCurrentToneIdentifier:(id)arg1 forAlertType:(int)arg2 accountIdentifier:(id)arg3;
- (id)currentToneIdentifierForAlertType:(int)arg1 accountIdentifier:(id)arg2;
- (id)_currentToneIdentifierForAlertType:(int)arg1 accountIdentifier:(id)arg2;
- (void)setCurrentToneIdentifier:(id)arg1 forAlertType:(int)arg2;
- (id)currentToneIdentifierForAlertType:(int)arg1;
- (BOOL)_setToneIdentifierUsingService:(id)arg1 forPreferenceKey:(id)arg2;
- (id)_tonePreferencesFromService;
- (id)_newServiceConnection;
- (BOOL)_toneWithIdentifierIsSystemAlertTone:(id)arg1;
- (BOOL)_toneWithIdentifierIsITunesRingtone:(id)arg1;
- (BOOL)_toneWithIdentifierIsNonDefaultSystemRingtone:(id)arg1;
- (BOOL)_toneWithIdentifierIsDefaultRingtone:(id)arg1;
- (id)_aliasForToneIdentifier:(id)arg1;
- (void)_loadToneIdentifierAliasMap;
- (void)_loadAlertToneInfo;
- (id)_systemModernSoundDirectory;
- (id)_systemNewSoundDirectory;
- (id)_systemSoundDirectory;
- (id)_baseDirectoryForAlertToneSoundFiles;
- (int)_lockManifestAtPath:(id)arg1;
- (BOOL)_removeToneFromManifestAtPath:(id)arg1 fileName:(id)arg2 deletedMetadata:(id *)arg3;
- (BOOL)_addToneToManifestAtPath:(id)arg1 metadata:(id)arg2 fileName:(id)arg3 mediaDirectory:(id)arg4;
- (unsigned long long)_installedTonesSize;
- (id)_installedTones;
- (id)_iTunesToneWithIdentifier:(id)arg1;
- (void)_reloadITunesRingtonesAfterExternalChange;
- (id)_copyITunesRingtonesFromManifestPath:(id)arg1 mediaDirectoryPath:(id)arg2;
- (void)_loadITunesRingtoneInfoPlistAtPath:(id)arg1;
@property(readonly, nonatomic) NSString *_systemRingtoneDirectory;
@property(readonly, nonatomic) NSString *_iTunesRingtoneInformationPlist;
@property(readonly, nonatomic) NSString *_iTunesRingtoneDirectory;
@property(readonly, nonatomic) NSString *_deviceITunesRingtoneInformationPlist;
@property(readonly, nonatomic) NSString *_deviceITunesRingtoneDirectory;
@property(readonly, nonatomic) NSString *_rootDirectory;
- (void)dealloc;
- (id)initWithITunesRingtonePlistAtPath:(id)arg1;
- (id)init;

@end

