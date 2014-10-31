/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@class CKDPUserPrivacySettings, NSMutableArray, NSString;

// Not exported
@interface CKDPUserPrivacySettingsBatchLookupResponseContainerPrivacySettings : PBCodable <NSCopying>
{
    NSMutableArray *_applicationBundles;
    NSString *_applicationContainer;
    int _applicationContainerEnvironment;
    CKDPUserPrivacySettings *_userPrivacySettings;
    struct {
        unsigned int applicationContainerEnvironment:1;
    } _has;
}

@property(retain, nonatomic) CKDPUserPrivacySettings *userPrivacySettings; // @synthesize userPrivacySettings=_userPrivacySettings;
@property(retain, nonatomic) NSMutableArray *applicationBundles; // @synthesize applicationBundles=_applicationBundles;
@property(retain, nonatomic) NSString *applicationContainer; // @synthesize applicationContainer=_applicationContainer;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasUserPrivacySettings;
- (id)applicationBundleAtIndex:(unsigned long long)arg1;
- (unsigned long long)applicationBundlesCount;
- (void)addApplicationBundle:(id)arg1;
- (void)clearApplicationBundles;
@property(nonatomic) BOOL hasApplicationContainerEnvironment;
@property(nonatomic) int applicationContainerEnvironment; // @synthesize applicationContainerEnvironment=_applicationContainerEnvironment;
@property(readonly, nonatomic) BOOL hasApplicationContainer;

@end

