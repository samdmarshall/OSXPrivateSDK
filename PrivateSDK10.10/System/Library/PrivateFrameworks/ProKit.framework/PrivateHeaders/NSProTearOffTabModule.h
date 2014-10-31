/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ProKit/NSProTabModule.h>

#import "NSProMenuDelegate-Protocol.h"
#import "NSProTearOffTabViewDelegate-Protocol.h"

@class NSProTearOffTabModuleContentViewMenuData, NSString;

@interface NSProTearOffTabModule : NSProTabModule <NSProMenuDelegate, NSProTearOffTabViewDelegate>
{
    NSProTearOffTabModuleContentViewMenuData *_contentViewMenuData;
    void *_proReserved11;
    void *_proReserved12;
}

+ (Class)tabViewClass;
+ (void)setDraggedModule:(id)arg1;
+ (id)draggedModule;
- (void)flagsChanged:(id)arg1;
- (BOOL)validateLocalUserInterfaceItem:(id)arg1;
- (void)selectPreviousTabViewItemAction:(id)arg1;
- (void)selectNextTabViewItemAction:(id)arg1;
- (id)localModuleActions;
- (void)menuDidClose:(id)arg1;
- (void)menuWillOpen:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (long long)indexOfSelectedItemInMenu:(id)arg1;
- (id)newTabViewForWinModule:(id)arg1 usingLayout:(id)arg2;
- (void)tabView:(id)arg1 stopDraggingTabViewItem:(id)arg2 withOperation:(unsigned long long)arg3;
- (id)tabView:(id)arg1 startDraggingTabViewItem:(id)arg2;
- (void)tabView:(id)arg1 didReorderTabViewItem:(id)arg2;
- (void)tabView:(id)arg1 willRemoveTabViewItem:(id)arg2;
- (BOOL)tabView:(id)arg1 canRemoveTabViewItem:(id)arg2;
- (BOOL)tabView:(id)arg1 canInsertTabViewItem:(id)arg2;
- (void)dealloc;
- (BOOL)loadView;
- (void)removeSubmodule:(id)arg1;
- (void)module:(id)arg1 didAddSubmodule:(id)arg2;
- (void)moduleDidBecomeVisible:(id)arg1;
- (void)willCloseSubmodule:(id)arg1;
- (void)_removeFromSupermoduleIfNeeded;
- (void)endDraggingModule:(id)arg1;
- (void)startDraggingModule:(id)arg1;
- (void)tearOffModule:(id)arg1;
- (void)tearOffSelectedTabViewItem:(id)arg1;
- (void)tearOffRepresentedObject:(id)arg1;
- (void)_popupContentViewMenu:(id)arg1;
- (void)_contentViewMenuItemDragAction:(id)arg1;
- (void)_contentViewMenuItemDeleteAction:(id)arg1;
- (void)_contentViewMenuItemAction:(id)arg1;
- (void)_installContentViewMenuIfNeeded;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

