/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface CIMCandidate : NSObject
{
    NSString *_surface;
    NSString *_reading;
    NSString *_displayReading;
    BOOL _predictionCandidate;
}

@property(readonly, getter=isPredictionCandidate) BOOL predictionCandidate; // @synthesize predictionCandidate=_predictionCandidate;
@property(copy) NSString *displayReading; // @synthesize displayReading=_displayReading;
@property(copy) NSString *reading; // @synthesize reading=_reading;
@property(copy) NSString *surface; // @synthesize surface=_surface;
@property(readonly, getter=isCompositionCandidate) BOOL compositionCandidate;
@property(readonly, getter=isCompletionCandidate) BOOL complectionCandidate;
@property(readonly, getter=isEmojiCandidate) BOOL emojiCandidate;
@property(readonly, getter=isLearningDictionaryCandidate) BOOL learningDictionaryCandidate;
@property(readonly, getter=isUserWordCandidate) BOOL userWordCandidate;
@property(readonly, getter=isExtensionCandidate) BOOL extensionCandidate;
- (void)dealloc;
- (id)initWithSurface:(id)arg1 reading:(id)arg2;
- (id)initWithSurface:(id)arg1 reading:(id)arg2 displayReading:(id)arg3;

@end

