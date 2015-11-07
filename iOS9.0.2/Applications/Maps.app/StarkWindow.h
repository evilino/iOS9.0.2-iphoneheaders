/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:32 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIWindow.h>

@class StarkDisplayController;

@interface StarkWindow : UIWindow {

	StarkDisplayController* _owningStarkController;

}

@property (assign,nonatomic,__weak) StarkDisplayController * owningStarkController;              //@synthesize owningStarkController=_owningStarkController - In the implementation block
-(void)setOwningStarkController:(StarkDisplayController *)arg1 ;
-(char)_isClippedByScreenJail;
-(StarkDisplayController *)owningStarkController;
-(void)sendEvent:(id)arg1 ;
-(char)_isConstrainedByScreenJail;
-(int)interactionModel;
@end
