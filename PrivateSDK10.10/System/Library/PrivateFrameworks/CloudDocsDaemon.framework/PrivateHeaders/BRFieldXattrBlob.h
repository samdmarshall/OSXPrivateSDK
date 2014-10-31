/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@class NSMutableArray;

@interface BRFieldXattrBlob : PBCodable <NSCopying>
{
    NSMutableArray *_xattrs;
}

+ (BOOL)removeXattrsOnFD:(int)arg1 includingContentRelated:(BOOL)arg2 error:(id *)arg3;
+ (BOOL)loadXattrsFromFD:(int)arg1 structuralBlob:(id *)arg2 contentBlob:(id *)arg3 withMaximumSize:(unsigned long long)arg4 error:(id *)arg5;
@property(retain, nonatomic) NSMutableArray *xattrs; // @synthesize xattrs=_xattrs;
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
- (id)xattrsAtIndex:(unsigned long long)arg1;
- (unsigned long long)xattrsCount;
- (void)addXattrs:(id)arg1;
- (void)clearXattrs;
- (BOOL)applyToFileDescriptor:(int)arg1 error:(id *)arg2;

@end

