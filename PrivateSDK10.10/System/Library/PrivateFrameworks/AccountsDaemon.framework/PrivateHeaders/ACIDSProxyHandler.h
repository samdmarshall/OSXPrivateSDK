/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class ACAccountStore;

@interface ACIDSProxyHandler : NSObject
{
    ACAccountStore *_accountStore;
}

- (void).cxx_destruct;
- (void)deleteAccount:(id)arg1;
- (void)promptUserWithAccount:(id)arg1;
- (void)authenticateAccount:(id)arg1;
- (void)changedAccount:(id)arg1;
- (void)addAccount:(id)arg1;
- (id)init;

@end

