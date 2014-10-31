/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSXPCListenerDelegate-Protocol.h"
#import "SUUpdateService-Protocol.h"

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSString, NSXPCListener, SUPowerAssertionManager, SUProduct;

@interface SUUpdateServiceDaemon : NSObject <SUUpdateService, NSXPCListenerDelegate>
{
    NSXPCListener *_listener;
    NSMutableArray *_clients;
    NSMutableArray *_availableUpdates;
    SUProduct *_adoptedManualProduct;
    SUPowerAssertionManager *_powerAssertionManager;
    long long _didAutoInstallNotifyCount;
    NSMutableArray *_didAutoInstallNotifyStrings;
    NSMutableArray *_additionalPostLogoutInstallRequests;
    NSMutableDictionary *_productsInstalledAfterPostLogoutInstallDictionary;
    NSMutableDictionary *_additionalPackageDigestsByURL;
    NSDictionary *_principalUserCookie;
    struct dispatch_queue_s *_serviceQueue;
    struct dispatch_queue_s *_updateInfoQueue;
    struct dispatch_queue_s *_clientNotifyQueue;
    struct dispatch_queue_s *_backgroundActivityQueue;
    long long _lastThermalEmergencyCount;
    long long _retriesForBackgroundActivity;
}

+ (id)_daemonStateArchivePath;
+ (id)sharedUpdateServiceDaemon;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)_takeAllValidAdditionalPostLogoutInstallRequests;
- (id)_addAdditionalPostLogoutInstallRequests:(id)arg1;
- (void)_runBackgroundActionsOnCurrentQueueIfAppropriate:(char *)arg1;
- (void)_installStateDidChangeForKeys:(id)arg1;
- (void)_refreshLocalUpdateObjects:(id)arg1 afterScan:(BOOL)arg2;
- (void)authChallengeWasReceived:(id)arg1 handled:(char *)arg2;
- (void)resetServiceWithReply:(id)arg1;
- (void)dumpServiceDebugInfo;
- (void)combinedStatusForUpdatesWithProductKeys:(id)arg1 reply:(id)arg2;
- (void)statusForUpdateWithProductKey:(id)arg1 reply:(id)arg2;
- (void)takeRequestsToInstallAfterPostLogoutUpdatesWithReply:(id)arg1;
- (void)registerRequestsToInstallAfterPostLogoutUpdates:(id)arg1 reply:(id)arg2;
- (void)productKeysToAutomaticallyInstallLaterWithReply:(id)arg1;
- (void)setAutomaticallyInstallLater:(BOOL)arg1 forProductKeys:(id)arg2 replyWhenDone:(id)arg3;
- (void)adoptManualProductArchiveByReadingFromFileHandle:(id)arg1 archiveName:(id)arg2 displayName:(id)arg3 displayVersion:(id)arg4 allowDevSigning:(BOOL)arg5 replyWithResult:(id)arg6;
- (void)stringRepresentationOfLongDescriptionForProductKey:(id)arg1 reply:(id)arg2;
- (void)stashURLCredential:(id)arg1;
- (void)commitLoginCredentialsDisablingFLO:(BOOL)arg1 finishBlock:(id)arg2;
- (void)stashLoginCredentialsEnablingFLO:(BOOL)arg1 reply:(id)arg2;
- (void)productKeysToInstallAfterLogoutWithReply:(id)arg1;
- (void)registerToInstallAfterLogoutForProductKeys:(id)arg1 nowIsLater:(BOOL)arg2 restartNow:(BOOL)arg3 reply:(id)arg4;
- (void)_updateProductForPostLogoutInstallResultsNotification:(id)arg1 withStatus:(id)arg2;
- (void)_setProductsForPostLogoutInstallResultsNotification:(id)arg1 nowIsLater:(BOOL)arg2;
- (void)cancelUpdatesForProductKeys:(id)arg1 reply:(id)arg2;
- (void)startUpdatesForProductKeys:(id)arg1 usingClientAuthorization:(struct AuthorizationOpaqueRef *)arg2 holdingBoostDuringInstall:(BOOL)arg3 clientBlocksRestart:(BOOL)arg4 allowOnlyAppleSigned:(BOOL)arg5 packageScriptUserID:(unsigned int)arg6 sendingStatusUpdates:(BOOL)arg7 replyWhenDone:(id)arg8;
- (void)startRootModeUpdatesForProductKeys:(id)arg1 clientBlocksRestart:(BOOL)arg2 replyWhenDone:(id)arg3;
- (void)startUpdatesForProductKeys:(id)arg1 clientBlocksRestart:(BOOL)arg2 replyWhenDone:(id)arg3;
- (void)startDownloadingForProductKeys:(id)arg1 replyWhenDone:(id)arg2;
- (void)calculateDiskSpaceRequiredForUpdatesWithProductKeys:(id)arg1 downloadingOnly:(BOOL)arg2 reply:(id)arg3;
- (void)deviceInitiatedScanWithReply:(id)arg1;
- (void)buildTagCacheIfNecessaryWithReply:(id)arg1;
- (void)markRampedUpdatesAsSeenWithReply:(id)arg1;
- (void)clearAllHiddenUpdatesWithReply:(id)arg1;
- (void)setHidden:(BOOL)arg1 forProductKeys:(id)arg2 replyWhenDone:(id)arg3;
- (void)progressForRefreshOfAvailableUpdatesWithReply:(id)arg1;
- (void)refreshAvailableUpdatesForCurrentConfigurationLimitedToProductKeys:(id)arg1 distributionEnvironment:(id)arg2 distributionEvalutionMetainfo:(id)arg3 installedPrinters:(id)arg4 preferredLocalizations:(id)arg5 replyWhenDone:(id)arg6;
- (void)refreshAvailableUpdates:(BOOL)arg1 preferredLocalizations:(id)arg2 replyWhenDone:(id)arg3;
- (void)catalogInformationWithReply:(id)arg1;
- (void)endTransactions;
- (void)takePostInstallNotificationsWithReply:(id)arg1;
- (void)_performDownloadAndStageWithProductKeys:(id)arg1 reply:(id)arg2;
- (void)installStatus:(id)arg1 didChangeExternallyForProductKey:(id)arg2;
- (void)currentDevKeyModeWithReply:(id)arg1;
- (void)clearInvalidationForIdentifier:(id)arg1 version:(id)arg2 forReason:(int)arg3;
- (void)packageReferenceForMatchingIdentifier:(id)arg1 productKey:(id)arg2 invalidatingPrevious:(BOOL)arg3 reply:(id)arg4;
- (void)availableUpdatesOfType:(long long)arg1 withState:(long long)arg2 filteredByState:(unsigned long long)arg3 reply:(id)arg4;
- (void)availableUpdatesOfType:(long long)arg1 withState:(long long)arg2 reply:(id)arg3;
- (void)authorizeForUpdatingWithExternalFormData:(id)arg1 additionalTransactions:(unsigned long long)arg2 reply:(id)arg3;
- (void)_saveCurrentState;
- (BOOL)_unarchiveStateFrom:(id)arg1;
- (id)_archivedState;
- (id)_currentClients;
- (void)startListeningForConnections;
- (void)schedulePeriodicActions;
- (void)_scheduleTransientBackgroundActionWithDelay:(long long)arg1 grace:(long long)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

