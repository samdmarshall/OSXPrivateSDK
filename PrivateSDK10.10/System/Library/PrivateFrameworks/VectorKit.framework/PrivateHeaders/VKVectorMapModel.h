/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <VectorKit/VKMapTileModel.h>

// Not exported
@interface VKVectorMapModel : VKMapTileModel
{
    int _sourceTileZtoStencilOffset;
    BOOL _needsTileStencil;
    struct vector<std::__1::shared_ptr<ggl::RenderItem>, std::__1::allocator<std::__1::shared_ptr<ggl::RenderItem>>> _stencilItems;
    struct vector<std::__1::shared_ptr<ggl::RenderState>, std::__1::allocator<std::__1::shared_ptr<ggl::RenderState>>> _stencilStates;
    struct vector<std::__1::shared_ptr<ggl::PolygonSolidFill::Shader::Setup>, std::__1::allocator<std::__1::shared_ptr<ggl::PolygonSolidFill::Shader::Setup>>> _stencilShaderSetups;
}

+ (BOOL)reloadOnActiveTileGroupChange;
+ (BOOL)reloadOnStylesheetChange;
@property(nonatomic) BOOL needsTileStencil; // @synthesize needsTileStencil=_needsTileStencil;
@property(nonatomic) int sourceTileZtoStencilOffset; // @synthesize sourceTileZtoStencilOffset=_sourceTileZtoStencilOffset;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)pushStencilItems:(struct CommandBuffer *)arg1 tiles:(id)arg2 minZ:(int)arg3 maxZ:(int)arg4 fullyLoaded:(BOOL)arg5 layoutContext:(id)arg6;
- (void)pushStencilItems:(struct CommandBuffer *)arg1 fullyLoaded:(BOOL)arg2 layoutContext:(id)arg3;
- (void)gglLayoutScene:(id)arg1 withContext:(id)arg2 renderQueue:(struct RenderQueue *)arg3;
- (void)_layoutScene:(id)arg1 withContext:(id)arg2;
- (BOOL)wantsCategorizedSourceTiles;
- (unsigned long long)mapLayerPosition;

@end

