/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CBATTRequest, NSData, NSString;

// Not exported
@interface BTLETransaction : NSObject
{
    NSString *_identifier;
    CBATTRequest *_request;
    NSString *_replyCharacteristic;
    NSData *_replyData;
    BOOL _waitingToUpdate;
}

@property BOOL waitingToUpdate; // @synthesize waitingToUpdate=_waitingToUpdate;
@property(copy) NSData *replyData; // @synthesize replyData=_replyData;
@property(copy) NSString *replyCharacteristic; // @synthesize replyCharacteristic=_replyCharacteristic;
@property CBATTRequest *request; // @synthesize request=_request;
@property(copy) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy) NSData *requestData;
@property(readonly) NSString *requestCharacteristic;
- (void)dealloc;

@end

