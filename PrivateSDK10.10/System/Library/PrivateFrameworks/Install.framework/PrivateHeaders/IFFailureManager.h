/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSMutableDictionary;

@interface IFFailureManager : NSObject
{
    NSMutableDictionary *_requestsDict;
    NSArray *_supportedElements;
    BOOL _armed;
}

+ (id)sharedManager;
- (id)requestForElementNamed:(id)arg1;
- (void)setArmed:(BOOL)arg1;
- (void)removeRequestForElementNamed:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)readRequestsFromVolumeAtPath:(id)arg1;
- (id)supportedElements;
- (void)dealloc;
- (id)init;

@end

