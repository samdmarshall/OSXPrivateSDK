/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSViewController.h"

#import "WKBrowsingContextLoadDelegate-Protocol.h"

@class MUIContextMenuController, MUIJavaScriptController, MUILinkEditWindowController, MUIWebDocumentView, MUIWebDocumentViewGroup, MUIWebFindController, NSMapTable, NSMutableArray, NSPort, NSString;

@interface MUIWKViewController : NSViewController <WKBrowsingContextLoadDelegate>
{
    BOOL _editable;
    BOOL _webInspectorEnabled;
    MUIWebDocumentView *_webDocumentView;
    NSMutableArray *_pendingDocumentInteractionRequests;
    BOOL _ignoreKVOHTMLChanges;
    BOOL _isEditing;
    MUIWebDocumentViewGroup *_viewGroup;
    NSMapTable *_attachmentControllersByAttachment;
    MUIContextMenuController *_contextMenuController;
    MUIWebFindController *_findController;
    MUILinkEditWindowController *_linkEditController;
    MUIJavaScriptController *_javaScriptController;
    id _generateWebDocumentCompletionHandler;
    id _cacheDisplayInRectCompletionHandler;
    NSString *_bundleReplyMessageString;
    id <NSObject><NSSecureCoding> _bundleReplyMessageData;
    NSPort *_bundleMessageReplyPort;
}

+ (id)newReplyMessageNameForMessageName:(id)arg1;
@property(readonly, nonatomic) NSPort *bundleMessageReplyPort; // @synthesize bundleMessageReplyPort=_bundleMessageReplyPort;
@property(retain, nonatomic) id <NSObject><NSSecureCoding> bundleReplyMessageData; // @synthesize bundleReplyMessageData=_bundleReplyMessageData;
@property(copy, nonatomic) NSString *bundleReplyMessageString; // @synthesize bundleReplyMessageString=_bundleReplyMessageString;
@property(copy, nonatomic) id cacheDisplayInRectCompletionHandler; // @synthesize cacheDisplayInRectCompletionHandler=_cacheDisplayInRectCompletionHandler;
@property(copy, nonatomic) id generateWebDocumentCompletionHandler; // @synthesize generateWebDocumentCompletionHandler=_generateWebDocumentCompletionHandler;
@property(retain, nonatomic) MUIJavaScriptController *javaScriptController; // @synthesize javaScriptController=_javaScriptController;
@property(retain, nonatomic) MUILinkEditWindowController *linkEditController; // @synthesize linkEditController=_linkEditController;
@property(retain, nonatomic) MUIWebFindController *findController; // @synthesize findController=_findController;
@property(retain, nonatomic) MUIContextMenuController *contextMenuController; // @synthesize contextMenuController=_contextMenuController;
@property(nonatomic) BOOL isEditing; // @synthesize isEditing=_isEditing;
@property(nonatomic) BOOL ignoreKVOHTMLChanges; // @synthesize ignoreKVOHTMLChanges=_ignoreKVOHTMLChanges;
@property(retain, nonatomic) NSMapTable *attachmentControllersByAttachment; // @synthesize attachmentControllersByAttachment=_attachmentControllersByAttachment;
@property(retain, nonatomic) MUIWebDocumentViewGroup *viewGroup; // @synthesize viewGroup=_viewGroup;
- (void).cxx_destruct;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)toggleAutomaticListInsertion:(id)arg1;
- (void)editLink:(id)arg1;
- (void)_didReceiveCacheDisplayData:(id)arg1;
- (void)cancelPendingCacheDisplayInRect;
- (void)cacheDisplayInRect:(struct CGRect)arg1 completionHandler:(id)arg2;
- (void)_noteFileSystemChanged:(id)arg1;
- (void)setAttachments:(id)arg1 asHidden:(BOOL)arg2 completionHandler:(id)arg3;
- (void)exportAttachments:(id)arg1 toApplication:(id)arg2;
- (BOOL)canExportAttachments:(id)arg1 toApplication:(id)arg2;
- (id)_imageAttachments;
- (void)saveAttachments:(id)arg1 toDirectory:(id)arg2 makePathsUnique:(BOOL)arg3;
- (void)_saveAttachment:(id)arg1 toDirectory:(id)arg2 filename:(id)arg3 makePathUnique:(BOOL)arg4;
- (void)saveAttachmentsWithPanel:(id)arg1;
- (void)discardEditing;
- (void)commitEditingWithDelegate:(id)arg1 didCommitSelector:(SEL)arg2 contextInfo:(void *)arg3;
- (BOOL)commitEditing;
- (void)_endEditing;
- (void)_beginEditing;
- (void)_updateRepresentedObjectWithDocumentContents:(id)arg1;
- (void)_completeWebDocumentPasteboardType;
- (void)_didGenerateSelectionWebDocument:(id)arg1;
- (void)generateSelectionWebDocument:(id)arg1;
- (void)_didGenerateStyleInlinedWebDocument:(id)arg1;
- (void)generateStyleInlinedWebDocument:(id)arg1;
- (void)removeAttachment:(id)arg1 completionHandler:(id)arg2;
- (void)_documentSelectionChanged:(id)arg1;
- (void)_documentContentChanged:(id)arg1;
- (id)_stringByRemovingCharactersInSet:(id)arg1 fromString:(id)arg2;
- (void)appendAttributedString:(id)arg1 completionHandler:(id)arg2;
- (void)appendString:(id)arg1 completionHandler:(id)arg2;
- (void)appendAttachment:(id)arg1 completionHandler:(id)arg2;
@property(nonatomic) BOOL editable;
- (BOOL)performDragOperation:(id)arg1;
- (void)_ddExternalUIRequested:(id)arg1;
- (id)sendMessageToWebProcessControllerSynchronously:(id)arg1 messageBody:(id)arg2;
- (void)sendMessageToWebProcessController:(id)arg1 messageBody:(id)arg2;
- (void)receiveMessageFromWebProcessController:(id)arg1 messageBody:(id)arg2 wkObject:(id)arg3;
- (void)_runPendingDocumentInteractionRequests;
- (void)evaluateDocumentInteractionRequest:(id)arg1;
- (void)_didLoadMainFrameTimeout;
- (void)_webProcessDidPaintContent:(id)arg1;
- (void)_webProcessDidLayoutContent:(id)arg1;
- (void)browsingContextControllerDidFinishLoad:(id)arg1;
- (void)_updateDebuggingPreferences;
- (void)_updateFontPreferences;
- (void)_updateImageScaling;
- (void)reloadDocument;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_fullResolutionDataDidBecomeAvailable:(id)arg1;
- (void)setRepresentedObject:(id)arg1;
- (id)representedObject;
- (void)setView:(id)arg1;
- (id)view;
- (void)loadView;
@property(nonatomic) MUIWebDocumentView *webDocumentView;
- (void)tearDown;
- (void)dealloc;
- (void)_muiWKViewControllerCommonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
@property(nonatomic) BOOL webInspectorEnabled;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

