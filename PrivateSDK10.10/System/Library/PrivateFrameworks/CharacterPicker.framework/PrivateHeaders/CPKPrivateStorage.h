/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CPKDataProvider, CPKPopoverController, CPKWindow, NSView, NSWindow;

// Not exported
@interface CPKPrivateStorage : NSObject
{
    struct CGRect _positioningRect;
    NSView *_positioningView;
    unsigned long long _preferredEdge;
    id _globalEventMonitor;
    id _localEventMonitor;
    BOOL _needsRebuildView;
    BOOL _settingDataSource;
    BOOL _displayingPopover;
    BOOL _skipOpeningAnimation;
    BOOL _displayAsWindow;
    struct CGPoint _displayAsWindowLoc;
    NSWindow *_lastKeyWindow;
    id _lastActionObject;
    BOOL _lastTargetValidation;
    struct _NSRange _lastSelectionOnTarget;
    id <CPKCharacterEntity> _lastSelectedEntity;
    CPKWindow *_detachingWindow;
    CPKWindow *_detachedWindow;
    CPKPopoverController *_tempRetainer;
    CPKDataProvider *_delayedSettingProvider;
}

@property(retain) CPKDataProvider *delayedSettingProvider; // @synthesize delayedSettingProvider=_delayedSettingProvider;
@property(retain) CPKPopoverController *tempRetainer; // @synthesize tempRetainer=_tempRetainer;
@property(retain) CPKWindow *detachedWindow; // @synthesize detachedWindow=_detachedWindow;
@property(retain) CPKWindow *detachingWindow; // @synthesize detachingWindow=_detachingWindow;
@property(retain) id <CPKCharacterEntity> lastSelectedEntity; // @synthesize lastSelectedEntity=_lastSelectedEntity;
@property struct _NSRange lastSelectionOnTarget; // @synthesize lastSelectionOnTarget=_lastSelectionOnTarget;
@property BOOL lastTargetValidation; // @synthesize lastTargetValidation=_lastTargetValidation;
@property id lastActionObject; // @synthesize lastActionObject=_lastActionObject;
@property NSWindow *lastKeyWindow; // @synthesize lastKeyWindow=_lastKeyWindow;
@property struct CGPoint displayAsWindowLoc; // @synthesize displayAsWindowLoc=_displayAsWindowLoc;
@property BOOL displayAsWindow; // @synthesize displayAsWindow=_displayAsWindow;
@property BOOL displayingPopover; // @synthesize displayingPopover=_displayingPopover;
@property BOOL skipOpeningAnimation; // @synthesize skipOpeningAnimation=_skipOpeningAnimation;
@property BOOL settingDataSource; // @synthesize settingDataSource=_settingDataSource;
@property BOOL needsRebuildView; // @synthesize needsRebuildView=_needsRebuildView;
@property(retain) id localEventMonitor; // @synthesize localEventMonitor=_localEventMonitor;
@property(retain) id globalEventMonitor; // @synthesize globalEventMonitor=_globalEventMonitor;
@property unsigned long long preferredEdge; // @synthesize preferredEdge=_preferredEdge;
@property NSView *positioningView; // @synthesize positioningView=_positioningView;
@property struct CGRect positioningRect; // @synthesize positioningRect=_positioningRect;
- (void)dealloc;

@end

