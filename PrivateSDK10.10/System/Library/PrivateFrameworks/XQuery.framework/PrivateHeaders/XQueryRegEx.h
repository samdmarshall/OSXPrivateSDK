/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface XQueryRegEx : NSObject
{
    unsigned long long _flags;
    void *_compiled;
}

+ (id)regExp:(id)arg1 withFlags:(id)arg2;
- (id)tokenize:(id)arg1;
- (id)replace:(id)arg1 withString:(id)arg2;
- (id)matches:(id)arg1;
- (id)hasMatch:(id)arg1;
- (id)initExpr:(id)arg1 withFlags:(id)arg2;
- (void)finalize;
- (void)dealloc;

@end

