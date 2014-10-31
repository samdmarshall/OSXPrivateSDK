/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSError, NSLocale, NSString, VKSharedResources, VKStyleManager, VKTileKeyList, VKTileKeyMap, VKTilePool;

// Not exported
@interface VKTileSource : NSObject
{
    id <VKTileSourceClient> _client;
    VKTilePool *_tilePool;
    VKTileKeyMap *_pendingLoads;
    VKTileKeyList *_decoding;
    VKTileKeyList *_failedTiles;
    VKStyleManager *_styleManager;
    double _contentScale;
    VKSharedResources *_sharedResources;
    int loadingTiles;
    NSError *_recentError;
    unsigned int _tileGroupIdentifier;
    NSLocale *_locale;
    NSString *_tileLoaderClientIdentifier;
}

@property(nonatomic) double contentScale; // @synthesize contentScale=_contentScale;
@property(retain, nonatomic) VKSharedResources *sharedResources; // @synthesize sharedResources=_sharedResources;
@property(retain, nonatomic) VKStyleManager *styleManager; // @synthesize styleManager=_styleManager;
@property(nonatomic) id <VKTileSourceClient> client; // @synthesize client=_client;
- (void)forceDownload;
- (void)didFailToLoadTileKey:(const struct _GEOTileKey *)arg1 error:(id)arg2;
- (void)didFinishWithNetwork;
- (void)willGoToNetwork;
- (void)didFetchData:(id)arg1 forKey:(const struct _GEOTileKey *)arg2;
- (void)_failedToLoadSourceKey:(const struct VKTileKey *)arg1 downloadKey:(const struct _GEOTileKey *)arg2 error:(id)arg3;
- (void)tileAvailabilityChanged:(id)arg1;
- (void)populateVisibleTileSets:(id)arg1 withTiles:(id)arg2;
- (void)decodeData:(id)arg1 downloadKey:(const struct _GEOTileKey *)arg2 sourceKey:(const struct VKTileKey *)arg3;
- (void)didLoadTile:(id)arg1 forKey:(const struct VKTileKey *)arg2;
- (void)fetchedTile:(id)arg1 forKey:(const struct VKTileKey *)arg2;
- (void)failedToDecodeSourceKey:(const struct VKTileKey *)arg1;
- (BOOL)_shouldDecodeTile:(const struct VKTileKey *)arg1;
- (void)cancelDownload:(const struct _GEOTileKey *)arg1;
- (void)performDownload:(const struct _GEOTileKey *)arg1;
- (BOOL)cancelFetchForKey:(const struct VKTileKey *)arg1;
- (BOOL)cancelFetchForKey:(const struct VKTileKey *)arg1 sourceKey:(const struct VKTileKey *)arg2;
- (void)fetchTileForKey:(const struct VKTileKey *)arg1;
- (void)fetchTileForKey:(const struct VKTileKey *)arg1 sourceKey:(const struct VKTileKey *)arg2;
- (BOOL)_shouldUseDecodedTile:(id)arg1 extraInfo:(id)arg2;
- (id)_extraInfoForPendingSourceKey:(const struct VKTileKey *)arg1;
- (id)tileForKey:(const struct VKTileKey *)arg1;
- (id)tileForSourceKey:(const struct VKTileKey *)arg1 renderKey:(const struct VKTileKey *)arg2;
- (BOOL)canFetchTileForKey:(const struct VKTileKey *)arg1;
- (void)_fetchedTile:(id)arg1;
- (struct VKTileKey)sourceKeyForDownloadKey:(const struct _GEOTileKey *)arg1;
- (struct _GEOTileKey)downloadKeyForSourceKey:(const struct VKTileKey *)arg1;
- (struct VKTileKey)sourceKeyForRenderKey:(const struct VKTileKey *)arg1;
- (struct VKTileKey)nativeKeyForRenderKey:(const struct VKTileKey *)arg1;
@property(readonly, nonatomic) long long maximumZoomLevel;
@property(readonly, nonatomic) BOOL maximumZoomLevelBoundsCamera;
@property(readonly, nonatomic) long long minimumZoomLevel;
@property(readonly, nonatomic) BOOL minimumZoomLevelBoundsCamera;
@property(readonly, nonatomic) long long zEquivalenceClass;
- (struct _GEOTileKey)downloadKeyAtX:(unsigned int)arg1 y:(unsigned int)arg2 z:(unsigned int)arg3;
- (id)tileForData:(id)arg1 downloadKey:(const struct _GEOTileKey *)arg2 sourceKey:(const struct VKTileKey *)arg3;
@property(readonly, nonatomic) unsigned int maximumDownloadZoomLevel;
@property(readonly, nonatomic) unsigned int minimumDownloadZoomLevel;
@property(readonly, nonatomic) long long tileSize;
- (id)detailedDescription;
- (BOOL)mayUseNetwork;
- (void)foreachTileInPool:(id)arg1;
- (void)clearCaches;
- (void)dealloc;
- (id)init;
- (id)initWithTileGroupIdentifier:(unsigned int)arg1 locale:(id)arg2;
@property(readonly, nonatomic) struct Device *device;
- (id)tileLoader;

@end

