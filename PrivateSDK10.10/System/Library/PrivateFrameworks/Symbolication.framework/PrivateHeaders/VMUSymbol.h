/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString, VMUSourceInfo;

@interface VMUSymbol : NSObject
{
    NSString *_name;
    VMUSourceInfo *_sourceInfo;
}

- (void)dealloc;
- (id)sourceInfoForAddress:(unsigned long long)arg1;
- (id)name;
- (id)initWithSymbolicator:(struct _CSTypeRef)arg1 address:(unsigned long long)arg2;

@end

