/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:24 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/InCallService.app/InCallService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TPSuperBottomBarDelegateProtocol <NSObject>
@optional
-(void)bottomBarActionPerformed:(int)arg1 withCompletionState:(int)arg2 fromBar:(id)arg3;
-(char)shouldShowHardPauseNumbers;
-(char)shouldShowActionTypeCameraFlip;
-(char)shouldShowActionTypeSendToVoicemail;
-(char)shouldShowActionTypeAudioRoute;
-(void)sliderActionFromBar:(id)arg1 slidToProportion:(float)arg2;
-(id)customizedTitleForItemInBar:(id)arg1 withActionType:(int)arg2;

@end
