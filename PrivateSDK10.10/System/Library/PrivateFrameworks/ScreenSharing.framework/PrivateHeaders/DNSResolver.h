/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface DNSResolver : NSObject
{
}

+ (id)sharedResolver;
+ (void)initialize;
- (void)resolveAddress:(struct in6_addr)arg1 observer:(id)arg2 userInfo:(id)arg3;
- (void)resolveHostname:(id)arg1 observer:(id)arg2 userInfo:(id)arg3;
- (void)resolveCore:(struct __CFHost *)arg1 withObserver:(id)arg2 withUserInfo:(id)arg3 withHostInfoType:(int)arg4;

@end

