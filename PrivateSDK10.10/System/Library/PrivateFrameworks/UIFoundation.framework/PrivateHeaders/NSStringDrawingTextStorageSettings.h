/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface NSStringDrawingTextStorageSettings : NSObject
{
    struct {
        float _hyphenationFactor;
        struct {
            unsigned int usesFontLeading:1;
            unsigned int usesScreenFonts:1;
            unsigned int showsInvisibleCharacters:1;
            unsigned int showsControlCharacters:1;
            unsigned int defaultAttachmentScaling:4;
            unsigned int typesetterBehavior:8;
            unsigned int reserved:20;
        } _flags;
    } _settings;
}

+ (id)threadSpecificStringDrawingTextStorageSettings:(BOOL)arg1;
- (id)init;

@end

