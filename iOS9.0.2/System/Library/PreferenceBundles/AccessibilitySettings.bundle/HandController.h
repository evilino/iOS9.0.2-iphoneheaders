/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:07:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccessibilitySettings/CustomGestureController.h>

@class SCATController, NSMutableArray;

@interface HandController : CustomGestureController {

	SCATController* _scannerController;
	NSMutableArray* _hardwareSpecs;

}
-(void)setTouchSpeed:(id)arg1 ;
-(id)touchSpeed;
-(void)setHandEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)handEnabled:(id)arg1 ;
-(id)swaggleOpensMenu;
-(void)setSwaggleOpensMenu:(id)arg1 specifier:(id)arg2 ;
-(id)alwaysShowMenuEnabled:(id)arg1 ;
-(void)_handleSettingsChange;
-(SEL)customGesturesGetter;
-(SEL)customGesturesSetter;
-(id)customGesturesTitle;
-(id)customGesturesExplanatoryText;
-(unsigned)maximumNumberOfCustomGestures;
-(void)_handleAssistiveTouchToggled:(id)arg1 ;
-(void)_updateAssistiveTouchControlItems:(id)arg1 reload:(char)arg2 ;
-(void)_handleAssistiveTouchHardwareToggled:(id)arg1 ;
-(void)_orientationChange:(id)arg1 ;
-(void)setAlwaysShowMenuEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)specifiers;
-(void)dealloc;
-(id)init;
-(char)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
@end
