/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ScreenReader/SCRList.h>

@class NSMutableArray;

// Not exported
@interface SCRDockList : SCRList
{
    BOOL _isTabDock;
    NSMutableArray *_dockItemsReorderList;
    struct CGPoint _startingDockItemOrigin;
    struct CGPoint _endingDockItemOrigin;
}

- (id)typeDescription;
- (id)captionDescriptionContainsUserLabel:(char *)arg1 containsAncestorLabel:(char *)arg2;
- (BOOL)addSelectionDescriptionToRequest:(id)arg1;
- (BOOL)interactDownCommandShiftWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactUpCommandShiftWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactEndWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactDownWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactUpWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)focusInto:(id)arg1;
- (BOOL)_moveLastInDockWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)_moveFirstInDockWithEvent:(id)arg1 request:(id)arg2;
- (void)echoCurrentSelectionWithQueueID:(id)arg1 interruptsRequests:(BOOL)arg2 excludingIdentifiers:(id)arg3;
- (void)handleSelectionChange:(id)arg1;
- (void)synchVOCursorToSelectedUIElement:(id)arg1;
- (BOOL)shouldSynchVOCursorToSelectionChange;
- (BOOL)handleReadContentsCallbackForEvent:(id)arg1 request:(id)arg2 visibleOnly:(BOOL)arg3;
- (BOOL)startWindowContentFeedback:(id)arg1;
- (BOOL)handleTaggedOperationWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)handleUntaggedOperationWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)handleEvent:(id)arg1 request:(id)arg2;
- (BOOL)_handleDockItemReorder:(id)arg1;
- (BOOL)addContainerSummaryToRequest:(id)arg1;
- (BOOL)tabDockSelectionChanged;
- (void)_delayedEchoCurrentSelection;
- (void)_updateDockItemsReorderList;
- (BOOL)isStack;
- (void)dealloc;
- (id)initWithUIElement:(id)arg1 parent:(id)arg2;

@end

