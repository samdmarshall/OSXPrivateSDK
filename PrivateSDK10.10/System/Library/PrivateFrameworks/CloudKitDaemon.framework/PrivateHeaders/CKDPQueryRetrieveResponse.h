/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@class NSData, NSMutableArray;

// Not exported
@interface CKDPQueryRetrieveResponse : PBCodable <NSCopying>
{
    NSData *_continuationMarker;
    NSMutableArray *_queryResults;
}

@property(retain, nonatomic) NSData *continuationMarker; // @synthesize continuationMarker=_continuationMarker;
@property(retain, nonatomic) NSMutableArray *queryResults; // @synthesize queryResults=_queryResults;
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
@property(readonly, nonatomic) BOOL hasContinuationMarker;
- (id)queryResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)queryResultsCount;
- (void)addQueryResults:(id)arg1;
- (void)clearQueryResults;

@end

