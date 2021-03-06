/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:04 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIImageView, UILabel, UIActivityIndicatorView;

@interface HLPHelpLoadingView : UIView {

	UIImageView* _errorImageView;
	UILabel* _errorTitleLabel;
	UILabel* _errorMessageLabel;
	UIActivityIndicatorView* _activityIndicatorView;

}

@property (nonatomic,retain) UIActivityIndicatorView * activityIndicatorView;              //@synthesize activityIndicatorView=_activityIndicatorView - In the implementation block
-(UIActivityIndicatorView *)activityIndicatorView;
-(void)setActivityIndicatorView:(UIActivityIndicatorView *)arg1 ;
-(id)init;
-(void)showActivityIndicator:(char)arg1 ;
-(void)showNoConnectionErrorMessage;
-(void)showDefaultErrorMessage;
-(void)removeErrorView;
-(void)showErrorWithTitle:(id)arg1 message:(id)arg2 ;
@end

