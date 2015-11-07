/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:35 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SpringBoard/SpringBoard-Structs.h>
@class NSHashTable, NSMutableOrderedSet, NSMutableDictionary, NSPointerArray, NSMutableSet, XBStatusBarSettings;

@interface SBAppStatusBarManager : NSObject {

	NSHashTable* _disableAlphaChangeAssertions;
	NSHashTable* _disableUserInteractionChangeAssertions;
	NSMutableOrderedSet* _windowLevelOverrideReasons;
	NSMutableDictionary* _windowLevelOverrideMap;
	float _defaultWindowLevel;
	NSMutableDictionary* _edgeInsetsDictionary;
	NSPointerArray* _statusBarSettingsAssertionsByLevel[9];
	NSMutableSet* _activeLayoutLayers;
	XBStatusBarSettings* _currentStatusBarSettings;

}

@property (nonatomic,readonly) UIEdgeInsets statusBarEdgeInsets; 
@property (nonatomic,readonly) unsigned topmostActiveLayoutLayer; 
+(id)sharedInstance;
-(UIEdgeInsets)statusBarEdgeInsets;
-(void)setStatusBarEdgeInsets:(UIEdgeInsets)arg1 forLayoutLayer:(unsigned)arg2 ;
-(void)removeActiveLayoutLayer:(unsigned)arg1 ;
-(void)addActiveLayoutLayer:(unsigned)arg1 ;
-(void)_addStatusBarSettingsAssertion:(id)arg1 ;
-(void)_removeStatusBarSettingsAssertion:(id)arg1 ;
-(void)setStatusBarAlpha:(float)arg1 ;
-(void)willTransitionToSpringBoard;
-(void)didTransitionFromSpringBoard;
-(void)_addDisableAppStatusBarAlphaChangesAssertion:(id)arg1 ;
-(void)_removeDisableAppStatusBarAlphaChangesAssertion:(id)arg1 ;
-(void)_addDisableAppStatusBarUserInteractionChangesAssertion:(id)arg1 ;
-(void)_removeDisableAppStatusBarUserInteractionChangesAssertion:(id)arg1 ;
-(void)_cleanUpAllStatusBarSettingsAssertions;
-(void)_evaluateSettings;
-(void)hideStatusBar;
-(id)_descriptionForPropertyWithAssertions:(id)arg1 ;
-(void)_setStatusBarValueForPropertyWithAssertions:(id)arg1 setter:(/*^block*/id)arg2 ;
-(void)_updateWindowLevel;
-(void)_addAssertion:(id)arg1 toAssertions:(id)arg2 ;
-(void)_removeAssertion:(id)arg1 fromAssertions:(id)arg2 ;
-(void)_applyEdgeInsetsToStatusBar;
-(unsigned)topmostActiveLayoutLayer;
-(void)setStatusBarUserInteractionEnabled:(char)arg1 ;
-(char)isStatusBarUserInteractionEnabled;
-(void)setWindowLevel:(float)arg1 forOverrideReason:(id)arg2 ;
-(void)removeWindowLevelOverrideReason:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(char)isStatusBarHidden;
-(void)setDefaultWindowLevel:(float)arg1 ;
-(void)showStatusBar;
@end
