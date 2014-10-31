/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <FinderKit/FI_TViewController.h>

@class FI_TAirDropDiscoveryController, FI_TButton, FI_TTextField, NSString;

// Not exported
@interface FI_TAirDropLegacyModePopoverViewController : FI_TViewController
{
    struct TNSRef<FI_TAirDropDiscoveryController *> _discoveryController;
    struct TKeyValueObserver _legacyModeEnabledObserver;
    struct TKeyValueObserver _legacyMachineObserver;
    struct TNSRef<FI_TPopoverController *> _popoverController;
    FI_TTextField *_messageTextField;
    FI_TButton *_toggleLegacyModeButton;
}

+ (id)keyPathsForValuesAffectingIsButtonEnabled;
+ (id)keyPathsForValuesAffectingIsLegacyMachine;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)toggleAirDropLegacyMode:(id)arg1;
@property(readonly, retain, nonatomic) NSString *buttonTitle; // @dynamic buttonTitle;
@property(readonly, retain, nonatomic) NSString *messageText; // @dynamic messageText;
@property(readonly, nonatomic) _Bool isButtonEnabled; // @dynamic isButtonEnabled;
- (_Bool)isLegacyMachine;
- (void)setPopoverController:(id)arg1;
@property(readonly) FI_TAirDropDiscoveryController *discoveryController;
- (id)nibName;
- (void)viewLoaded;
- (void)initCommon;

@end

