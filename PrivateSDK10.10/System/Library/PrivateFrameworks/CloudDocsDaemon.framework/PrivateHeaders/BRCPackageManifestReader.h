/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSEnumerator.h"

@class NSInputStream, PBMessageStreamReader;

@interface BRCPackageManifestReader : NSEnumerator
{
    NSInputStream *_stream;
    PBMessageStreamReader *_reader;
}

- (void).cxx_destruct;
- (id)nextObject;
- (void)done;
- (void)dealloc;
- (id)initWithDeviceID:(int)arg1 fileID:(unsigned long long)arg2;
- (id)initWithAsset:(id)arg1;
- (id)initWithInputStream:(id)arg1;
@property(nonatomic) Class itemClass;

@end

