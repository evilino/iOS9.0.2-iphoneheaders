/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:08 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMAVCore/IMSystemMonitorListener.h>

@class IMAVCamera;

@interface IMAVLocalPreviewClient : NSObject <IMSystemMonitorListener> {

	char _supportsPreview;
	char _wantsPreview;
	char _wantsPausedPreview;
	char _wantsUnpausedPreview;

}

@property (nonatomic,readonly) char isPreviewRunning; 
@property (assign,nonatomic) char supportsPreview;                    //@synthesize supportsPreview=_supportsPreview - In the implementation block
@property (assign,nonatomic) unsigned cameraType; 
@property (assign,nonatomic) unsigned cameraOrientation; 
@property (assign,nonatomic) IMAVCamera * localCamera; 
@property (assign,nonatomic) void* localVideoLayer; 
@property (assign,nonatomic) void* localVideoBackLayer; 
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)stopPreview;
-(void)setCameraOrientation:(unsigned)arg1 ;
-(unsigned)cameraOrientation;
-(void)systemApplicationWillEnterForeground;
-(void)systemApplicationDidEnterBackground;
-(void)systemScreenDidPowerUp;
-(void)systemScreenDidPowerDown;
-(id)localScreenAttributesForVideoAttributes:(id)arg1 ;
-(void)setLocalScreenAttributes:(id)arg1 ;
-(char)isPreviewRunning;
-(void)didReceiveErrorFromCamera:(unsigned)arg1 error:(id)arg2 ;
-(void)didReceiveFirstPreviewFrameFromCamera:(unsigned)arg1 ;
-(void)didChangeLocalVideoAttributes:(id)arg1 ;
-(void)didChangeLocalScreenAttributes:(id)arg1 ;
-(void)didStartPreview;
-(void)didPausePreview;
-(void)didStopPreview;
-(void)didReceiveCommError;
-(void)cameraDidBecomeAvailable:(unsigned)arg1 ;
-(void)setLocalCamera:(IMAVCamera *)arg1 ;
-(IMAVCamera *)localCamera;
-(void)setLocalVideoLayer:(void*)arg1 ;
-(void*)localVideoLayer;
-(void*)localVideoBackLayer;
-(void)setLocalVideoBackLayer:(void*)arg1 ;
-(void)_avDaemonConnected;
-(char)_shouldPreviewBeRunning;
-(void)_updatePreviewState;
-(void)unpausePreview;
-(void)beginAnimationToPIP;
-(void)endAnimationToPIP;
-(void)beginAnimationToPreview;
-(void)endAnimationToPreview;
-(char)supportsPreview;
-(void)setSupportsPreview:(char)arg1 ;
-(void)setCameraType:(unsigned)arg1 ;
-(unsigned)cameraType;
-(void)startPreview;
-(void)pausePreview;
@end
