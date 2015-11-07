/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:36 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBUIMainScreenAnimationController.h>

@class SBLockScreenViewControllerBase, SBLockScreenClippedSlideController, SBSceneLayoutAnimationWrapperView, NSMutableArray;

@interface SBUILockscreenSlideAnimationController : SBUIMainScreenAnimationController {

	int _transitionStyle;
	SBLockScreenViewControllerBase* _lockscreenViewController;
	SBLockScreenClippedSlideController* _lockscreenClippedSlideController;
	SBSceneLayoutAnimationWrapperView* _animationWrapperView;
	NSMutableArray* _appsNeedingContextHosting;
	double _animationDuration;
	char _fromCC;
	char _fromNC;
	char _finishedSliding;
	char _waitForAppActivationForContextHostView;

}
-(id)initWithTransitionContextProvider:(id)arg1 ;
-(void)_prepareAnimation;
-(void)_cleanupAnimation;
-(id)_animationProgressDependencies;
-(void)_applicationDependencyStateChanged;
-(void)_maybeReportAnimationFinished;
-(char)_waitsForApplicationActivationIfNecessary;
-(void)_willSetupStartDependencies;
-(void)_setup:(id)arg1 transitionStyle:(int)arg2 ;
-(void)_finishedSliding;
-(char)_areApplicationLaunchesFinished;
-(void)_startAnimation;
-(void)dealloc;
-(id)description;
@end
