/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:13:01 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/StoreKitUIService.app/StoreKitUIService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUAccountViewController.h>

@class ServiceAccountPageViewController;

@interface ServiceSUAccountViewController : SUAccountViewController {

	ServiceAccountPageViewController* _hostedViewController;

}

@property (assign,nonatomic,__weak) ServiceAccountPageViewController * hostedViewController;              //@synthesize hostedViewController=_hostedViewController - In the implementation block
-(ServiceAccountPageViewController *)hostedViewController;
-(void)setHostedViewController:(ServiceAccountPageViewController *)arg1 ;
-(void)dismissViewControllerAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)dismissAnimated:(char)arg1 ;
@end

