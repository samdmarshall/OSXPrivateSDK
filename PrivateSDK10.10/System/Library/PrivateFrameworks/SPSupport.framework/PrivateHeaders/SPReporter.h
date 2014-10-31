/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSBundle;

@interface SPReporter : NSObject
{
    NSBundle *_bundle;
    struct __SecRequirement *_fromAppleRequirement;
    struct __SecRequirement *_fromMacAppStoreRequirement;
    struct __SecRequirement *_fromIdentifiedDeveloperRequirement;
}

+ (id)sharedReporter;
+ (id)reporterBundlesForDataType:(id)arg1;
+ (id)reporterBundles;
+ (BOOL)isRunningFromInstaller;
- (id)codeSigningDictionaryForURL:(struct __CFURL *)arg1;
- (id)localizedStringForKey:(id)arg1;
- (id)updateDictionary:(id)arg1;
- (id)propertiesDictionary;
- (id)bundle;
- (void)dealloc;

@end

