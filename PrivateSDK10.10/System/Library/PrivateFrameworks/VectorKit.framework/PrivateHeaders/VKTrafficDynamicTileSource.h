/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <VectorKit/VKTileSetBackedTileSource.h>

@class VKTileCache;

// Not exported
@interface VKTrafficDynamicTileSource : VKTileSetBackedTileSource
{
    VKTileCache *_recentTrafficDynamicTiles;
}

- (void)fetchTileForKey:(const struct VKTileKey *)arg1;
- (id)sourceKeysForRenderKey:(const struct VKTileKey *)arg1;
- (struct _GEOTileKey)downloadKeyAtX:(unsigned int)arg1 y:(unsigned int)arg2 z:(unsigned int)arg3;
- (id)tileForData:(id)arg1 downloadKey:(const struct _GEOTileKey *)arg2 sourceKey:(const struct VKTileKey *)arg3;
- (BOOL)minimumZoomLevelBoundsCamera;
- (BOOL)maximumZoomLevelBoundsCamera;
- (unsigned long long)mapLayerForZoomLevelRange;
- (long long)defaultMaximumZoomLevel;
- (long long)defaultMinimumZoomLevel;
- (void)didLoadTile:(id)arg1 forKey:(const struct VKTileKey *)arg2;
- (void)clearCaches;
- (void)dealloc;
- (id)initWithTileSet:(id)arg1 tileGroupIdentifier:(unsigned int)arg2 locale:(id)arg3;

@end

