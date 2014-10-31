/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CUIPSDGradient, CUIShapeEffectPreset, NSData, NSDate, NSMutableArray, NSString;

@interface CSIGenerator : NSObject
{
    struct CGSize _size;
    NSString *_name;
    NSString *_utiType;
    NSMutableArray *_slices;
    NSMutableArray *_bitmaps;
    NSMutableArray *_metrics;
    BOOL _isFPOHint;
    BOOL _isExcludedFromFilter;
    BOOL _isVectorBased;
    long long _templateRenderingMode;
    BOOL _allowsMultiPassEncoding;
    short _colorSpaceID;
    short _layout;
    unsigned int _scaleFactor;
    CUIPSDGradient *_gradient;
    NSData *_rawData;
    CUIShapeEffectPreset *_effectPreset;
    int _blendMode;
    double _opacity;
    NSDate *_modtime;
    unsigned int _pixelFormat;
    int _exifOrientation;
}

+ (void)initialize;
@property(nonatomic) BOOL allowsMultiPassEncoding; // @synthesize allowsMultiPassEncoding=_allowsMultiPassEncoding;
@property(nonatomic) int exifOrientation; // @synthesize exifOrientation=_exifOrientation;
@property(copy, nonatomic) NSDate *modtime; // @synthesize modtime=_modtime;
@property(nonatomic) double opacity; // @synthesize opacity=_opacity;
@property(nonatomic) int blendMode; // @synthesize blendMode=_blendMode;
@property(retain, nonatomic) CUIShapeEffectPreset *effectPreset; // @synthesize effectPreset=_effectPreset;
@property(nonatomic) unsigned int pixelFormat; // @synthesize pixelFormat=_pixelFormat;
@property(nonatomic) unsigned int scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property(retain, nonatomic) CUIPSDGradient *gradient; // @synthesize gradient=_gradient;
@property(nonatomic) short colorSpaceID; // @synthesize colorSpaceID=_colorSpaceID;
@property(nonatomic, getter=isExcludedFromContrastFilter) BOOL excludedFromContrastFilter; // @synthesize excludedFromContrastFilter=_isExcludedFromFilter;
@property(nonatomic) long long templateRenderingMode; // @synthesize templateRenderingMode=_templateRenderingMode;
@property(nonatomic) BOOL isVectorBased; // @synthesize isVectorBased=_isVectorBased;
@property(nonatomic) BOOL isRenditionFPO; // @synthesize isRenditionFPO=_isFPOHint;
@property(copy, nonatomic) NSString *utiType; // @synthesize utiType=_utiType;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)CSIRepresentationWithCompression:(BOOL)arg1;
- (unsigned long long)writeRawDataToData:(id)arg1;
- (unsigned long long)writeGradientToData:(id)arg1;
- (void)_addNodes:(id)arg1 toNodeList:(struct _csigradientdatanode *)arg2;
- (unsigned long long)writeBitmap:(id)arg1 toData:(id)arg2 compress:(BOOL)arg3;
- (unsigned long long)writeResourcesToData:(id)arg1;
- (void)writeHeader:(struct _csiheader *)arg1 toData:(id)arg2;
- (void)formatCSIHeader:(struct _csiheader *)arg1;
- (void)addMetrics:(CDStruct_1ba92a5e)arg1;
- (void)addSliceRect:(struct CGRect)arg1;
- (void)addBitmap:(id)arg1;
- (void)dealloc;
- (id)initWithRawData:(id)arg1 pixelFormat:(unsigned int)arg2 layout:(short)arg3;
- (id)initWithShapeEffectPreset:(id)arg1 forScaleFactor:(unsigned int)arg2;
- (id)initWithCanvasSize:(struct CGSize)arg1 sliceCount:(unsigned int)arg2 layout:(short)arg3;

@end

