/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol PKCorePlugInProtocol
- (void)prefsSetObject:(id)arg1 forKey:(id)arg2 inPlugIn:(id)arg3 result:(id)arg4;
- (void)prefsObjectForKey:(id)arg1 inPlugIn:(id)arg2 result:(id)arg3;
- (void)shutdownPlugIn;
- (void)setEmbeddedContext:(id)arg1;
- (void)beginUsingPlugIn:(id)arg1 ready:(id)arg2;
- (void)prepareUsing:(id)arg1 reply:(id)arg2;
- (void)prepareUsingPlugIn:(id)arg1 hostProtocol:(id)arg2 reply:(id)arg3;
@end

