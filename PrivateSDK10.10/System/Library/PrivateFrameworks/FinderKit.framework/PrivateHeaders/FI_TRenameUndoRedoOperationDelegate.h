/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <FinderKit/FI_TRenameOperationDelegate.h>

// Not exported
@interface FI_TRenameUndoRedoOperationDelegate : FI_TRenameOperationDelegate
{
    struct TRenameUndoRedoOperationHelper *_actionHelper;
    _Bool _needToReselectNode;
    int _renameOpCount;
    _Bool _isUndo;
    struct TriStateBool _pendingIsUndo;
}

- (id).cxx_construct;
- (int)configureNewName:(struct TString *)arg1 forNode:(const struct TFENode *)arg2 isDisplayName:(_Bool)arg3 allowInteraction:(_Bool)arg4;
- (int)asyncNodeOperation:(id)arg1 subOperationCompleted:(unsigned int)arg2 targetNode:(const struct TFENode *)arg3;
- (int)asyncNodeOperation:(id)arg1 subOperationStarted:(unsigned int)arg2;
- (void)setNeedToReselectNode:(_Bool)arg1;
- (void)setIsUndo:(_Bool)arg1;
- (void)finalize;
- (void)dealloc;
- (id)initWithRenameAction:(struct TRenameAction *)arg1;

@end

