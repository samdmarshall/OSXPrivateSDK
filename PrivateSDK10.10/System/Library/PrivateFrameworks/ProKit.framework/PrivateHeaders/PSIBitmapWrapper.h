/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSData;

@interface PSIBitmapWrapper : NSObject
{
    struct CGContext *_bitmap;
    NSData *_pixelData;
    BOOL _freeData;
}

- (id)compressedData;
- (id)pixelData;
- (struct CGContext *)bitmapContext;
- (void)finalize;
- (void)dealloc;
- (id)initWithPixelWidth:(unsigned int)arg1 pixelHeight:(unsigned int)arg2;

@end

