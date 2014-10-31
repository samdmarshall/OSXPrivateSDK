/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SystemMigration/SMALRock.h>

@class NSData, NSString;

@interface SMALPushPathRock : SMALRock
{
    NSData *_compressedFileData;
    NSData *_checksum;
    NSString *_infoType;
}

+ (id)rockWithPayload:(id)arg1;
+ (id)rockID;
@property(retain) NSString *infoType; // @synthesize infoType=_infoType;
@property(retain) NSData *checksum; // @synthesize checksum=_checksum;
@property(retain) NSData *compressedFileData; // @synthesize compressedFileData=_compressedFileData;
- (void).cxx_destruct;
- (id)requestPayload;
- (id)description;
- (BOOL)setResult:(id)arg1;
- (id)resultData;
- (id)_finalDestinationPathForInfoType:(id)arg1;
- (id)dataOfOne:(BOOL)arg1;
- (id)dataFromPath:(id)arg1;
- (id)initWithPath:(id)arg1 pushType:(id)arg2;

@end

