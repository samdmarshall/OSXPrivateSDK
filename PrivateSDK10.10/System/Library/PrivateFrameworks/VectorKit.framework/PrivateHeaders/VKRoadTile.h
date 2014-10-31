/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <VectorKit/VKVectorTile.h>

@class VKTrafficTile;

// Not exported
@interface VKRoadTile : VKVectorTile
{
    VKTrafficTile *_trafficTile;
    struct unique_ptr<vk::RoadLayer, std::__1::default_delete<vk::RoadLayer>> _roadLayer;
    struct unique_ptr<vk::PatternedLayer, std::__1::default_delete<vk::PatternedLayer>> _patternedRibbonLayer;
}

@property(retain, nonatomic) VKTrafficTile *trafficTile; // @synthesize trafficTile=_trafficTile;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct PatternedLayer *patternedRibbonLayer;
@property(readonly, nonatomic) struct RoadLayer *roadLayer;
- (void)buildGglMeshesWithDevice:(struct Device *)arg1;
- (void)addPatternedRibbonTo:(unordered_map_880b4a54 *)arg1 styleQuery:(shared_ptr_6e6219d6)arg2 painterZ:(unsigned int)arg3 numPoints:(unsigned long long)arg4 points:(Matrix_8746f91e *)arg5;
- (void)addRoadRibbonTo:(unordered_map_f54c85ed *)arg1 styleQuery:(shared_ptr_6e6219d6)arg2 painterZ:(unsigned int)arg3 numPoints:(unsigned long long)arg4 points:(Matrix_8746f91e *)arg5 startCap:(_Bool)arg6 endCap:(_Bool)arg7;
- (void)updateViewDependentStateIfNecessaryWithContext:(id)arg1;
- (void)dealloc;
- (id)initWithKey:(const struct VKTileKey *)arg1 modelTile:(id)arg2 styleManager:(id)arg3 sharedResources:(id)arg4 contentScale:(double)arg5 device:(struct Device *)arg6;

@end

