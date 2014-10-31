/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Lookup/LUTextAccessor.h>

@class NSView<NSTextInputClient>;

@interface LUTextInputClientTextAccessor : LUTextAccessor
{
    NSView<NSTextInputClient> *_textInputClientView;
}

+ (BOOL)canAccessTextInView:(id)arg1;
+ (BOOL)canAccessTextAtLocation:(struct CGPoint)arg1;
@property(retain) NSView<NSTextInputClient> *textInputClientView; // @synthesize textInputClientView=_textInputClientView;
- (id)termForRange:(struct _NSRange)arg1 textOrigin:(struct CGPoint *)arg2 language:(id *)arg3 partOfSpeech:(id *)arg4;
- (id)_termAndTextOrigin:(struct CGPoint *)arg1 language:(id *)arg2 partOfSpeech:(id *)arg3;
- (id)_termAtLocation:(struct CGPoint)arg1 textOrigin:(struct CGPoint *)arg2 language:(id *)arg3 partOfSpeech:(id *)arg4;
- (id)initWithView:(id)arg1;
- (id)initWithLocation:(struct CGPoint)arg1;
- (void)dealloc;

@end

