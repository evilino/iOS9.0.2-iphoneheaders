/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <FrontBoardServices/FBSSceneClientSettings.h>
#import <UIKit/UIApplicationSceneClientSettings.h>
@class NSString;


@protocol UIApplicationSceneClientSettings <NSObject>
@property (nonatomic,readonly) int statusBarStyle; 
@property (nonatomic,readonly) char statusBarHidden; 
@property (nonatomic,readonly) unsigned statusBarContextID; 
@property (nonatomic,readonly) int defaultStatusBarStyle; 
@property (nonatomic,readonly) char defaultStatusBarHidden; 
@property (nonatomic,copy,readonly) NSString * defaultPNGName; 
@property (nonatomic,readonly) double defaultPNGExpirationTime; 
@property (nonatomic,readonly) int compatibilityMode; 
@property (nonatomic,readonly) char deviceOrientationEventsEnabled; 
@property (nonatomic,readonly) char interfaceOrientationChangesDisabled; 
@property (nonatomic,readonly) int interfaceOrientation; 
@property (nonatomic,readonly) unsigned supportedInterfaceOrientations; 
@property (nonatomic,readonly) char idleTimerDisabled; 
@property (nonatomic,readonly) unsigned proximityDetectionModes; 
@property (nonatomic,readonly) int controlCenterRevealMode; 
@property (nonatomic,readonly) int notificationCenterRevealMode; 
@property (nonatomic,readonly) UIEdgeInsets primaryWindowOverlayInsets; 
@property (nonatomic,readonly) int backgroundStyle; 
@property (nonatomic,readonly) char idleModeVisualEffectsEnabled; 
@required
-(int)interfaceOrientation;
-(char)statusBarHidden;
-(int)statusBarStyle;
-(int)backgroundStyle;
-(unsigned)supportedInterfaceOrientations;
-(unsigned)proximityDetectionModes;
-(int)compatibilityMode;
-(NSString *)defaultPNGName;
-(char)deviceOrientationEventsEnabled;
-(unsigned)statusBarContextID;
-(int)defaultStatusBarStyle;
-(char)defaultStatusBarHidden;
-(double)defaultPNGExpirationTime;
-(char)interfaceOrientationChangesDisabled;
-(char)idleTimerDisabled;
-(int)controlCenterRevealMode;
-(int)notificationCenterRevealMode;
-(UIEdgeInsets)primaryWindowOverlayInsets;
-(char)idleModeVisualEffectsEnabled;

@end


@class NSString;

@interface UIApplicationSceneClientSettings : FBSSceneClientSettings <UIApplicationSceneClientSettings>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int statusBarStyle; 
@property (nonatomic,readonly) char statusBarHidden; 
@property (nonatomic,readonly) unsigned statusBarContextID; 
@property (nonatomic,readonly) int defaultStatusBarStyle; 
@property (nonatomic,readonly) char defaultStatusBarHidden; 
@property (nonatomic,copy,readonly) NSString * defaultPNGName; 
@property (nonatomic,readonly) double defaultPNGExpirationTime; 
@property (nonatomic,readonly) int compatibilityMode; 
@property (nonatomic,readonly) char deviceOrientationEventsEnabled; 
@property (nonatomic,readonly) char interfaceOrientationChangesDisabled; 
@property (nonatomic,readonly) int interfaceOrientation; 
@property (nonatomic,readonly) unsigned supportedInterfaceOrientations; 
@property (nonatomic,readonly) char idleTimerDisabled; 
@property (nonatomic,readonly) unsigned proximityDetectionModes; 
@property (nonatomic,readonly) int controlCenterRevealMode; 
@property (nonatomic,readonly) int notificationCenterRevealMode; 
@property (nonatomic,readonly) UIEdgeInsets primaryWindowOverlayInsets; 
@property (nonatomic,readonly) int backgroundStyle; 
@property (nonatomic,readonly) char idleModeVisualEffectsEnabled; 
-(int)interfaceOrientation;
-(char)isUISubclass;
-(char)statusBarHidden;
-(int)statusBarStyle;
-(int)backgroundStyle;
-(unsigned)supportedInterfaceOrientations;
-(unsigned)proximityDetectionModes;
-(int)compatibilityMode;
-(NSString *)defaultPNGName;
-(id)keyDescriptionForSetting:(unsigned)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)valueDescriptionForFlag:(int)arg1 object:(id)arg2 ofSetting:(unsigned)arg3 ;
-(char)deviceOrientationEventsEnabled;
-(unsigned)statusBarContextID;
-(int)defaultStatusBarStyle;
-(char)defaultStatusBarHidden;
-(double)defaultPNGExpirationTime;
-(char)interfaceOrientationChangesDisabled;
-(char)idleTimerDisabled;
-(int)controlCenterRevealMode;
-(int)notificationCenterRevealMode;
-(UIEdgeInsets)primaryWindowOverlayInsets;
-(char)idleModeVisualEffectsEnabled;
-(id)keyDescriptionForOtherSetting:(unsigned)arg1 ;
-(id)valueDescriptionForFlag:(int)arg1 object:(id)arg2 ofOtherSetting:(unsigned)arg3 ;
@end
