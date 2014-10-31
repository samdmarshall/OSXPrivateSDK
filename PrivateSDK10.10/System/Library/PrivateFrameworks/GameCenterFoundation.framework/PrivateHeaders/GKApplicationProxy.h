/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSBundle, NSDate, NSDictionary, NSNumber, NSString, NSURL;

@interface GKApplicationProxy : NSObject
{
    NSBundle *_bundle;
    NSString *_bundleID;
    NSURL *_bundleURL;
    NSDictionary *_metadata;
    NSString *_bundleVersion;
}

+ (id)metadataForBundleURL:(id)arg1;
+ (id)applicationProxyForBundleID:(id)arg1;
@property(retain, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) NSURL *bundleURL; // @synthesize bundleURL=_bundleURL;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
@property(readonly, nonatomic, getter=isInstalled) BOOL installed;
@property(readonly, nonatomic, getter=isGameCenterEnabled) BOOL gameCenterEnabled;
@property(readonly, nonatomic, getter=isRestricted) BOOL restricted;
@property(readonly, retain, nonatomic) NSDate *purchaseDate;
@property(readonly, retain, nonatomic) NSNumber *externalVersion;
@property(readonly, retain, nonatomic) NSNumber *adamID;
- (void)dealloc;
- (id)initWithBundleID:(id)arg1;

@end

