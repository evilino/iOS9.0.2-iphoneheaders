/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:07 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>

@class SKStarRatingAlertView, NSString;

@interface SKStarRatingAlertViewDelegate : NSObject <UIAlertViewDelegate> {

	SKStarRatingAlertView* _alertView;
	/*^block*/id _completionBlock;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)showAlertView:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)alertViewCancel:(id)arg1 ;
-(void)alertView:(id)arg1 willDismissWithButtonIndex:(int)arg2 ;
-(char)alertViewShouldEnableFirstOtherButton:(id)arg1 ;
@end
