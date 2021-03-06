/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:25 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIViewController.h>
#import <libobjc.A.dylib/SKUIEditorTemplateViewDelegate.h>
#import <libobjc.A.dylib/SKUIDocumentViewController.h>

@class SKUIButtonViewElement, SKUIEditorTemplateView, SKUIViewElementLayoutContext, SKUIEditorTemplateViewElement, NSString;

@interface SKUIEditorDocumentViewController : SKUIViewController <SKUIEditorTemplateViewDelegate, SKUIDocumentViewController> {

	SKUIButtonViewElement* _doneButtonElement;
	SKUIEditorTemplateView* _editorView;
	char _isTextChanged;
	CGRect _keyboardFrame;
	SKUIViewElementLayoutContext* _layoutContext;
	SKUIButtonViewElement* _resetButtonElement;
	SKUIEditorTemplateViewElement* _templateElement;
	CGRect _toolbarFrame;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)loadView;
-(id)_backgroundColor;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)_keyboardWillShow:(id)arg1 ;
-(void)_keyboardWillHide:(id)arg1 ;
-(void)_keyboardWillChangeFrame:(id)arg1 ;
-(id)_layoutContext;
-(void)documentDidUpdate:(id)arg1 ;
-(id)initWithTemplateElement:(id)arg1 ;
-(void)didChangeTextInEditorTemplateView:(id)arg1 ;
-(void)_sendDoneEventAndDismissWithText:(id)arg1 ;
-(void)_updateBiographyWithText:(id)arg1 onCompletion:(/*^block*/id)arg2 ;
-(void)_sendCancelEventAndDismiss;
-(void)_updateEditorViewInset;
-(void)_layoutNavigation;
-(void)_layoutEditorView;
-(void)_doneButtonAction;
-(void)_cancelButtonAction;
-(void)_resetButtonAction;
-(void)_resetTextView;
-(void)_authenticateOnCompletion:(/*^block*/id)arg1 ;
-(id)_locateFirstButtonWithType:(int)arg1 inChildrenOfElement:(id)arg2 ;
@end

