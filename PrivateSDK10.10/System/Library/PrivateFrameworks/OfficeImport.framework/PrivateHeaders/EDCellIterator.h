/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class EDRowBlock, EDRowBlocks;

// Not exported
@interface EDCellIterator : NSObject
{
    EDRowBlocks *mRowBlocks;
    EDRowBlock *mCurrentRowBlock;
    struct EDRowInfo *mCurrentRowInfo;
    unsigned int mCurrentRowInfoIndex;
    struct EDCellHeader *mCurrentCell;
    unsigned int mCurrentCellIndex;
    unsigned int mDesiredRowNumber;
    unsigned int mDesiredColumnNumber;
}

- (struct EDCellHeader *)scanToRowNumber:(unsigned int)arg1 columnNumber:(unsigned int)arg2;
- (struct EDCellHeader *)adjacentCellRight;
- (struct EDCellHeader *)adjacentCellLeft;
- (void)dealloc;
- (id)initWithWorksheet:(id)arg1;
- (struct EDCellHeader *)adjacentCell:(int)arg1;

@end

