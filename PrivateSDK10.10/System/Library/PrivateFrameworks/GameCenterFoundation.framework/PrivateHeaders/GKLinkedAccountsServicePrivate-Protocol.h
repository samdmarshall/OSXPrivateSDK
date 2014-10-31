/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "GKLinkedAccountsService-Protocol.h"

@protocol GKLinkedAccountsServicePrivate <GKLinkedAccountsService>
- (oneway void)notifyAvailableExternalServicesWithHandler:(id)arg1;
- (oneway void)getAuthTokenForExternalService:(BOOL)arg1 handler:(id)arg2;
- (oneway void)availableExternalServicesWithHandler:(id)arg1;
- (oneway void)disconnectExternalService:(BOOL)arg1 handler:(id)arg2;
- (oneway void)connectExternalService:(BOOL)arg1 handler:(id)arg2;
@end

