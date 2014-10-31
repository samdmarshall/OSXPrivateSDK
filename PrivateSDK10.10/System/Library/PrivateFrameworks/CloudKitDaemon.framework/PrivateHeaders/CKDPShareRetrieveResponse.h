/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@class NSMutableArray;

// Not exported
@interface CKDPShareRetrieveResponse : PBCodable <NSCopying>
{
    NSMutableArray *_shares;
}

@property(retain, nonatomic) NSMutableArray *shares; // @synthesize shares=_shares;
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
- (id)shareAtIndex:(unsigned long long)arg1;
- (unsigned long long)sharesCount;
- (void)addShare:(id)arg1;
- (void)clearShares;

@end

