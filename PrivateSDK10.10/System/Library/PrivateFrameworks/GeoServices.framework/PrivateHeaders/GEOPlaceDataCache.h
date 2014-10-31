/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface GEOPlaceDataCache : NSObject
{
    id <_GEOPlaceDataCacheProxy> _proxyCache;
}

- (void)shrinkToSize:(unsigned long long)arg1 finished:(id)arg2;
- (void)calculateFreeableSpaceWithHandler:(id)arg1;
- (void)deletePhoneNumberMapping;
- (void)evictAllEntries;
- (void)evictPlaceDataForKey:(struct _GEOTileKey)arg1;
- (void)evictPlaceDataForMUID:(unsigned long long)arg1;
- (void)setPlaceData:(id)arg1 forKey:(struct _GEOTileKey)arg2;
- (void)setPlaceData:(id)arg1 forMUID:(unsigned long long)arg2;
- (unsigned long long)muidForPhoneNumber:(unsigned long long)arg1;
- (id)placeDataForKey:(struct _GEOTileKey)arg1;
- (id)placeDataForMUID:(unsigned long long)arg1;
- (id)allCacheEntries;
- (id)placeDataForPhoneNumber:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithTransientCacheType;
- (id)initWithCacheType:(long long)arg1 atPath:(id)arg2;

@end

