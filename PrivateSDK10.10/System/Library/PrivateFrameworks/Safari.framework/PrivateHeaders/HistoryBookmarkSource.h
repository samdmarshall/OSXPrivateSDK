/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Safari/BookmarkSource.h>

@class NSArray, NSDateFormatter, NSMenu;

// Not exported
@interface HistoryBookmarkSource : BookmarkSource
{
    NSMenu *_historyMenu;
    unsigned long long _builtInHistoryMenuItemsCount;
    NSArray *_sessions;
    NSDateFormatter *_dateFormatter;
}

- (void).cxx_destruct;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (BOOL)validate__clearHistoryAndWebsiteDataFromMenu:(id)arg1;
- (BOOL)validate__takeLocationFromHistoryEntry:(id)arg1;
- (int)_recentHistoryLimit;
- (id)_entriesFromMixedItems:(id)arg1;
- (id)_displayedTitleForEntry:(id)arg1;
- (void)_clearHistoryAndWebsiteDataFromMenu:(id)arg1;
- (void)_appendHistoryToMenu;
- (id)_addSubmenu:(id)arg1 withTitle:(id)arg2;
- (BOOL)_addItemsForSession:(id)arg1 toMenu:(id)arg2 skip:(unsigned int)arg3 limit:(unsigned int)arg4;
- (void)_addHistoryEntry:(id)arg1 toMenu:(id)arg2;
- (void)_updateShowFavoritesItem;
- (void)_updateShowTopSitesItem;
- (void)_updateHistoryMenu;
- (void)_takeLocationFromHistoryEntry:(id)arg1;
- (id)_titleForSession:(id)arg1;
- (void)_removeHistoryFromMenu;
- (void)_historySessionsDidChange;
- (id)titleStringForContentItem:(id)arg1;
- (id)parentOfContentItem:(id)arg1;
- (unsigned int)numberOfChildrenOfContentItem:(id)arg1;
- (id)imageForContentItem:(id)arg1;
- (BOOL)deleteContentItems:(id)arg1 withParentWindow:(id)arg2 undoManager:(id)arg3;
- (id)child:(unsigned int)arg1 ofContentItem:(id)arg2;
- (id)contentItemsToInitiallyExpand;
- (void)_regenerateSessions;
- (BOOL)contentItemCanHaveChildren:(id)arg1;
- (BOOL)contentItemCanBeSearchResult:(id)arg1;
- (BOOL)canDeleteContents;
- (id)bookmarksFromContentItems:(id)arg1;
- (id)bookmarkSourceImage;
- (id)bookmarkFromContentItem:(id)arg1;
- (id)addressStringForContentItem:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (void)setHistoryMenu:(id)arg1;
- (void)dealloc;
- (id)init;

@end

