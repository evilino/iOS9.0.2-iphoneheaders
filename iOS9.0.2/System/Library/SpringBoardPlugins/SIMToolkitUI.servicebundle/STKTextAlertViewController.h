/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:49 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/SpringBoardPlugins/SIMToolkitUI.servicebundle/SIMToolkitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SIMToolkitUI/STKBaseAlertViewController.h>

@class UITextView;

@interface STKTextAlertViewController : STKBaseAlertViewController {

	UITextView* _textView;

}
-(void)dealloc;
-(char)navigationBar:(id)arg1 shouldPopItem:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)dismiss;
-(void)dismiss:(id)arg1 ;
-(id)alertText;
-(void)accept:(id)arg1 ;
-(id)newTopBar;
-(id)newBottomBar;
-(void)_adjustTextFrame;
-(void)rightNavigationButtonPressed;
-(void)leftNavigationButtonPressed;
@end

