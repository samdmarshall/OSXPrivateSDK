/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface OAXEffect : NSObject
{
}

+ (void)writeGlow:(id)arg1 to:(id)arg2;
+ (void)readGlow:(id)arg1 fromXmlNode:(struct _xmlNode *)arg2;
+ (void)writeReflection:(id)arg1 to:(id)arg2;
+ (void)readReflection:(id)arg1 fromXmlNode:(struct _xmlNode *)arg2;
+ (void)writePresetShadow:(id)arg1 to:(id)arg2;
+ (void)readPresetShadow:(id)arg1 fromXmlNode:(struct _xmlNode *)arg2;
+ (void)writeOuterShadow:(id)arg1 includeRotateWithShape:(BOOL)arg2 to:(id)arg3;
+ (void)readOuterShadow:(id)arg1 fromXmlNode:(struct _xmlNode *)arg2;
+ (void)readShadow:(id)arg1 fromXmlNode:(struct _xmlNode *)arg2;
+ (BOOL)isEmpty:(id)arg1;
+ (id)readEffectsFromXmlNode:(struct _xmlNode *)arg1 packagePart:(id)arg2 drawingState:(id)arg3;
+ (id)presetShadowTypeEnumMap;
+ (void)writeShadowBase:(id)arg1 to:(id)arg2;

@end

