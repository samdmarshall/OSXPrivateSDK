/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <FTServices/FTIDSMessage.h>

#import "NSCopying-Protocol.h"

@class NSData;

@interface IDSFaceTimeMessage : FTIDSMessage <NSCopying>
{
    NSData *_sessionToken;
}

@property(copy) NSData *sessionToken; // @synthesize sessionToken=_sessionToken;
- (id)messageBody;
- (id)requiredKeys;
- (BOOL)isValidMessage;
- (BOOL)hasRequiredKeys:(id *)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

