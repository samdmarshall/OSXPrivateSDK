/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"
#import "PQLBindable-Protocol.h"
#import "PQLResultSetInitializer-Protocol.h"

@class NSString;

@interface BRFieldCKInfo : PBCodable <PQLBindable, PQLResultSetInitializer, NSCopying>
{
    NSString *_etag;
    BOOL _knownToServer;
    BOOL _wasCached;
    struct {
        unsigned int knownToServer:1;
        unsigned int wasCached:1;
    } _has;
}

@property(retain, nonatomic) NSString *etag; // @synthesize etag=_etag;
@property(nonatomic) BOOL wasCached; // @synthesize wasCached=_wasCached;
@property(nonatomic) BOOL knownToServer; // @synthesize knownToServer=_knownToServer;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) BOOL hasEtag;
@property(nonatomic) BOOL hasWasCached;
@property(nonatomic) BOOL hasKnownToServer;
- (id)initFromPQLResultSet:(id)arg1 error:(id *)arg2;
- (id)initWithSqlite3Value:(struct Mem *)arg1;
- (void)sqliteBind:(struct sqlite3_stmt *)arg1 index:(int)arg2;
- (void)setCKInfoFieldsInRecord:(id)arg1;
- (id)initWithRecord:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

