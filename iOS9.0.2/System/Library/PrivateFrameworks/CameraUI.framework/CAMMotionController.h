/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/BKSAccelerometerDelegate.h>

@class BKSAccelerometer, CMMotionManager, NSString;

@interface CAMMotionController : NSObject <BKSAccelerometerDelegate> {

	int _deviceOrientation;
	int _dominantPhysicalButton;
	int __cachedCaptureOrientation;
	BKSAccelerometer* __accelerometer;
	int __numberOfDominantPhysicalButtonObservers;
	CMMotionManager* __physicalButtonMotionManager;

}

@property (nonatomic,readonly) int captureOrientation; 
@property (nonatomic,readonly) int panoramaCaptureOrientation; 
@property (assign,nonatomic) int deviceOrientation;                                                                                         //@synthesize deviceOrientation=_deviceOrientation - In the implementation block
@property (assign,nonatomic) int dominantPhysicalButton;                                                                                    //@synthesize dominantPhysicalButton=_dominantPhysicalButton - In the implementation block
@property (assign,setter=_setCachedCaptureOrientation:,nonatomic) int _cachedCaptureOrientation;                                            //@synthesize _cachedCaptureOrientation=__cachedCaptureOrientation - In the implementation block
@property (setter=_setAccelerometer:,nonatomic,retain) BKSAccelerometer * _accelerometer;                                                   //@synthesize _accelerometer=__accelerometer - In the implementation block
@property (assign,setter=_setNumberOfDominantPhysicalButtonObservers:,nonatomic) int _numberOfDominantPhysicalButtonObservers;              //@synthesize _numberOfDominantPhysicalButtonObservers=__numberOfDominantPhysicalButtonObservers - In the implementation block
@property (nonatomic,readonly) CMMotionManager * _physicalButtonMotionManager;                                                              //@synthesize _physicalButtonMotionManager=__physicalButtonMotionManager - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)accelerometer:(id)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(int)arg6 ;
-(int)deviceOrientation;
-(int)captureOrientation;
-(void)deviceDidChangeOrientation:(id)arg1 ;
-(int)_cachedCaptureOrientation;
-(int)_applyPanoramaTransformToOrientation:(int)arg1 ;
-(void)_setCachedCaptureOrientation:(int)arg1 ;
-(void)_setDeviceOrientation:(int)arg1 ;
-(CMMotionManager *)_physicalButtonMotionManager;
-(int)_numberOfDominantPhysicalButtonObservers;
-(void)_setDominantPhysicalButton:(int)arg1 ;
-(void)_setNumberOfDominantPhysicalButtonObservers:(int)arg1 ;
-(void)_updatePhysicalButtonObservation;
-(void)accelerometer:(id)arg1 didChangeDeviceOrientation:(int)arg2 ;
-(int)panoramaCaptureOrientation;
-(void)beginGeneratingDominantPhysicalButtonNotifications;
-(void)endGeneratingDominantPhysicalButtonNotifications;
-(int)dominantPhysicalButton;
-(BKSAccelerometer *)_accelerometer;
-(void)_setAccelerometer:(id)arg1 ;
@end

