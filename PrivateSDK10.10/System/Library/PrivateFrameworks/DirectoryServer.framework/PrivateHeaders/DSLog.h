/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface DSLog : NSObject
{
    struct __asl_object_s *asl;
    int logfd;
}

+ (id)logWithLogFilePath:(id)arg1;
+ (id)logWithName:(id)arg1 andLogFilePath:(id)arg2;
+ (id)log;
- (void)logMessage:(id)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1 andLogFilePath:(id)arg2;
- (id)initWithLogFilePath:(id)arg1;
- (id)init;

@end

