/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSImage.h"

@interface NSImage (FI_NSImageAdditions)
+ (void)drawBorderImage_FI:(id)arg1 middleImage:(id)arg2 borderImage:(id)arg3 inRect:(struct CGRect)arg4 withOrientation:(unsigned long long)arg5 flipped:(_Bool)arg6 operation:(unsigned long long)arg7 fraction:(double)arg8;
+ (id)imageWithName_FI:(id)arg1;
- (struct CGImage *)createCGImageForProposedRect_FI:(struct CGRect *)arg1 context:(id)arg2 hints:(id)arg3;
- (struct CGImage *)createCGImageRef_FI;
- (id)initFromLegacyResourceFork_FI:(unsigned int)arg1 identifier:(long long)arg2 offset:(long long)arg3;
- (id)initWithvRefNum_FI:(short)arg1 creator:(unsigned int)arg2 iconType:(unsigned int)arg3;
- (id)initWithCGImageRef_FI:(struct CGImage *)arg1;
@end

