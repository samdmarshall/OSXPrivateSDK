/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSMutableArray, NSString;

// Not exported
@interface GEOResourceLoader : NSObject
{
    unsigned int _tileGroupIdentifier;
    NSString *_uniqueTileGroupIdentifier;
    NSString *_directory;
    NSMutableArray *_resourcesToLoad;
    id _completionHandler;
    id _progressHandler;
    long long _numberOfDownloadsInProgress;
    long long _numberOfCopiesInProgress;
    NSMutableArray *_loadedResources;
    BOOL _canceled;
    NSString *_baseURLString;
    unsigned long long _maxConcurrentLoads;
    BOOL _ignoreCachedResources;
    NSArray *_resourceInfos;
    BOOL _firstLoadEver;
}

@property(readonly, nonatomic) NSArray *loadedResources; // @synthesize loadedResources=_loadedResources;
@property(readonly, nonatomic) NSString *uniqueTileGroupIdentifier; // @synthesize uniqueTileGroupIdentifier=_uniqueTileGroupIdentifier;
@property(readonly, nonatomic) unsigned int tileGroupIdentifier; // @synthesize tileGroupIdentifier=_tileGroupIdentifier;
- (void)cancel;
- (void)_writeResourceToDisk:(id)arg1 withData:(id)arg2 orExistingPathOnDisk:(id)arg3 completionHandler:(id)arg4;
- (void)_loadNextResource;
- (void)startWithProgressHandler:(id)arg1 completionHandler:(void)arg2 firstLoadEver:(id)arg3;
- (void)_cleanup;
- (id)_urlForResource:(id)arg1;
- (void)dealloc;
- (id)initWithTileGroupIdentifier:(unsigned int)arg1 uniqueIdentifier:(id)arg2 targetDirectory:(id)arg3 baseURLString:(id)arg4 resources:(id)arg5 isFirstLoad:(BOOL)arg6 ignoreCachedResources:(BOOL)arg7;

@end

