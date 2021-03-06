/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:10 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/ABContentControllerProtocol.h>

@class UIView;

@interface ABContentController : NSObject <ABContentControllerProtocol> {

	void* _addressBook;
	id _contentControllerDelegate;
	UIView* _contentLayer;

}

@property (assign,nonatomic) void* addressBook; 
-(id)initWithContentControllerDelegate:(id)arg1 addressBook:(void*)arg2 ;
-(void)back:(char)arg1 save:(char)arg2 ;
-(id)contentControllerDelegate;
-(void)setContentControllerDelegate:(id)arg1 ;
-(void)cleanUpContentLayer;
-(char)contentViewIsVisible;
-(void)preloadController;
-(void)setAddressBook:(void*)arg1 ;
-(void)dealloc;
-(id)init;
-(void)reload;
-(id)contentView;
-(void)displayScrollerIndicators;
-(void*)addressBook;
@end

