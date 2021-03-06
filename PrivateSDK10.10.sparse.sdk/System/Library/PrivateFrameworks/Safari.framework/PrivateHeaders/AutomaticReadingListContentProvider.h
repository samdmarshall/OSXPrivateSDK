/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "ReadingListTableViewContentProvider-Protocol.h"
#import "SidebarContentFilterDelegate-Protocol.h"

@class FilteredCollectionHelper, NSMutableArray, NSString, SidebarContentFilter;

// Not exported
@interface AutomaticReadingListContentProvider : NSObject <SidebarContentFilterDelegate, ReadingListTableViewContentProvider>
{
    NSMutableArray *_cachedItems;
    FilteredCollectionHelper *_filteredCollectionHelper;
    SidebarContentFilter *_contentFilter;
}

+ (void)updateContent;
- (void).cxx_destruct;
- (id)_filteredCollectionHelper;
- (void)_didRemoveAllIcons:(id)arg1;
- (void)_iconDidChange:(id)arg1;
- (void)_itemsChanged:(id)arg1;
- (void)sidebarContentFilterDidCompleteFilterOperation:(id)arg1;
@property(nonatomic) BOOL showsOnlyUnreadItems;
- (void)filterWithSearchString:(id)arg1;
- (BOOL)animateDataSourceChanges;
- (BOOL)itemsAreRemovable;
- (Class)tableCellViewClass;
- (id)itemsChangedNotificationName;
- (id)itemsChangedNotificationObject;
- (id)displayedItemPrecedingItem:(id)arg1;
- (id)displayedItemFollowingItem:(id)arg1;
- (id)displayedItems;
- (id)allReadingListItems;
- (void)dealloc;
@property(readonly, nonatomic) SidebarContentFilter *contentFilter; // @synthesize contentFilter=_contentFilter;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

