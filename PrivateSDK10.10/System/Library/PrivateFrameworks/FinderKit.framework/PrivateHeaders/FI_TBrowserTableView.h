/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSBrowserTableView.h"

#import "TShrinkToFitDelegateProtocol-Protocol.h"

@class FI_TColumnMoreCell, FI_TTableViewShrinkToFitController;

// Not exported
@interface FI_TBrowserTableView : NSBrowserTableView <TShrinkToFitDelegateProtocol>
{
    _Bool _itemHitOnMouseDown;
    _Bool _mouseDownInMoreButton;
    FI_TTableViewShrinkToFitController *_stfController;
    FI_TColumnMoreCell *_moreCell;
    struct TKeyValueBinder _showingAnyColorTagsBinder;
    _Bool _showingAnyColorTags;
    _Bool _showingAnyBadgeImages;
    long long _disabledTrackingRow;
}

@property(readonly) struct TKeyValueBinder *showingAnyColorTagsBinder; // @synthesize showingAnyColorTagsBinder=_showingAnyColorTagsBinder;
@property(nonatomic) _Bool showingAnyColorTags; // @synthesize showingAnyColorTags=_showingAnyColorTags;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)_onlyAcceptRowDropOnContent;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)updateDraggingItemsForDrag:(id)arg1;
- (void)keyDown:(id)arg1;
- (id)inputContext;
- (struct CGRect)frameOfCellAtColumn:(long long)arg1 row:(long long)arg2;
- (struct CGRect)rectOfRow:(long long)arg1;
- (id)stfEditorController_FI;
- (void)shrinkToFitTextViewAboutToClose;
- (void)shrinkToFitTextViewEditingComplete:(id)arg1;
- (_Bool)shrinkToFitTextViewAboutToOpen;
- (id)preparedCellAtColumn:(long long)arg1 row:(long long)arg2;
- (void)updateSTFEditorLocation;
- (void)stopEditing:(_Bool)arg1;
- (_Bool)startEditingWithNode:(const struct TFENode *)arg1 renameOp:(id)arg2;
- (void)editColumn:(long long)arg1 row:(long long)arg2 withEvent:(id)arg3 select:(BOOL)arg4;
- (BOOL)canDragRowsWithIndexes:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)invalidateThumbnailForKeyNodes:(const struct TFENodeVector *)arg1;
- (id)iconImageForNode:(const struct TFENode *)arg1;
- (double)optimalHeight;
- (void)selectRowIndexes:(id)arg1 byExtendingSelection:(BOOL)arg2;
- (void)scrollSelectedRowToVisible;
- (void)dragImage:(id)arg1 at:(struct CGPoint)arg2 offset:(struct CGSize)arg3 event:(id)arg4 pasteboard:(id)arg5 source:(id)arg6 slideBack:(BOOL)arg7;
- (_Bool)_wantsLiveResizeToUseCachedImage;
- (void)drawRect:(struct CGRect)arg1;
- (id)menuForEvent:(id)arg1;
- (void)quickLookWithEvent:(id)arg1;
- (unsigned long long)hitTestForEvent:(id)arg1 row:(long long)arg2;
- (id)hitTest:(struct CGPoint)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (_Bool)_typeSelectInterpretKeyEvent:(id)arg1;
- (_Bool)commonMouseDownAndEarlyReturn:(id)arg1 controller:(id)arg2;
- (void)_trackDisabledClickWithEvent:(id)arg1 controller:(id)arg2;
@property long long disabledTrackingRow;
- (void)mouseUp:(id)arg1;
@property(nonatomic) _Bool showingAnyBadgeImages; // @dynamic showingAnyBadgeImages;
- (_Bool)handleUnicodeTextInput:(id)arg1 atTime:(double)arg2;
- (BOOL)shouldDelayWindowOrderingForEvent:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (void)finalize;
- (void)dealloc;
- (struct TFENode)nodeAtRow:(long long)arg1;
- (id)itemAtRow:(long long)arg1;
- (id)viewController;
- (id)columnViewController;
- (BOOL)_supportsTrackingAreasForCells;
- (id)initWithFrame:(struct CGRect)arg1;

@end

