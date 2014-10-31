/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSSecureCoding-Protocol.h"

@class NSNumber, NSString;

@interface SFRemoteHotspotInfo : NSObject <NSSecureCoding>
{
    NSString *_name;
    NSString *_password;
    NSNumber *_channel;
}

+ (BOOL)supportsSecureCoding;
@property(retain) NSNumber *channel; // @synthesize channel=_channel;
@property(copy) NSString *password; // @synthesize password=_password;
@property(copy) NSString *name; // @synthesize name=_name;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1 password:(id)arg2 channel:(id)arg3;

@end

