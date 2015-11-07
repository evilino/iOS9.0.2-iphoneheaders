/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:41 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/MobilePhoneSettings.bundle/MobilePhoneSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobilePhoneSettings/PhoneSettingsListController.h>
#import <libobjc.A.dylib/PHSIMPINUnlockViewControllerDelegate.h>
#import <libobjc.A.dylib/PHSIMPINChangeViewControllerDelegate.h>

@class UINavigationController, PHSIMPINUnlockViewController, PHSIMPINChangeViewController;

@interface PhoneSettingsSIMLockController : PhoneSettingsListController <PHSIMPINUnlockViewControllerDelegate, PHSIMPINChangeViewControllerDelegate> {

	UINavigationController* _unlockPINNavigationController;
	PHSIMPINUnlockViewController* _unlockPINViewController;
	UINavigationController* _changePINNavigationController;
	PHSIMPINChangeViewController* _changePINViewController;

}

@property (retain) UINavigationController * unlockPINNavigationController;              //@synthesize unlockPINNavigationController=_unlockPINNavigationController - In the implementation block
@property (retain) PHSIMPINUnlockViewController * unlockPINViewController;              //@synthesize unlockPINViewController=_unlockPINViewController - In the implementation block
@property (retain) UINavigationController * changePINNavigationController;              //@synthesize changePINNavigationController=_changePINNavigationController - In the implementation block
@property (retain) PHSIMPINChangeViewController * changePINViewController;              //@synthesize changePINViewController=_changePINViewController - In the implementation block
-(void)_applicationSuspended:(id)arg1 ;
-(id)specifiers;
-(void)dealloc;
-(id)init;
-(void)viewWillAppear:(char)arg1 ;
-(void)setChangePINViewController:(PHSIMPINChangeViewController *)arg1 ;
-(PHSIMPINChangeViewController *)changePINViewController;
-(void)PHSIMPINChangeViewControllerCanceled:(id)arg1 ;
-(void)PHSIMPINChangeViewControllerFinishedSuccessfully:(id)arg1 ;
-(void)PHSIMPINChangeViewControllerFailedWithZeroAttemptsRemaining:(id)arg1 ;
-(void)updateCellStates;
-(void)_simLockChanged:(id)arg1 ;
-(void)_simReady:(id)arg1 ;
-(PHSIMPINUnlockViewController *)unlockPINViewController;
-(void)setUnlockPINViewController:(PHSIMPINUnlockViewController *)arg1 ;
-(void)setUnlockPINNavigationController:(UINavigationController *)arg1 ;
-(UINavigationController *)unlockPINNavigationController;
-(void)setChangePINNavigationController:(UINavigationController *)arg1 ;
-(UINavigationController *)changePINNavigationController;
-(id)isSIMLocked:(id)arg1 ;
-(void)_dismissChangeController;
-(void)_dismissUnlockController;
-(void)SIMPINUnlockViewController:(id)arg1 finishedSuccessfullyWithSIMLocked:(char)arg2 ;
-(void)SIMPINUnlockViewControllerCanceled:(id)arg1 ;
-(void)SIMPINUnlockViewControllerFailedWithZeroAttemptsRemaining:(id)arg1 ;
-(void)setIsSIMLocked:(id)arg1 specifier:(id)arg2 ;
-(void)changePIN:(id)arg1 ;
@end
