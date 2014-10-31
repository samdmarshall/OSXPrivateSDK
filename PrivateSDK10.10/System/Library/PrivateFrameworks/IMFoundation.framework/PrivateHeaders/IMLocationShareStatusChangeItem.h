/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IMFoundation/IMItem.h>

#import "IMRemoteObjectCoding-Protocol.h"
#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface IMLocationShareStatusChangeItem : IMItem <NSCoding, NSCopying, IMRemoteObjectCoding>
{
    BOOL _actionable;
    BOOL _expired;
    long long _status;
    NSString *_otherCountryCode;
    NSString *_otherHandle;
    NSString *_otherUnformattedID;
    long long _direction;
}

@property(nonatomic) long long direction; // @synthesize direction=_direction;
@property(retain, nonatomic) NSString *otherUnformattedID; // @synthesize otherUnformattedID=_otherUnformattedID;
@property(retain, nonatomic) NSString *otherHandle; // @synthesize otherHandle=_otherHandle;
@property(retain, nonatomic) NSString *otherCountryCode; // @synthesize otherCountryCode=_otherCountryCode;
@property(nonatomic) BOOL expired; // @synthesize expired=_expired;
@property(nonatomic) BOOL actionable; // @synthesize actionable=_actionable;
@property(nonatomic) long long status; // @synthesize status=_status;
- (id)copyDictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

