/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSWindowController.h"

#import "NSOutlineViewDataSource-Protocol.h"
#import "NSOutlineViewDelegate-Protocol.h"
#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"

@class NSButton, NSOutlineView, NSSplitView, NSString, NSTableView, NSTextField;

// Not exported
@interface BookmarkChooser : NSWindowController <NSOutlineViewDataSource, NSOutlineViewDelegate, NSTableViewDataSource, NSTableViewDelegate>
{
    NSSplitView *collectionsAndContentsSplitView;
    NSTableView *collectionsTable;
    NSOutlineView *contentsOutline;
    NSButton *cancelButton;
    NSButton *confirmButton;
    NSTextField *promptField;
    BOOL _canChooseBookmarkLeaves;
    BOOL _canChooseBookmarkCollections;
    id <BookmarkChooserDelegate> _delegate;
}

+ (id)bookmarkChooser;
@property(nonatomic) __weak id <BookmarkChooserDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL canChooseBookmarkCollections; // @synthesize canChooseBookmarkCollections=_canChooseBookmarkCollections;
@property(nonatomic) BOOL canChooseBookmarkLeaves; // @synthesize canChooseBookmarkLeaves=_canChooseBookmarkLeaves;
- (void).cxx_destruct;
- (BOOL)_visibleSheetIsBlockingPropertyChanges;
- (void)_updatePrompt;
- (void)_updateConfirmButton;
- (void)_stopObservingBookmarkAndIconChanges;
- (void)_startObservingBookmarkAndIconChanges;
- (id)_selectedCollection;
- (void)_refreshContentsFromCollectionChange;
- (void)_refreshAllFromNotification:(id)arg1;
- (void)_confirm:(id)arg1;
- (id)_collectionAtRow:(long long)arg1;
- (BOOL)_canChooseBookmark:(id)arg1;
- (void)_cancel:(id)arg1;
- (BOOL)_shouldEnableRowAtIndex:(unsigned long long)arg1;
- (id)chosenBookmark;
- (void)beginSheetModalForWindow:(id)arg1;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (BOOL)outlineView:(id)arg1 shouldSelectItem:(id)arg2;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (void)tableViewSelectionIsChanging:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)windowDidLoad;
- (id)init;
- (void)dealloc;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

