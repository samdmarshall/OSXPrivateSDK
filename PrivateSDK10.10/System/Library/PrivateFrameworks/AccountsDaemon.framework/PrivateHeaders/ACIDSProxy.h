/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class ACIDSProxyDelegate, IDSService;

@interface ACIDSProxy : NSObject
{
    ACIDSProxyDelegate *_delegate;
    IDSService *_idsService;
}

- (void).cxx_destruct;
- (void)renewCredentialsForAccount:(id)arg1;
- (void)sendAccount:(id)arg1 withCommand:(id)arg2;
- (void)_sendMessage:(id)arg1;
- (id)init;

@end

