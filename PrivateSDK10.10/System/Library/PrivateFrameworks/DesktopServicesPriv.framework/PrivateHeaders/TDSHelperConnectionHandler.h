/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface TDSHelperConnectionHandler : NSObject
{
    struct TDSHelperContext *_helper;
    struct TDSMutex _mutex;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)clearHelper;
- (void)handleHelperEvent:(void *)arg1;
- (id)initWithHelper:(struct TDSHelperContext *)arg1;

@end

