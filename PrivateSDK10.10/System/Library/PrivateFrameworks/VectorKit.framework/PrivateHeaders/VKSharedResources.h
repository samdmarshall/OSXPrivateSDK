/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class VKGGLTextureManager, VKIconManager, VKResourceManager, VKShieldManager, VKStylesheetVendor, VKTrafficIncidentImageManager;

// Not exported
@interface VKSharedResources : NSObject
{
    unsigned int _tileGroupIdentifier;
    VKIconManager *_iconManager;
    VKShieldManager *_shieldManager;
    VKGGLTextureManager *_gglTextureManager;
    VKResourceManager *_resourceManager;
    VKStylesheetVendor *_stylesheetVendor;
    VKTrafficIncidentImageManager *_trafficIncidentImageManager;
    shared_ptr_807ec9ac _device;
    struct unique_ptr<ggl::AlphaAtlas, std::__1::default_delete<ggl::AlphaAtlas>> _alphaAtlas;
    struct unique_ptr<ggl::IsoAlphaAtlas, std::__1::default_delete<ggl::IsoAlphaAtlas>> _highInflationAlphaAtlas;
    struct unique_ptr<ggl::IsoAlphaAtlas, std::__1::default_delete<ggl::IsoAlphaAtlas>> _isoAlphaAtlas;
}

+ (id)sharedResourcesForTileGroupIdentifier:(unsigned int)arg1;
@property(readonly, nonatomic) VKTrafficIncidentImageManager *trafficIncidentImageManager; // @synthesize trafficIncidentImageManager=_trafficIncidentImageManager;
@property(readonly, nonatomic) VKStylesheetVendor *stylesheetVendor; // @synthesize stylesheetVendor=_stylesheetVendor;
@property(readonly, nonatomic) VKResourceManager *resourceManager; // @synthesize resourceManager=_resourceManager;
@property(readonly, nonatomic) VKGGLTextureManager *gglTextureManager; // @synthesize gglTextureManager=_gglTextureManager;
@property(readonly, nonatomic) VKShieldManager *shieldManager; // @synthesize shieldManager=_shieldManager;
@property(readonly, nonatomic) VKIconManager *iconManager; // @synthesize iconManager=_iconManager;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithTileGroupIdentifier:(unsigned int)arg1;
@property(readonly, nonatomic) struct IsoAlphaAtlas *isoAlphaAtlas;
@property(readonly, nonatomic) struct IsoAlphaAtlas *highInflationAlphaAtlas;
@property(readonly, nonatomic) struct AlphaAtlas *alphaAtlas;
@property(readonly, nonatomic) struct Device *device;

@end

