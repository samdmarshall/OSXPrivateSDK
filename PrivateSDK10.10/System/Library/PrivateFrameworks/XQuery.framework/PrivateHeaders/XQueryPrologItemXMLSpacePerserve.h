/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "XQueryPrologItemBehavior-Protocol.h"

@class NSString;

// Not exported
@interface XQueryPrologItemXMLSpacePerserve : NSObject <XQueryPrologItemBehavior>
{
    BOOL value;
    long long line;
}

+ (id)preserve:(BOOL)arg1 atLine:(long long)arg2;
@property(readonly, copy) NSString *description;
- (void)XQueryUpdateProlog:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

