/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class SASPronunciationContext;

@interface SAUIListenForPronunciation : SABaseClientBoundCommand
{
}

+ (id)listenForPronunciationWithDictionary:(id)arg1 context:(id)arg2;
+ (id)listenForPronunciation;
- (BOOL)requiresResponse;
@property(retain, nonatomic) SASPronunciationContext *context;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

