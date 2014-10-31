/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSRulerView.h"

@class NSView;

@interface NSProRulerView : NSRulerView
{
    NSView *_cornerView;
    NSView *_highlightView;
    struct CGRect _highlightRect;
    void *_proReserved1;
    void *_proReserved2;
    void *_proReserved3;
}

+ (void)setMinimumHashSpacing:(double)arg1 forUnit:(id)arg2;
+ (void)setMinimumLabelSpacing:(double)arg1 forUnit:(id)arg2;
+ (id)auxiliaryRegistrationDictForUnitNamed:(id)arg1;
+ (id)auxiliaryUnitRegistrationDict;
+ (id)_labelCell;
+ (id)labelAttributes;
+ (void)setLabelAttributes:(id)arg1;
+ (BOOL)useLabelCell;
+ (void)setUseLabelCell:(BOOL)arg1;
- (double)_hashFrameSpacing;
- (struct CGPoint)documentOffset;
- (struct CGRect)hashMarksAndLabelRect;
- (void)highlightRect:(struct CGRect)arg1 forView:(id)arg2;
- (void)setReservedThicknessForMarkers:(double)arg1;
- (id)cornerView;
- (void)setCornerView:(id)arg1;
- (void)setMeasurementUnits:(id)arg1;
- (void)drawLabelInRect:(struct CGRect)arg1 atPoint:(struct CGPoint)arg2 withValue:(id)arg3;
- (void)drawHashMarksAndLabelsInRect:(struct CGRect)arg1;
- (struct CGSize)scaleSizeFrom:(struct CGSize)arg1;
- (id)_hashMarkDictionaryForDocumentView:(id)arg1 measurementUnitName:(id)arg2;
- (void)drawSeparatorInRect:(struct CGRect)arg1;
- (void)drawBackgroundInRect:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (void)awakeFromNib;
- (id)initWithScrollView:(id)arg1 orientation:(unsigned long long)arg2;
- (void)drawMarkers:(double)arg1:(double)arg2:(double)arg3;
- (struct CGRect)highlightRectForRect:(struct CGRect)arg1 inView:(id)arg2;

@end

