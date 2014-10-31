/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSViewController.h"

#import "IAAppCheckboxMatrixRowItemDelegateProtocol-Protocol.h"

@class IAAListPlugin, IAAccount, IAAppCheckboxMatrix, NSMutableArray;

@interface IAAppCheckboxMatrixController : NSViewController <IAAppCheckboxMatrixRowItemDelegateProtocol>
{
    IAAccount *_account;
    IAAListPlugin *_plugin;
    IAAppCheckboxMatrix *_checkboxMatrix;
    NSMutableArray *_apps;
    NSMutableArray *_pairedServices;
    id _delegate;
}

@property(retain) id <IAAppTableControllerDelegateProtocol> delegate; // @synthesize delegate=_delegate;
@property(retain) NSMutableArray *pairedServices; // @synthesize pairedServices=_pairedServices;
@property(retain) NSMutableArray *apps; // @synthesize apps=_apps;
@property(retain) IAAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)checkboxClicked:(id)arg1;
- (void)configureForProvider:(id)arg1;
- (id)view;
- (void)forceAppIDsEnabled:(id)arg1;
- (void)selectAppIDs:(id)arg1;
- (void)selectAllApps;
- (id)selectedApps;
- (void)setServices:(id)arg1;
- (void)_applyExceptions:(id)arg1;
- (void)_sortApps;
- (id)initWithAccount:(id)arg1 plugin:(id)arg2;

@end

