/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol OAXClient
+ (BOOL)sourceDrawableIsTopLevel:(struct _xmlNode *)arg1;
- (id)readGraphicData:(struct _xmlNode *)arg1 state:(id)arg2;
- (id)readOle:(struct _xmlNode *)arg1 state:(id)arg2;
- (void)postprocessHyperlink:(id)arg1 relationship:(id)arg2 state:(id)arg3;
- (id)readClientTextField:(struct _xmlNode *)arg1 paragraph:(id)arg2 state:(id)arg3;
- (void)readBlipExtWithURI:(id)arg1 fromNode:(struct _xmlNode *)arg2 toDrawable:(id)arg3 state:(id)arg4;
- (void)readClientDataFromGraphicalFramePropertiesNode:(struct _xmlNode *)arg1 toDrawable:(id)arg2 state:(id)arg3;
- (void)readClientDataFromGraphicDataNode:(struct _xmlNode *)arg1 toDiagram:(id)arg2 state:(id)arg3;
- (void)readClientDataFromGroupNode:(struct _xmlNode *)arg1 toGroup:(id)arg2 state:(id)arg3;
- (void)readClientDataFromPictureNode:(struct _xmlNode *)arg1 toImage:(id)arg2 state:(id)arg3;
- (void)readClientDataFromShapeNode:(struct _xmlNode *)arg1 toShape:(id)arg2 state:(id)arg3;
- (void)readClientDataFromNode:(struct _xmlNode *)arg1 toDrawable:(id)arg2 state:(id)arg3;
- (struct _xmlNode *)genericNonVisualPropertiesNodeForDrawableNode:(struct _xmlNode *)arg1 inNamespace:(id)arg2 state:(id)arg3;
- (id)readClientDrawableFromXmlNode:(struct _xmlNode *)arg1 state:(id)arg2;

@optional
- (BOOL)chartAutoStrokeIsHollow;
- (BOOL)chartAutoFillIsHollow;
@end

