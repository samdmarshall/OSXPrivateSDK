/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Safari/RolloverTextButton.h>

#import "NSMenuDelegate-Protocol.h"

@class NSMenu, NSString, WebBookmark;

// Not exported
@interface FavoriteButton : RolloverTextButton <NSMenuDelegate>
{
    WebBookmark *_bookmark;
    NSMenu *_contentsMenu;
    BOOL _drawForDragging;
    BOOL _ignoreModifiers;
    BOOL _menuOpen;
    NSMenu *_contextMenu;
    BOOL _barIsExpanding;
}

+ (double)maxWidthForBookmarkType:(int)arg1;
+ (id)font;
+ (void)setDraggedButton:(id)arg1;
+ (id)draggedButton;
+ (void)_updateCellClass;
- (void).cxx_destruct;
- (void)menuDidClose:(id)arg1;
- (void)menuWillOpen:(id)arg1;
- (id)_hitTest:(const struct CGPoint *)arg1 dragTypes:(id)arg2;
- (void)setHighlighted:(BOOL)arg1;
- (BOOL)_canAcceptDroppedBookmarkAtPoint:(struct CGPoint)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (unsigned long long)determineDragOperation:(id)arg1;
- (void)draggedImage:(id)arg1 endedAt:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (void)deleteAfterDrag;
- (void)confirmDeletingFolder;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)arg1;
- (BOOL)ignoreModifierKeysWhileDragging;
- (void)otherMouseDown:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)performClickIgnoringModifiers:(id)arg1;
- (void)performClick:(id)arg1;
- (void)moveLeft:(id)arg1;
- (void)moveRight:(id)arg1;
- (void)moveUp:(id)arg1;
- (void)moveDown:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (BOOL)isMenuOpen;
- (void)popUpContentsMenu;
- (void)enclosingBarDidExpand;
- (void)enclosingBarWillExpand;
- (BOOL)shouldShowContentsMenuFromEvent:(id)arg1 waitedForDragDelay:(BOOL)arg2;
- (BOOL)canDragHorizontally:(BOOL)arg1 fromMouseDown:(id)arg2;
- (BOOL)mouseDownIsInMenuArrow:(id)arg1;
- (void)performDragFromMouseDown:(id)arg1 withViewFrameOrigin:(struct CGPoint)arg2;
- (void)stopObservingBookmarkReloads;
- (void)startObservingBookmarkReloads;
- (void)_bookmarksReloaded:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)canSmoothFontsInLayer;
- (void)drawForDraggingImageInRect:(struct CGRect)arg1;
- (id)_clipViewAncestor;
- (void)_setShouldDrawDragged:(BOOL)arg1;
- (BOOL)_shouldDrawDragged;
- (id)contentsMenu;
- (BOOL)hasContentsMenu;
- (id)menu;
- (void)_copyBookmark:(id)arg1;
- (BOOL)_shouldShowOpenInTabs;
- (void)_automaticallyOpenInTabs:(id)arg1;
- (void)_editAddress:(id)arg1;
- (void)_editTitle:(id)arg1;
- (void)_goToInNewWindow:(id)arg1;
- (void)_goToInNewTab:(id)arg1;
- (void)_goToAllInTabs:(id)arg1;
- (void)_goToAllInTabsConfirmingQuantityIfNecessary:(id)arg1;
- (void)_goToBookmark;
- (struct TabPlacementHint)_tabPlacementHint;
- (void)setBookmark:(id)arg1;
- (BOOL)automaticallyOpensInTabs;
- (id)bookmark;
- (void)setTitle:(id)arg1;
- (void)dealloc;
- (id)bookmarkSource;
- (id)initWithBookmark:(id)arg1 frame:(struct CGRect)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_setAttributes;
- (void)registerForDraggedTypes;
@property(readonly, copy) NSString *description;
- (BOOL)allowsVibrancy;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

