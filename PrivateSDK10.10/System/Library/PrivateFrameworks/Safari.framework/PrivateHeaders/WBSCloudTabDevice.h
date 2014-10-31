/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class NSArray, NSDate, NSDictionary, NSString;

// Not exported
@interface WBSCloudTabDevice : NSObject <NSCopying>
{
    BOOL _closeRequestSupported;
    BOOL _hasDuplicateName;
    NSString *_name;
    NSString *_uuid;
    NSArray *_tabs;
    NSDate *_lastModified;
}

+ (BOOL)hasDuplicateDeviceNameInDictionary:(id)arg1;
+ (id)lastModifiedDateInDictionary:(id)arg1;
+ (id)deviceNameInDictionary:(id)arg1;
+ (unsigned long long)tabCountInDictionary:(id)arg1;
+ (BOOL)isCloudTabDeviceDictionary:(id)arg1;
+ (id)_dictionaryWithDeviceName:(id)arg1 lastModified:(id)arg2 hasDuplicateName:(BOOL)arg3 tabs:(id)arg4;
@property(readonly, nonatomic) NSDate *lastModified; // @synthesize lastModified=_lastModified;
@property(readonly, copy, nonatomic) NSArray *tabs; // @synthesize tabs=_tabs;
@property(readonly, copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) BOOL hasDuplicateName; // @synthesize hasDuplicateName=_hasDuplicateName;
@property(readonly, nonatomic, getter=isCloseRequestSupported) BOOL closeRequestSupported; // @synthesize closeRequestSupported=_closeRequestSupported;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)description;
- (id)deviceByRemovingTabs:(id)arg1;
- (id)deviceByRemovingTab:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDeviceName:(id)arg1 lastModified:(id)arg2 hasDuplicateName:(BOOL)arg3 tabs:(id)arg4 uuid:(id)arg5;
- (id)initWithDictionary:(id)arg1 uuid:(id)arg2;

@end

