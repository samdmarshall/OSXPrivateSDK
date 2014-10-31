/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSTableHeaderView.h"

@interface NSProTableHeaderView : NSTableHeaderView
{
    void *_proReserved1;
    void *_proReserved2;
    void *_proReserved5;
}

- (BOOL)_shouldHaveResizeCursorAtPoint:(struct CGPoint)arg1;
- (void)resetCursorRects;
- (void)_scheduleDelayedShowOpenHandCursorIfNecessary;
- (void)_unshowOpenHandCursor:(id)arg1;
- (void)_cancelDelayedShowOpenHandCursor;
- (void)_showOpenHandCursor:(id)arg1;
- (id)_resizeCursorForTableColumn:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGSize)_headerCellSizeOfColumn:(long long)arg1;
- (void)_beginDraggingColumn:(long long)arg1;
- (void)_drawHeaderOfColumn:(long long)arg1;
- (BOOL)isOpaque;
- (id)initWithCoder:(id)arg1;

@end

