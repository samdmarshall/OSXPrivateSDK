/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "LSApplicationWorkspaceObserverProtocol-Protocol.h"

@class NSMutableDictionary, NSString;

@interface SHKPlugInObservingCache : NSObject <LSApplicationWorkspaceObserverProtocol>
{
    NSMutableDictionary *_dictionary;
}

- (void).cxx_destruct;
- (void)pluginsDidUninstall:(id)arg1;
- (void)pluginsDidInstall:(id)arg1;
- (id)bundleForURL:(id)arg1;
- (void)setBundle:(id)arg1 forURL:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

