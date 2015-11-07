/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:11 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/HomeUIService.app/HomeUIService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <HomeUIService/HSSetupCodeFieldDelegate.h>
#import <HomeUIService/HSSetupStep.h>

@protocol HSSetupStepDelegate;
@class UIBarButtonItem, HSSetupCodeView, HSSetupCodeField, UIButton, NSLayoutConstraint, NSString;

@interface HSSetupManualEntryViewController : UIViewController <HSSetupCodeFieldDelegate, HSSetupStep> {

	char _dismissOnFailure;
	char _codeFieldIsResponder;
	UIBarButtonItem* _cameraButton;
	HSSetupCodeView* _setupCodeView;
	HSSetupCodeField* _codeField;
	UIButton* _actionButton;
	NSLayoutConstraint* _codeFieldBottomConstraint;
	id<HSSetupStepDelegate> _delegate;

}

@property (nonatomic,retain) UIBarButtonItem * cameraButton;                              //@synthesize cameraButton=_cameraButton - In the implementation block
@property (nonatomic,retain) HSSetupCodeView * setupCodeView;                             //@synthesize setupCodeView=_setupCodeView - In the implementation block
@property (nonatomic,retain) HSSetupCodeField * codeField;                                //@synthesize codeField=_codeField - In the implementation block
@property (nonatomic,retain) UIButton * actionButton;                                     //@synthesize actionButton=_actionButton - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * codeFieldBottomConstraint;              //@synthesize codeFieldBottomConstraint=_codeFieldBottomConstraint - In the implementation block
@property (assign,nonatomic,__weak) id<HSSetupStepDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char dismissOnFailure;                                       //@synthesize dismissOnFailure=_dismissOnFailure - In the implementation block
@property (assign,nonatomic) char codeFieldIsResponder;                                   //@synthesize codeFieldIsResponder=_codeFieldIsResponder - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)showCameraScanUI:(id)arg1 ;
-(void)_bringUpCodeField;
-(char)codeFieldIsResponder;
-(HSSetupCodeField *)codeField;
-(void)setCodeFieldIsResponder:(char)arg1 ;
-(NSLayoutConstraint *)codeFieldBottomConstraint;
-(void)reenterCode:(id)arg1 ;
-(HSSetupCodeView *)setupCodeView;
-(UIBarButtonItem *)cameraButton;
-(void)pair:(id)arg1 ;
-(void)setupDidFailWithError:(id)arg1 ;
-(void)setDismissOnFailure:(char)arg1 ;
-(void)_configureEnterCodeAgainButton;
-(void)_configureCloseButton;
-(char)dismissOnFailure;
-(void)setupCodeFieldDidBecomeComplete:(id)arg1 ;
-(void)setupCodeFieldDidBecomeIncomplete:(id)arg1 ;
-(void)setupCodeFieldDidReturn:(id)arg1 ;
-(void)setupDidSucceed;
-(void)setupDidDisconnect;
-(void)setupDidBackground;
-(void)setCameraButton:(UIBarButtonItem *)arg1 ;
-(void)setSetupCodeView:(HSSetupCodeView *)arg1 ;
-(void)setCodeField:(HSSetupCodeField *)arg1 ;
-(void)setCodeFieldBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(UIButton *)actionButton;
-(void)setDelegate:(id<HSSetupStepDelegate>)arg1 ;
-(id<HSSetupStepDelegate>)delegate;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(char)arg1 ;
-(void)_keyboardWillShow:(id)arg1 ;
-(void)_keyboardWillHide:(id)arg1 ;
-(void)_prepareConstraints;
-(void)updateUI;
-(void)setActionButton:(UIButton *)arg1 ;
-(void)cancel:(id)arg1 ;
@end
