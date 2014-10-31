/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "ICAUIDelegate-Protocol.h"
#import "ICAWebKitViewControllerDelegate-Protocol.h"
#import "MMWebViewButtonBarDelegate-Protocol.h"

@class MMICAWebKitViewController, MMWebViewButtonBar, NSButton, NSLayoutConstraint, NSProgressIndicator, NSString, NSView, NSWindow;

@interface MMPasswordChangeWebKitViewController : NSObject <ICAWebKitViewControllerDelegate, ICAUIDelegate, MMWebViewButtonBarDelegate>
{
    BOOL _isButtonBarShown;
    BOOL _isResizeAvailible;
    MMICAWebKitViewController *_icaWebKitVC;
    id _passwordChangeCompletionHandler;
    NSWindow *_parentWindow;
    NSWindow *_window;
    NSView *_windowContentView;
    NSProgressIndicator *_loadingProgress;
    NSView *_loadingView;
    NSButton *_loadingCancelButton;
    NSView *_webViewContentView;
    NSView *_webView;
    NSView *_buttonBarContainer;
    MMWebViewButtonBar *_buttonBar;
    NSLayoutConstraint *_buttonBarHeight;
    struct CGSize _contentSize;
}

@property BOOL isResizeAvailible; // @synthesize isResizeAvailible=_isResizeAvailible;
@property BOOL isButtonBarShown; // @synthesize isButtonBarShown=_isButtonBarShown;
@property struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(retain, nonatomic) NSLayoutConstraint *buttonBarHeight; // @synthesize buttonBarHeight=_buttonBarHeight;
@property(retain, nonatomic) MMWebViewButtonBar *buttonBar; // @synthesize buttonBar=_buttonBar;
@property(retain, nonatomic) NSView *buttonBarContainer; // @synthesize buttonBarContainer=_buttonBarContainer;
@property(retain, nonatomic) NSView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) NSView *webViewContentView; // @synthesize webViewContentView=_webViewContentView;
@property(retain, nonatomic) NSButton *loadingCancelButton; // @synthesize loadingCancelButton=_loadingCancelButton;
@property(retain, nonatomic) NSView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) NSProgressIndicator *loadingProgress; // @synthesize loadingProgress=_loadingProgress;
@property(retain, nonatomic) NSView *windowContentView; // @synthesize windowContentView=_windowContentView;
@property(retain, nonatomic) NSWindow *window; // @synthesize window=_window;
@property(retain, nonatomic) NSWindow *parentWindow; // @synthesize parentWindow=_parentWindow;
@property(copy, nonatomic) id passwordChangeCompletionHandler; // @synthesize passwordChangeCompletionHandler=_passwordChangeCompletionHandler;
@property(retain, nonatomic) MMICAWebKitViewController *icaWebKitVC; // @synthesize icaWebKitVC=_icaWebKitVC;
- (void)button3Pressed:(id)arg1;
- (void)button2Pressed:(id)arg1;
- (void)button1Pressed:(id)arg1;
- (void)didChangePassword:(id)arg1 toNewPassword:(id)arg2 accountID:(id)arg3;
- (void)icaWebKitViewControllerDidFinishLoading:(id)arg1;
- (void)icaWebKitViewControllerDidFail:(id)arg1 error:(id)arg2;
- (void)icaWebKitViewControllerSheetDidEnd:(id)arg1 withData:(id)arg2;
- (id)webViewWindow;
- (void)showNativeAddFamilyMember;
- (void)icaSetButtonBar:(id)arg1;
- (void)resizeToWidth:(unsigned long long)arg1 heigth:(unsigned long long)arg2 callback:(id)arg3;
- (void)exitWebView:(id)arg1;
- (void)endSheet:(id)arg1;
- (void)beginSheetWithURL:(id)arg1 initialWidth:(unsigned long long)arg2 initialHeight:(unsigned long long)arg3 callback:(id)arg4 optionalContext:(id)arg5;
- (void)beginSheetWithContent:(id)arg1 initialWidth:(unsigned long long)arg2 initialHeight:(unsigned long long)arg3 callback:(id)arg4 optionalContext:(id)arg5;
- (void)icaWebKitViewIsAvailable;
- (void)icaWebKitViewSwitchToLocation:(id)arg1 toSection:(id)arg2;
- (void)_addButtonBarView:(id)arg1;
- (id)urlRequestForPasswordChange:(id)arg1 error:(id *)arg2;
- (void)resizeWindow:(id)arg1 toWidth:(unsigned long long)arg2 heigth:(unsigned long long)arg3;
- (BOOL)isButtonBarShowing;
- (BOOL)isWebViewShowing;
- (void)endPasswordChangeSheet:(long long)arg1;
- (void)cancelPasswordChangeWindow:(id)arg1;
- (void)showPasswordChangeSheet:(id)arg1 accountID:(id)arg2;
- (void)_handleGSTokenUpdateError:(id)arg1;
- (void)runPasswordChangeSheetForWindow:(id)arg1 accountID:(id)arg2 completionHandler:(id)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

