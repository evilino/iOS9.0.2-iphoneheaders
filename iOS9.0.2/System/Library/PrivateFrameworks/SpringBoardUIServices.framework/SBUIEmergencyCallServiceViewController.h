/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:19 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/SBUIEmergencyCallServiceInterface.h>

@class UIColor;

@interface SBUIEmergencyCallServiceViewController : UIViewController <SBUIEmergencyCallServiceInterface> {

	int _backgroundStyle;
	UIColor* _tintColor;

}

@property (assign,nonatomic) int backgroundStyle;                       //@synthesize backgroundStyle=_backgroundStyle - In the implementation block
@property (nonatomic,retain,readonly) UIColor * tintColor;              //@synthesize tintColor=_tintColor - In the implementation block
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(void)dealloc;
-(int)backgroundStyle;
-(void)setBackgroundStyle:(int)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(UIColor *)tintColor;
-(void)backgroundStyle:(/*^block*/id)arg1 ;
-(void)noteTintColorForBackgroundStyleChanged:(id)arg1 ;
-(void)noteViewMovedOffscreenTemporarily;
@end

