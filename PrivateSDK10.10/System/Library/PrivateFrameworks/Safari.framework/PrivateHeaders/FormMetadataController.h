/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Safari/WBSFormMetadataController.h>

// Not exported
@interface FormMetadataController : WBSFormMetadataController
{
    struct BundleScriptWorld _scriptWorld;
}

+ (id)sharedFormMetadataController;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)formAutoFillNodeForJSWrapper:(struct OpaqueJSValue *)arg1 inContext:(struct OpaqueJSContext *)arg2;
- (void)finishedAutoFillingForm:(id)arg1 inFrame:(id)arg2;
- (void)usernameFieldBlurredInFrame:(id)arg1;
- (void)usernameFieldFocused:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3;
- (void)creditCardFieldBlurredInFrame:(id)arg1;
- (void)creditCardFieldFocused:(id)arg1 inFrame:(id)arg2;
- (void)passwordFieldBlurredInFrame:(id)arg1;
- (void)passwordFieldFocused:(id)arg1 inFrame:(id)arg2;
- (void)textDidChangeDelayCompletedField:(id)arg1 inFrame:(id)arg2;
- (void)clearScriptWorld;
- (struct BundleScriptWorld *)scriptWorld;

@end

