/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"

@class NSString;

@interface IFPathAction : NSObject <NSCoding>
{
    NSString *_type;
}

+ (id)types;
+ (BOOL)loadActionsAndComponentsFromNSXMLElement:(id)arg1 intoPlan:(id)arg2;
+ (BOOL)_recursivelySetupComponent:(id)arg1 inPlan:(id)arg2 withAction:(id)arg3 forParent:(id)arg4;
+ (id)patchAction;
+ (id)bundleVersionAction;
+ (id)actionForNSXMLElement:(id)arg1;
+ (void)initialize;
+ (BOOL)addBundleVersionChecksToPlan:(id)arg1 forBundleVersionPlist:(id)arg2;
+ (BOOL)addActionsToPlan:(id)arg1 fromIFPkgComponents:(id)arg2 returningSearches:(id *)arg3 andError:(id *)arg4;
- (BOOL)evaluateActionOnNode:(id)arg1 fromPlan:(id)arg2 withSearchContext:(id)arg3 atTarget:(id)arg4 returningError:(id *)arg5;
- (id)type;
- (BOOL)canBeUsedOnNode:(id)arg1;
- (void)dealloc;
- (long long)comparePathActions:(id)arg1;
- (id)initWithNSXMLElement:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

