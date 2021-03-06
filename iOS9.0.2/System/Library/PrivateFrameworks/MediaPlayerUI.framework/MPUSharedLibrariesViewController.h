/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:17 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class _MPUSharedLibrariesViewController, UINavigationController;

@interface MPUSharedLibrariesViewController : UIViewController {

	_MPUSharedLibrariesViewController* _sharedLibariesViewController;
	UINavigationController* _navigationController;
	char _showsCancelButton;

}

@property (assign,nonatomic) char showsCancelButton;              //@synthesize showsCancelButton=_showsCancelButton - In the implementation block
@property (assign,nonatomic) char showsLocalLibrary; 
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setShowsCancelButton:(char)arg1 ;
-(char)showsCancelButton;
-(void)presentSharedLibrariesViewController:(char)arg1 ;
-(void)setShowsLocalLibrary:(char)arg1 ;
-(char)showsLocalLibrary;
-(void)dismissSharedLibrariesViewController:(char)arg1 ;
@end

