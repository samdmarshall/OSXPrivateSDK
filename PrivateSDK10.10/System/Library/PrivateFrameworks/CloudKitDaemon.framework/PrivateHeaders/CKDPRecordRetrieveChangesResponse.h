/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@class NSData, NSMutableArray;

// Not exported
@interface CKDPRecordRetrieveChangesResponse : PBCodable <NSCopying>
{
    NSMutableArray *_changedRecords;
    NSData *_clientChangeToken;
    int _status;
    NSData *_syncContinuationToken;
    CDStruct_47fe53f2 _has;
}

@property(nonatomic) int status; // @synthesize status=_status;
@property(retain, nonatomic) NSData *clientChangeToken; // @synthesize clientChangeToken=_clientChangeToken;
@property(retain, nonatomic) NSData *syncContinuationToken; // @synthesize syncContinuationToken=_syncContinuationToken;
@property(retain, nonatomic) NSMutableArray *changedRecords; // @synthesize changedRecords=_changedRecords;
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
@property(nonatomic) BOOL hasStatus;
@property(readonly, nonatomic) BOOL hasClientChangeToken;
@property(readonly, nonatomic) BOOL hasSyncContinuationToken;
- (id)changedRecordAtIndex:(unsigned long long)arg1;
- (unsigned long long)changedRecordsCount;
- (void)addChangedRecord:(id)arg1;
- (void)clearChangedRecords;

@end

