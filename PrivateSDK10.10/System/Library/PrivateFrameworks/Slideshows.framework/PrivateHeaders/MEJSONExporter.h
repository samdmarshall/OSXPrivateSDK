/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSFileHandle;

@interface MEJSONExporter : NSObject
{
    NSFileHandle *mOutputFile;
    long long mIndentLevel;
    long long mIndent;
    BOOL mPrettyPrint;
    BOOL mIsStandalone;
}

@property(nonatomic) BOOL isStandalone; // @synthesize isStandalone=mIsStandalone;
@property(nonatomic) BOOL prettyPrint; // @synthesize prettyPrint=mPrettyPrint;
- (void)_appendNewline;
- (void)_appendIndent;
- (void)_appendString:(id)arg1;
- (void)_exportValue:(id)arg1;
- (void)_exportArray:(id)arg1;
- (void)_exportDictionary:(id)arg1;
- (BOOL)exportPropertyList:(id)arg1 toPath:(id)arg2;
- (void)dealloc;
- (id)init;

@end

