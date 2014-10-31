/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_source>;

@interface NDStateController : NSObject
{
    struct __SCDynamicStore *_store;
    NSMutableArray *_subscribers;
    NSMutableArray *_configurationPairs;
    NSMutableDictionary *_networkState;
    NSMutableDictionary *_pairs;
    NSObject<OS_dispatch_source> *_routerTimer;
    NSObject<OS_dispatch_source> *_serverTimer;
    NSObject<OS_dispatch_source> *_internetTimer;
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } _stateControllerLock;
}

+ (id)sharedNetworkState;
- (BOOL)useEthernet1;
- (BOOL)externalModemPresent;
- (void)unsubscribe:(id)arg1;
- (void)subscribe:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)updateNetworkStateForKeys:(id)arg1;
- (void)updateNotificationPairs;
- (id)init;
- (void)setupPingMonitoring;
- (void)pingServer;
- (void)pingInternet;
- (void)pingRouter;
- (void)updateSubscribers;
- (void)setupLinkMonitoring;
- (void)registerForNotifications;
- (void)addStatusPair:(id)arg1 forNSCKey:(id)arg2 withType:(id)arg3;
- (void)updateStatusForEntry:(id)arg1 forNSCKey:(id)arg2 withType:(id)arg3;
- (void)setIPStatus:(id)arg1 forNSCKey:(id)arg2;
- (void)setPhoneStatus:(id)arg1 forNSCKey:(id)arg2;
- (void)setPPPStatus:(id)arg1 forNSCKey:(id)arg2;
- (void)setLinkStatus:(id)arg1 forNSCKey:(id)arg2;
- (void)setAirPortStatus:(id)arg1 forNSCKey:(id)arg2;

@end

