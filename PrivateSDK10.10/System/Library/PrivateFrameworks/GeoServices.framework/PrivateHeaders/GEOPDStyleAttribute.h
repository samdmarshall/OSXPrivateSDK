/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@interface GEOPDStyleAttribute : PBCodable <NSCopying>
{
    unsigned int _key;
    unsigned int _value;
    struct {
        unsigned int key:1;
        unsigned int value:1;
    } _has;
}

@property(nonatomic) unsigned int value; // @synthesize value=_value;
@property(nonatomic) unsigned int key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasValue;
@property(nonatomic) BOOL hasKey;

@end

