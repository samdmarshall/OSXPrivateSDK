/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <LoginUIKit/LUIController.h>

@class CWInterface;

@interface LUIWiFiStatusController : LUIController
{
    CWInterface *_interface;
    BOOL _paused;
}

+ (id)controllerWithStyle:(int)arg1;
- (void)dealloc;
- (id)initWithStyle:(int)arg1;
- (void)resumeController;
- (void)pauseController;
- (void)tearDownController;
- (void)_setupContentView;
- (void)_updateStatus;
- (void)_handleNotification:(id)arg1;

@end

