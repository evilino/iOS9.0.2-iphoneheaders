/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:23 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class SCATElementManager, SCATStyleProvider;

@interface SCATElementManagerViewController : UIViewController {

	SCATElementManager* _elementManager;

}

@property (assign,nonatomic) SCATElementManager * elementManager;              //@synthesize elementManager=_elementManager - In the implementation block
@property (nonatomic,readonly) SCATStyleProvider * styleProvider; 
-(void)didPresentWithDisplayContext:(id)arg1 animated:(char)arg2 ;
-(void)didUpdateWithDisplayContext:(id)arg1 animated:(char)arg2 ;
-(void)didDismiss:(char)arg1 ;
-(id)initWithElementManager:(id)arg1 ;
-(void)willPresentWithDisplayContext:(id)arg1 animated:(char)arg2 ;
-(void)presentWithDisplayContext:(id)arg1 animted:(char)arg2 ;
-(void)willDismiss:(char)arg1 ;
-(SCATElementManager *)elementManager;
-(void)setElementManager:(SCATElementManager *)arg1 ;
-(SCATStyleProvider *)styleProvider;
-(void)dealloc;
-(void)dismiss:(char)arg1 ;
@end
