/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString, NSURL;

@interface FRNavigationItem : NSObject
{
    BOOL _loading;
    NSURL *_provisionalURL;
    NSURL *_finalURL;
    NSString *_webviewIdentifier;
    NSString *_activeToolbarItemIdentifier;
}

@property(copy) NSString *activeToolbarItemIdentifier; // @synthesize activeToolbarItemIdentifier=_activeToolbarItemIdentifier;
@property BOOL loading; // @synthesize loading=_loading;
@property(retain) NSString *webviewIdentifier; // @synthesize webviewIdentifier=_webviewIdentifier;
@property(retain) NSURL *finalURL; // @synthesize finalURL=_finalURL;
@property(retain) NSURL *provisionalURL; // @synthesize provisionalURL=_provisionalURL;
- (void).cxx_destruct;
- (void)copyPropertiesFromItem:(id)arg1;
- (id)description;

@end

