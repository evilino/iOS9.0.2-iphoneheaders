/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBUIStarkZoomUpAppFromHomeAnimation.h>

@class NSNumber;

@interface SBUIStarkZoomUpNowPlayingFromHomeAnimation : SBUIStarkZoomUpAppFromHomeAnimation {

	NSNumber* _activated;

}
-(void)_cleanupAnimation;
-(id)initWithActivatingApp:(id)arg1 alertImpersonator:(id)arg2 starkScreenController:(id)arg3 ;
-(void)_setupStartDependencies;
-(id)_viewToAnimate;
-(char)_waitsForApplicationActivationIfNecessary;
-(void)_startAnimation;
-(void)dealloc;
@end

