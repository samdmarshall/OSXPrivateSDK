/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "IMAPFetchResponseHandler-Protocol.h"

@class NSMutableArray, NSString;

@interface IMAPDownloadCache : NSObject <IMAPFetchResponseHandler>
{
    NSMutableArray *_downloads;
}

- (void).cxx_destruct;
- (void)addCommandsForDownload:(id)arg1 toPipeline:(id)arg2;
- (void)_lockedAddDownload:(id)arg1 atIndex:(unsigned long long)arg2 forUid:(unsigned int)arg3;
- (void)addDownload:(id)arg1 forUid:(unsigned int)arg2;
- (void)cleanUpDownloadsForUid:(unsigned int)arg1;
- (void)processResultsForUid:(unsigned int)arg1;
- (void)handleFetchResponses:(id)arg1;
- (void)handleFetchResponse:(id)arg1 forUid:(unsigned int)arg2;
- (BOOL)handleResponse:(id)arg1 forOperation:(id)arg2;
- (void)_lockedUpdateDownloadsInRange:(struct _NSRange)arg1 fetchResults:(id)arg2 error:(id)arg3;
- (id)downloadForUid:(unsigned int)arg1 partSectionSpecifier:(id)arg2 textSectionSpecifier:(long long)arg3 expectedLength:(unsigned int)arg4;
- (id)downloadForUid:(unsigned int)arg1 partSectionSpecifier:(id)arg2 textSectionSpecifier:(long long)arg3 length:(unsigned int)arg4;
- (id)_getDownloadForUid:(unsigned int)arg1 partSectionSpecifier:(id)arg2 textSectionSpecifier:(long long)arg3 length:(unsigned int)arg4 estimatedLength:(unsigned int)arg5;
- (id)downloadForMessage:(id)arg1;
- (struct _NSRange)_findRangeOrInsertionPointForDownloadsWithUid:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

