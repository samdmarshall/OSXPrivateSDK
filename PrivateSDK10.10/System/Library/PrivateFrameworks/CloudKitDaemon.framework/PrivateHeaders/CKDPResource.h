/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@class CKDPRecordIdentifier, CKDPRecordZoneIdentifier;

// Not exported
@interface CKDPResource : PBCodable <NSCopying>
{
    long long _customClientResourceType;
    CKDPRecordIdentifier *_recordId;
    int _targetDatabase;
    CKDPRecordZoneIdentifier *_zoneId;
    struct {
        unsigned int customClientResourceType:1;
        unsigned int targetDatabase:1;
    } _has;
}

@property(nonatomic) long long customClientResourceType; // @synthesize customClientResourceType=_customClientResourceType;
@property(retain, nonatomic) CKDPRecordIdentifier *recordId; // @synthesize recordId=_recordId;
@property(retain, nonatomic) CKDPRecordZoneIdentifier *zoneId; // @synthesize zoneId=_zoneId;
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
@property(nonatomic) BOOL hasCustomClientResourceType;
@property(readonly, nonatomic) BOOL hasRecordId;
@property(nonatomic) BOOL hasTargetDatabase;
@property(nonatomic) int targetDatabase; // @synthesize targetDatabase=_targetDatabase;
@property(readonly, nonatomic) BOOL hasZoneId;

@end

