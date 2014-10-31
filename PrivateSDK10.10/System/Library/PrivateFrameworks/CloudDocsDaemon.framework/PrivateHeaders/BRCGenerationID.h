/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"
#import "PQLBindable-Protocol.h"

@class NSData, NSNumber, NSString;

@interface BRCGenerationID : NSObject <NSCopying, NSSecureCoding, PQLBindable>
{
    unsigned int _generationID;
    NSData *_signature;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSData *signature; // @synthesize signature=_signature;
- (void).cxx_destruct;
- (BOOL)isEqualToFSGenerationID:(unsigned int)arg1;
- (BOOL)isEqualToGenerationID:(id)arg1 orSignature:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (void)sqliteBind:(struct sqlite3_stmt *)arg1 index:(int)arg2;
- (id)initWithSqlite3Value:(struct Mem *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithRelativePath:(id)arg1;
- (id)initWithFSGenerationID:(unsigned int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSignature:(const void *)arg1 length:(unsigned long long)arg2;
@property(readonly, nonatomic) const char *UTF8String;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *generationIDString;
@property(readonly, nonatomic) NSNumber *fsGenerationID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

