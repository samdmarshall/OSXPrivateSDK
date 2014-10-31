/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface PatternMatchingCheck : NSObject
{
}

+ (id)performCheckWithFileURL:(id)arg1 andProperties:(id)arg2 caspianEnforced:(BOOL)arg3;
+ (BOOL)doesFileOrDirectory:(id)arg1 matchSignatureArray:(id)arg2 useCache:(id)arg3 matchAny:(BOOL)arg4;
+ (BOOL)doesFileOrDirectory:(id)arg1 matchSignature:(id)arg2 withSelector:(SEL)arg3 withFilter:(id)arg4 useCache:(id)arg5;
+ (BOOL)doesFile:(id)arg1 matchSignature:(id)arg2 withSelector:(SEL)arg3 withFilter:(id)arg4 useCache:(id)arg5;
+ (BOOL)doesFile:(id)arg1 matchPattern:(id)arg2 useCache:(id)arg3;
+ (BOOL)doesFile:(id)arg1 matchIdentity:(id)arg2 useCache:(id)arg3;
+ (BOOL)returnTrue:(id)arg1 ignore:(id)arg2 ignore:(id)arg3;
+ (id)hashOfFile:(id)arg1;
+ (id)copyDownloadContentTypeForFile:(id)arg1;
+ (void)initialize;

@end

