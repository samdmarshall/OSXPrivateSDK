/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IKImageBrowserView.h"

@interface ILMediaBrowserImageView : IKImageBrowserView
{
    BOOL _shouldDrawOverlays;
    BOOL _displaysToolTips;
}

- (void)setSelectionIndexes:(id)arg1 byExtendingSelection:(BOOL)arg2;
- (BOOL)selectItem:(BOOL)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)_shouldSelectIndex:(long long)arg1;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)arg1;
- (void)copy:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (void)magnifyWithEvent:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (void)scaleCellSizeByFactor:(double)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)keyDown:(id)arg1;
- (BOOL)displaysToolTips;
- (void)setDisplaysToolTips:(BOOL)arg1;
- (BOOL)shouldDrawOverlays;
- (void)setShouldDrawOverlays:(BOOL)arg1;

@end

