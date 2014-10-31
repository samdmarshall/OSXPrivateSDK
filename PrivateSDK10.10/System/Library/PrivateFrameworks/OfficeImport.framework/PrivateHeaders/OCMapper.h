/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class OCCancel, OITSUTemporaryDirectory;

// Not exported
@interface OCMapper : NSObject
{
    OCCancel *mCancel;
    OITSUTemporaryDirectory *mTemporaryDirectoryObject;
}

+ (id)mapperForCurrentThread;
- (id)temporaryDirectoryPath;
- (void)teardown;
- (void)setup;
- (void)quit;
- (BOOL)isCancelled;
- (void)cancel;
- (void)dealloc;
- (id)init;

@end

