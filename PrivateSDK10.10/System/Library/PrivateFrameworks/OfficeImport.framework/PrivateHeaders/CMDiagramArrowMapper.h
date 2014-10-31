/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/CMDiagramShapeMapper.h>

// Not exported
@interface CMDiagramArrowMapper : CMDiagramShapeMapper
{
    BOOL mIsVertical;
    BOOL mIsOutward;
    float mRadius;
}

+ (void)initialize;
- (struct CGSize)textSizeForShapeSize:(struct CGSize)arg1;
- (struct CGSize)sizeForNode:(id)arg1 atIndex:(unsigned long long)arg2;
- (struct CGRect)circumscribedBounds;
- (void)mapChildrenAt:(id)arg1 withState:(id)arg2;
- (id)initWithOddDiagram:(id)arg1 drawingContext:(id)arg2 orientedBounds:(id)arg3 identifier:(id)arg4 parent:(id)arg5;

@end

