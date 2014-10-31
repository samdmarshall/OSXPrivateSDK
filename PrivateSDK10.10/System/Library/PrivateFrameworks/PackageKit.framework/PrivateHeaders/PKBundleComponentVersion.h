/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface PKBundleComponentVersion : NSObject
{
    NSString *_shortVersionString;
    NSString *_origShortVersionString;
    NSString *_bundleVersion;
    NSString *_origBundleVersion;
    NSString *_sourceVersion;
    NSString *_buildVersion;
    BOOL _isOnDisk;
}

+ (id)_orderedVersionKeys;
+ (id)_standardizedTupleVersionString:(id)arg1;
+ (id)_combinedVersionAndInfoDictionaryForBundle:(id)arg1;
+ (id)bundleComponentVersionWithOnDiskBundle:(id)arg1;
+ (id)bundleComponentVersionWithPackageAttributes:(id)arg1;
- (id)combinedVersionString;
- (id)attributeDictionary;
- (BOOL)_isOnDiskComponent;
- (id)buildVersion;
- (id)sourceVersion;
- (id)bundleVersion;
- (id)shortVersionString;
- (long long)compare:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithAttributes:(id)arg1 forOnDiskComponent:(BOOL)arg2;
- (id)initWithShortVersionString:(id)arg1 bundleVersion:(id)arg2 sourceVersion:(id)arg3 buildVersion:(id)arg4 forOnDiskComponent:(BOOL)arg5;

@end

