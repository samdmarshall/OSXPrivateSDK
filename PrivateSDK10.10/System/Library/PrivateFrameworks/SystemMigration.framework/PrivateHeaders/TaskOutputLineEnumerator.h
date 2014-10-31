/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSEnumerator.h"

@class NSMutableData, NSPipe, NSTask, NSValueTransformer;

@interface TaskOutputLineEnumerator : NSEnumerator
{
    NSTask *_task;
    NSPipe *_readPipe;
    NSMutableData *_bufferData;
    NSValueTransformer *_pathTransformer;
}

- (void).cxx_destruct;
- (id)nextObject;
- (id)_getBufferedLineIfAvailable;
- (void)setPathTransformer:(id)arg1;
- (void)dealloc;
- (id)initWithLaunchPath:(id)arg1 arguments:(id)arg2;

@end

