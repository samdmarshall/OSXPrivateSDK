/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IconServices/ISOperationBase.h>

@class ISIconCacheService, NSData, NSDictionary, NSUUID;

// Not exported
@interface ISGenerateImageOp : ISOperationBase
{
    NSData *_imageData;
    NSUUID *_imageDataUUID;
    unsigned int _generatedSize;
    unsigned int _generatedScale;
    CDStruct_745fa24d _optimumSizeRange;
    ISIconCacheService *_iconCache;
    struct _LSBinding *_binding;
    unsigned int _size;
    unsigned int _scale;
    NSDictionary *_options;
}

@property(readonly) NSDictionary *options; // @synthesize options=_options;
@property(readonly) unsigned int scale; // @synthesize scale=_scale;
@property(readonly) unsigned int size; // @synthesize size=_size;
@property(readonly) struct _LSBinding *binding; // @synthesize binding=_binding;
@property(readonly) ISIconCacheService *iconCache; // @synthesize iconCache=_iconCache;
@property(readonly) CDStruct_745fa24d optimumSizeRange; // @synthesize optimumSizeRange=_optimumSizeRange;
@property(readonly) unsigned int generatedScale; // @synthesize generatedScale=_generatedScale;
@property(readonly) unsigned int generatedSize; // @synthesize generatedSize=_generatedSize;
@property(readonly) NSUUID *imageDataUUID; // @synthesize imageDataUUID=_imageDataUUID;
@property(readonly) NSData *imageData; // @synthesize imageData=_imageData;
- (id).cxx_construct;
- (void)generateImageWithCompletion:(id)arg1;
- (BOOL)findInStore;
- (void)start;
- (BOOL)isEqual:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)initWithIconCache:(id)arg1 binding:(struct _LSBinding *)arg2 size:(unsigned int)arg3 scale:(unsigned int)arg4 options:(id)arg5;

@end

