/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@interface GEOPDSearchSubstringDescriptor : PBCodable <NSCopying>
{
    int _beginIndex;
    int _endIndex;
    int _stringType;
}

@property(nonatomic) int endIndex; // @synthesize endIndex=_endIndex;
@property(nonatomic) int beginIndex; // @synthesize beginIndex=_beginIndex;
@property(nonatomic) int stringType; // @synthesize stringType=_stringType;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;

@end

