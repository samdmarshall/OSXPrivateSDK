/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSBrowserTableView.h"

@interface _NSProBrowserTableView : NSBrowserTableView
{
}

+ (id)_sourceListInactiveGroupTitleTextColor;
+ (id)_sourceListGroupTitleTextColor;
+ (id)standardSortIndicatorSource;
+ (id)_highlightColorForInstance:(id)arg1 cell:(id)arg2;
+ (BOOL)_shouldUseSecondaryHighlightColorInInstance:(id)arg1;
+ (id)_dropHighlightBackgroundColor;
+ (Class)_headerViewClass;
+ (Class)_cornerCellClass;
+ (void)initialize;
- (id)_groupCellAttributesWithDefaults:(id)arg1 highlighted:(BOOL)arg2;
- (void)_getSourceListColorFor:(int)arg1 startColor:(id *)arg2 endColor:(id *)arg3 bottomColor:(id *)arg4;
- (BOOL)_manuallyDrawSourceListHighlight;
- (void)_drawSourceListHighlightInRect:(struct CGRect)arg1 isButtedUpRow:(BOOL)arg2;
- (id)_highlightColorForCell:(id)arg1;
- (void)_highlightRow:(long long)arg1 clipRect:(struct CGRect)arg2;
- (BOOL)_onlyDragOnContent;
- (BOOL)onlyDragOnContent;
- (double)sizeToFitWidthOfColumn:(long long)arg1;
- (BOOL)scrollRectToVisible:(struct CGRect)arg1;
- (void)_updateRolloverCellsAfterScroll;
- (id)preparedCellAtColumn:(long long)arg1 row:(long long)arg2;
- (id)_cellFocusRingColor;
- (void)_drawFocusRingAroundRect:(struct CGRect)arg1;
- (void)addTableColumn:(id)arg1;
- (int)indicatorValueInTableColumn:(id)arg1;
- (void)setIndicatorValue:(int)arg1 inTableColumn:(id)arg2;
- (id)indicatorImageSourceInTableColumn:(id)arg1;
- (void)setIndicatorImageSource:(id)arg1 inTableColumn:(id)arg2;
- (void)superviewFrameChanged:(id)arg1;
- (BOOL)_fillsClipViewHeight;
- (BOOL)_fillsClipViewWidth;
- (double)_locationOfRow:(long long)arg1;
- (id)_alternateSelectionColorForCell:(id)arg1;
- (void)highlightSelectionInClipRect:(struct CGRect)arg1;
- (void)_highlightColumn:(long long)arg1 clipRect:(struct CGRect)arg2;
- (BOOL)_shouldUseSecondaryHighlightColor;
- (void)drawBackgroundInClipRect:(struct CGRect)arg1;
- (BOOL)_autohideShouldDrawAlternatingRowBackgroundColors;
- (void)setAutohideAlternatingRowBackgroundColors:(BOOL)arg1;
- (BOOL)autohideAlternatingRowBackgroundColors;
- (id)_alternatingRowBackgroundColors;
- (void)_drawDropHighlightOnRow:(long long)arg1;
- (void)_drawDropHighlightBetweenUpperRow:(long long)arg1 andLowerRow:(long long)arg2 atOffset:(double)arg3;
- (id)_controlShadowColor;
- (id)_nonKeyEditingFrameColor;
- (id)_textBackgroundColor;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)isOpaque;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setHeaderView:(id)arg1;

@end

