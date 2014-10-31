/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSTokenFieldCell.h"

@interface SOTokenFieldCell : NSTokenFieldCell
{
    unsigned int _dragDelegateRespondsToTokenFieldCellDidBeginDragOperation;
    unsigned int _dragDelegateRespondsToTokenFieldCellDidEndDragOperation;
    id <SOTokenFieldCellDragDelegate> _dragDelegate;
}

@property(nonatomic) __weak id <SOTokenFieldCellDragDelegate> dragDelegate; // @synthesize dragDelegate=_dragDelegate;
- (void).cxx_destruct;
- (id)setUpFieldEditorAttributes:(id)arg1;
- (BOOL)tokenAttachment:(id)arg1 doubleClickedInRect:(struct CGRect)arg2 ofView:(id)arg3 atCharacterIndex:(unsigned long long)arg4;
- (void)_setPerformingDrop:(BOOL)arg1;

@end

