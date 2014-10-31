/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class QuickLiteCursor;

@interface QuickLiteRow : NSObject
{
    QuickLiteCursor *QL_quickLiteCursor;
    unsigned long long QL_rowIndex;
}

- (id)values;
- (const char *)textValueForColumn:(id)arg1;
- (double)doubleValueForColumn:(id)arg1;
- (long long)longLongValueForColumn:(id)arg1;
- (long long)intValueForColumn:(id)arg1;
- (BOOL)boolValueForColumn:(id)arg1;
- (id)valueForColumn:(id)arg1;
- (id)stringForColumn:(id)arg1;
- (BOOL)setValue:(id)arg1 forColumn:(id)arg2;
- (unsigned long long)index;
- (id)cursor;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)QLP_initWithCursor:(id)arg1 withRow:(unsigned long long)arg2;

@end

