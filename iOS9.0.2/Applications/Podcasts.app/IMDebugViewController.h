/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:56 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/MFMailComposeViewControllerDelegate.h>

@class UIImage, UIImageView, UIButton, NSString;

@interface IMDebugViewController : UIViewController <MFMailComposeViewControllerDelegate> {

	UIImage* _screenShotImage;
	UIImage* _screenShotPreviewImage;
	UIImageView* _screenShotImageView;
	UIButton* _emailButton;

}

@property (nonatomic,retain) UIImage * screenShotImage;                      //@synthesize screenShotImage=_screenShotImage - In the implementation block
@property (nonatomic,retain) UIImage * screenShotPreviewImage;               //@synthesize screenShotPreviewImage=_screenShotPreviewImage - In the implementation block
@property (nonatomic,retain) UIImageView * screenShotImageView;              //@synthesize screenShotImageView=_screenShotImageView - In the implementation block
@property (nonatomic,retain) UIButton * emailButton;                         //@synthesize emailButton=_emailButton - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)emailData;
-(void)setEmailButton:(UIButton *)arg1 ;
-(UIImage *)screenShotPreviewImage;
-(void)setScreenShotImageView:(UIImageView *)arg1 ;
-(UIImageView *)screenShotImageView;
-(UIButton *)emailButton;
-(void)setScreenShotPreviewImage:(UIImage *)arg1 ;
-(UIImage *)screenShotImage;
-(void)setScreenShotImage:(UIImage *)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)dismiss;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3 ;
@end

