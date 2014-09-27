#import <Foundation/NSUserNotification.h>

unsigned long long _NSUserNotificationCenterTypeSystem = 2;

@interface NSUserNotificationCenter(Private)

+ (id)_webNotificationIdentifiers;
+ (id)_webNotificationCenterSearchPath;
+ (BOOL)_doNotDisturbEnabled;
+ (id)_centerForBundleIdentifier:(id)arg1;
+ (id)_centerForIdentifier:(id)arg1 type:(unsigned long long)arg2;
- (void)_invalidateAndUnregister;
- (void)_unRegisterForRemotePushNotifications;
- (void)_registerForRemotePushNotificationsWithEnvironment:(id)arg1 types:(unsigned long long)arg2;
- (void)_registerForRemotePushNotificationTypes:(unsigned long long)arg1;
- (void)_removeAllPresentedAlerts;
- (void)_removePresentedAlert:(id)arg1;
- (void)_removeAllDisplayedNotifications;
- (void)_removeDisplayedNotification:(id)arg1;
- (void)_setDeliveredNotifications:(id)arg1;
- (void)_setAppDelegate:(id)arg1 connect:(BOOL)arg2;

@end


@interface NSUserNotification(Private) 

- (void)set_imageURL:(NSURL *)_imageURL;
- (NSURL *)_imageURL;
- (void)set_persistent:(BOOL)_persistent;
- (BOOL)_persistent;

@end