/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@class NSString;

@interface GEOPDRawAttribute : PBCodable <NSCopying>
{
    NSString *_key;
    NSString *_value;
}

@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasValue;
@property(readonly, nonatomic) BOOL hasKey;
- (void)dealloc;

@end

