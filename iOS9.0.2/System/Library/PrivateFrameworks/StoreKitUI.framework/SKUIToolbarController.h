/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:26 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SKUIToolbarControllerDelegate;
@class SKUIToolbarButtonsController, SKUIToolbarViewElement, NSArray;

@interface SKUIToolbarController : NSObject {

	SKUIToolbarButtonsController* _buttonsController;
	SKUIToolbarViewElement* _viewElement;
	NSArray* _toolbarItems;
	id<SKUIToolbarControllerDelegate> _delegate;

}

@property (nonatomic,readonly) SKUIToolbarViewElement * toolbarViewElement;                  //@synthesize viewElement=_viewElement - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIToolbarControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * toolbarItems;                                       //@synthesize toolbarItems=_toolbarItems - In the implementation block
-(void)setDelegate:(id<SKUIToolbarControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<SKUIToolbarControllerDelegate>)delegate;
-(NSArray *)toolbarItems;
-(id)initWithToolbarViewElement:(id)arg1 ;
-(void)detachFromNavigationController:(id)arg1 ;
-(SKUIToolbarViewElement *)toolbarViewElement;
-(void)updateToolbarForNavigationController:(id)arg1 ;
-(id)_barButtonItemWithElement:(id)arg1 ;
-(id)_barButtonItemWithButtonElement:(id)arg1 ;
-(char)toolbarButtonsController:(id)arg1 shouldDispatchEventForButton:(id)arg2 ;
@end
