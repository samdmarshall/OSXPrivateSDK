/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Safari/SheetWithTableController.h>

#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"

@class NSArray, NSString;

// Not exported
@interface PlugInAutoStartData : SheetWithTableController <NSTableViewDataSource, NSTableViewDelegate>
{
    NSArray *_plugInAutoStartOrigins;
}

@property(copy, nonatomic) NSArray *plugInAutoStartOrigins; // @synthesize plugInAutoStartOrigins=_plugInAutoStartOrigins;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)_refreshAllIcons:(id)arg1;
- (void)plugInAutoStartDataUpdated;
- (void)removeSelectedItems:(id)arg1;
- (void)hideSheet:(id)arg1;
- (void)showSheetInWindow:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

