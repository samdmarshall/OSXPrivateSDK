/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

// Not exported
@interface GEOVLaneInformation : PBCodable <NSCopying>
{
    unsigned int _style;
    unsigned int _validityMask;
}

@property(nonatomic) unsigned int validityMask; // @synthesize validityMask=_validityMask;
@property(nonatomic) unsigned int style; // @synthesize style=_style;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;

@end

