/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface CalLocationManager : NSObject
{
}

+ (void)_loadMapKit;
+ (void)strictGeocodeString:(id)arg1 withCompletionBlock:(id)arg2;
+ (void)placemarkForAddress:(id)arg1 withCompletionBlock:(id)arg2;
+ (void)placemarkForLocation:(id)arg1 withCompletionBlock:(id)arg2;
+ (void)currentLocationWithCompletionBlock:(id)arg1;

@end

