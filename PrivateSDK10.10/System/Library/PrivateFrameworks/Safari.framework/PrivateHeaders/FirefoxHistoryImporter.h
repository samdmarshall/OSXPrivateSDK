/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Safari/FirefoxImporter.h>

#import <Safari/BrowserHistoryImporter-Protocol.h>

@class NSString;

// Not exported
@interface FirefoxHistoryImporter : FirefoxImporter <BrowserHistoryImporter>
{
}

- (int)_queryDatabase:(struct SQLiteDatabase *)arg1 forRedirectsAfterFirefoxTime:(long long)arg2 delegate:(id)arg3;
- (int)_queryDatabase:(struct SQLiteDatabase *)arg1 forVisitsAfterFirefoxTime:(long long)arg2 delegate:(id)arg3;
- (void)_importHistoryAfterFirefoxTime:(long long)arg1 delegate:(id)arg2;
- (void)importHistorySinceDate:(id)arg1 delegate:(id)arg2;
- (void)importEntireHistoryWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

