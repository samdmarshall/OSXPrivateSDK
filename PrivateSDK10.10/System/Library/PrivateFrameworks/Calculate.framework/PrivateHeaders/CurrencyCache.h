/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDate, NSDictionary;

@interface CurrencyCache : NSObject
{
    unsigned long long _uuid;
    NSDate *_lastRefreshDate;
    NSDictionary *_currencyData;
}

+ (id)shared;
@property(retain, nonatomic) NSDictionary *currencyData; // @synthesize currencyData=_currencyData;
@property(retain, nonatomic) NSDate *lastRefreshDate; // @synthesize lastRefreshDate=_lastRefreshDate;
@property(readonly) unsigned long long uuid; // @synthesize uuid=_uuid;
- (void)_loadPersistedCurrencyCache;
- (void)_persistCurrencyCache;
- (BOOL)refreshWithTimeOut:(float)arg1;
- (BOOL)refresh;
- (void)dealloc;
- (id)init;

@end

