/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface VMUSourceInfo : NSObject
{
    NSString *_path;
    NSString *_fileName;
    unsigned int _lineNumber;
}

- (void)dealloc;
- (unsigned int)lineNumber;
- (id)fileName;
- (id)path;
- (id)initWithSymbolicator:(struct _CSTypeRef)arg1 address:(unsigned long long)arg2;

@end

