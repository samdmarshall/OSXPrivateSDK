/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ProKit/NSProTextFieldCell.h>

@interface NSProTableHeaderCell : NSProTextFieldCell
{
    id _indicatorImage;
    struct __PHCFlags {
        unsigned int useImageSource:1;
        unsigned int value:3;
        unsigned int manualIndicator:1;
        unsigned int sortHighlight:1;
        unsigned int themeVariant:3;
        unsigned int reserved:25;
    } _phcFlags;
    void *_proReserved4;
    void *_proReserved5;
}

- (void)_setSortable:(BOOL)arg1 showSortIndicator:(BOOL)arg2 ascending:(BOOL)arg3 priority:(long long)arg4 highlightForSort:(BOOL)arg5;
- (id)_sortIndicatorFacet;
- (long long)themeVariant;
- (void)setThemeVariant:(long long)arg1;
- (id)indicatorImageSource;
- (void)setIndicatorImageSource:(id)arg1;
- (void)_setIndicatorImageSource:(id)arg1;
- (id)_indicatorImage;
- (void)_setIndicatorImage:(id)arg1;
- (void)_setSortHighlight:(BOOL)arg1;
- (BOOL)_sortHighlight;
- (void)_setHasManualIndicator:(BOOL)arg1;
- (BOOL)_hasManualIndicator;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (struct CGRect)drawingRectForBounds:(struct CGRect)arg1;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)_convertToText:(id)arg1;
- (void)highlight:(BOOL)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (BOOL)_needRedrawOnWindowChangedKeyState;
- (void)_adjustFontSize;
- (BOOL)isOpaque;
- (void)_drawThemeContents:(struct CGRect)arg1 highlighted:(BOOL)arg2 inView:(id)arg3;
- (id)_secondaryListHeaderFacet;
- (id)_primaryListHeaderFacet;
- (void)updateRenditionKey:(id)arg1 getFocus:(char *)arg2 userInfo:(id)arg3;
- (long long)_currentThemeValueInView:(id)arg1;
- (long long)_currentThemeStateInView:(id)arg1;
- (long long)_themeValue;
- (void)_setThemeValue:(long long)arg1;
- (BOOL)_shouldDrawLeftSeparatorInView:(id)arg1;
- (BOOL)_shouldDrawRightSeparatorInView:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initTextCell:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)_proCommonInit;
- (BOOL)_supportsClassicLargeMetrics;

@end

