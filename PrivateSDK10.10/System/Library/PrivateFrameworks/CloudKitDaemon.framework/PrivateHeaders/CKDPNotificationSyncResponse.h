/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@class NSData, NSMutableArray;

// Not exported
@interface CKDPNotificationSyncResponse : PBCodable <NSCopying>
{
    NSData *_changeID;
    NSMutableArray *_pushMessages;
    BOOL _moreAvailable;
    struct {
        unsigned int moreAvailable:1;
    } _has;
}

@property(nonatomic) BOOL moreAvailable; // @synthesize moreAvailable=_moreAvailable;
@property(retain, nonatomic) NSMutableArray *pushMessages; // @synthesize pushMessages=_pushMessages;
@property(retain, nonatomic) NSData *changeID; // @synthesize changeID=_changeID;
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
@property(nonatomic) BOOL hasMoreAvailable;
- (id)pushMessageAtIndex:(unsigned long long)arg1;
- (unsigned long long)pushMessagesCount;
- (void)addPushMessage:(id)arg1;
- (void)clearPushMessages;
@property(readonly, nonatomic) BOOL hasChangeID;

@end

