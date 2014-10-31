/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Safari/SiteMetadataResponse.h>

@class NSColor, NSData, NSImage, NSURL, WebBookmark;

// Not exported
@interface TouchIconResponse : SiteMetadataResponse
{
}

+ (id)responseWithBookmark:(id)arg1 touchIcon:(id)arg2 generated:(BOOL)arg3 extractedBackgroundColor:(id)arg4;
+ (id)responseWithURL:(id)arg1 touchIcon:(id)arg2 generated:(BOOL)arg3 extractedBackgroundColor:(id)arg4 faviconData:(id)arg5 faviconIconURL:(id)arg6 faviconPageURL:(id)arg7;
+ (id)responseWithURL:(id)arg1 touchIcon:(id)arg2 generated:(BOOL)arg3 extractedBackgroundColor:(id)arg4;
@property(readonly, nonatomic) NSURL *faviconPageURL;
@property(readonly, nonatomic) NSURL *faviconIconURL;
@property(readonly, nonatomic) NSData *faviconData;
@property(readonly, nonatomic) BOOL iconUsesCustomClipping;
@property(readonly, nonatomic, getter=isGenerated) BOOL generated;
@property(readonly, nonatomic) WebBookmark *bookmark;
@property(readonly, nonatomic) NSImage *prerenderedIcon;
@property(readonly, nonatomic) NSColor *extractedBackgroundColor;
@property(readonly, nonatomic) NSImage *touchIcon;
- (id)initWithBookmark:(id)arg1 url:(id)arg2 touchIcon:(id)arg3 generated:(BOOL)arg4 extractedBackgroundColor:(id)arg5 faviconData:(id)arg6 faviconIconURL:(id)arg7 faviconPageURL:(id)arg8;

@end

