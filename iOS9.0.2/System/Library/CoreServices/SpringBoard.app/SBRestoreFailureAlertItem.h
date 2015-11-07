/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:28 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardUI/SBAlertItem.h>

@interface SBRestoreFailureAlertItem : SBAlertItem
-(void)_rebootNow;
-(void)restartSystemEvent;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(char)allowMenuButtonDismissal;
-(void)performUnlockAction;
-(void)configure:(char)arg1 requirePasscodeForActions:(char)arg2 ;
-(char)shouldShowInLockScreen;
-(char)forcesModalAlertAppearance;
-(double)autoDismissInterval;
-(char)allowInSetup;
@end
