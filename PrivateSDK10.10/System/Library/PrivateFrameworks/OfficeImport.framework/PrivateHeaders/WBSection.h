/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface WBSection : NSObject
{
}

+ (void)readFrom:(id)arg1 textRun:(struct WrdSectionTextRun *)arg2 document:(id)arg3 index:(int)arg4 section:(id)arg5;
+ (void)mapPrinterSettings:(struct WrdSectionProperties *)arg1 toSection:(id)arg2;
+ (void)mapSection:(id)arg1 toSectionProperties:(struct WrdSectionProperties *)arg2;
+ (void)mapSectionProperties:(struct WrdSectionProperties *)arg1 toSection:(id)arg2;
+ (void)readHeaderFrom:(id)arg1 type:(int)arg2 index:(int)arg3 header:(id)arg4;

@end

