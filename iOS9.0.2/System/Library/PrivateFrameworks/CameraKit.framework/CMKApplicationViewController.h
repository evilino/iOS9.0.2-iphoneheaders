/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <CameraKit/CMKCameraViewController.h>
#import <libobjc.A.dylib/CMKCameraRollObserver.h>
#import <libobjc.A.dylib/PLPhotoBrowserControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>

@protocol PLApplicationCameraViewControllerDelegate, NSObject;
@class NSDictionary, CMKKeepDaemonAliveAssertion, UIViewController, UIView, NSString;

@interface CMKApplicationViewController : CMKCameraViewController <CMKCameraRollObserver, PLPhotoBrowserControllerDelegate, UINavigationControllerDelegate> {

	/*^block*/id _previewButtonAction;
	/*^block*/id _doneButtonAction;
	NSDictionary* _configuration;
	id<PLApplicationCameraViewControllerDelegate> _delegate;
	char _usesSessionAlbum;
	double _sessionStartTime;
	CMKKeepDaemonAliveAssertion* _keepDaemonAliveAssertion;
	char _isReadyToTest;
	int _testPictureCounter;
	int _testPicturesReceivedCounter;
	double _testPictureRepeatDelay;
	char __shouldShowCameraRoll;
	char __dismissingCameraRoll;
	char __dismissingCameraRollForSuspension;
	char __shouldRetryDismissal;
	char __hasLockedSinceLastConfigurationChange;
	char __didApplyConfigurationToCameraView;
	UIViewController* __cameraRollViewController;
	UIView* __rootContainerView;
	UIView* __autorotationCorrectionView;
	int __lockToResetToken;
	id<NSObject> __cameraRollNotificationToken;

}

@property (nonatomic,copy) id previewButtonAction;                                                                                                                           //@synthesize previewButtonAction=_previewButtonAction - In the implementation block
@property (assign,nonatomic) id<PLApplicationCameraViewControllerDelegate> delegate;                                                                                         //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int testPictureCounter;                                                                                                                         //@synthesize testPictureCounter=_testPictureCounter - In the implementation block
@property (assign,nonatomic) double testPictureRepeatDelay;                                                                                                                  //@synthesize testPictureRepeatDelay=_testPictureRepeatDelay - In the implementation block
@property (assign,setter=_setShouldShowCameraRoll:,nonatomic) char _shouldShowCameraRoll;                                                                                    //@synthesize _shouldShowCameraRoll=__shouldShowCameraRoll - In the implementation block
@property (assign,setter=_setDismissingCameraRoll:,getter=_isDismissingCameraRoll,nonatomic) char _dismissingCameraRoll;                                                     //@synthesize _dismissingCameraRoll=__dismissingCameraRoll - In the implementation block
@property (assign,setter=_setDismissingCameraRollForSuspension:,getter=_isDismissingCameraRollForSuspension,nonatomic) char _dismissingCameraRollForSuspension;              //@synthesize _dismissingCameraRollForSuspension=__dismissingCameraRollForSuspension - In the implementation block
@property (nonatomic,readonly) char _shouldRetryDismissal;                                                                                                                   //@synthesize _shouldRetryDismissal=__shouldRetryDismissal - In the implementation block
@property (nonatomic,readonly) UIViewController * _cameraRollViewController;                                                                                                 //@synthesize _cameraRollViewController=__cameraRollViewController - In the implementation block
@property (assign,setter=_setHasLockedSinceLastConfigurationChange:,nonatomic) char _hasLockedSinceLastConfigurationChange;                                                  //@synthesize _hasLockedSinceLastConfigurationChange=__hasLockedSinceLastConfigurationChange - In the implementation block
@property (nonatomic,readonly) UIView * _rootContainerView;                                                                                                                  //@synthesize _rootContainerView=__rootContainerView - In the implementation block
@property (nonatomic,readonly) UIView * _autorotationCorrectionView;                                                                                                         //@synthesize _autorotationCorrectionView=__autorotationCorrectionView - In the implementation block
@property (nonatomic,readonly) int _lockToResetToken;                                                                                                                        //@synthesize _lockToResetToken=__lockToResetToken - In the implementation block
@property (assign,nonatomic) char _didApplyConfigurationToCameraView;                                                                                                        //@synthesize _didApplyConfigurationToCameraView=__didApplyConfigurationToCameraView - In the implementation block
@property (nonatomic,readonly) id<NSObject> _cameraRollNotificationToken;                                                                                                    //@synthesize _cameraRollNotificationToken=__cameraRollNotificationToken - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dismissCameraRoll:(id)arg1 ;
-(void)photoLibraryDidChange:(id)arg1 ;
-(void)photoBrowserControllerWillBeginPaging:(id)arg1 ;
-(void)photoBrowserControllerDidEndPaging:(id)arg1 ;
-(void)setDelegate:(id<PLApplicationCameraViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<PLApplicationCameraViewControllerDelegate>)delegate;
-(void)applicationWillSuspend;
-(char)prefersStatusBarHidden;
-(unsigned)supportedInterfaceOrientations;
-(void)prepareForDefaultImageSnapshot;
-(void)applicationDidResume;
-(char)shouldAutorotate;
-(void)loadView;
-(char)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)_getRotationContentSettings:(SCD_Struct_CM4*)arg1 ;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(char)arg3 ;
-(void)takePicture;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(id)initWithSessionID:(id)arg1 usesCameraLocationBundleID:(char)arg2 startPreviewImmediately:(char)arg3 ;
-(void)_kickoffCameraControllerPreview;
-(void)_cameraRollReload:(id)arg1 ;
-(void)_setupLockToResetNotifications;
-(void)_teardownLockToResetNotifications;
-(void)setPreviewButtonAction:(id)arg1 ;
-(void)_applyConfiguration;
-(void)_setHasLockedSinceLastConfigurationChange:(char)arg1 ;
-(void)_saveConfiguration;
-(void)_updateCameraRollSession;
-(void)viewWillShowForLaunch;
-(void)prepareForSuspension;
-(void)presentCameraRollAboveCameraView:(id)arg1 ;
-(void)_setShouldShowCameraRoll:(char)arg1 ;
-(void)animateBlurForSuspension;
-(void)dismissCameraRollAnimated:(char)arg1 forSuspension:(char)arg2 ;
-(char)_shouldShowCameraRoll;
-(id)newAlbumNavigationControllerForCameraRoll:(id)arg1 ;
-(void)_updatePhysicalButtonCapturedEnabled;
-(void)stopCameraPreviewAnimated:(char)arg1 ;
-(void)startPictureTest;
-(void)_startPictureTestAfterSeconds:(double)arg1 ;
-(char)_shouldResetMode:(id)arg1 ;
-(void)_defaultCameraDevice:(id*)arg1 cameraMode:(id*)arg2 ;
-(id)_dictionaryFromPackedArray:(id)arg1 ;
-(char)showingCameraPreview;
-(char)_hasLockedSinceLastConfigurationChange;
-(char)_shouldResumeTorch;
-(id)_packedArrayFromDictionary:(id)arg1 ;
-(void)_refreshCameraUIForAlbumChange;
-(void)prepareAlbumNavigationControllerForReuse:(id)arg1 withCameraRoll:(id)arg2 ;
-(void)reloadAlbumNavigationController:(id)arg1 withCameraRoll:(id)arg2 ;
-(UIViewController *)_cameraRollViewController;
-(void)startCameraPreview;
-(void)_didPerformPhysicalCapture:(id)arg1 ;
-(id)_currentPhotoBrowser;
-(id)initWithSessionID:(id)arg1 startPreviewImmediately:(char)arg2 ;
-(void)dismissCameraRollForCameraView:(id)arg1 ;
-(void)cameraViewFinishedSuspensionBlur:(id)arg1 ;
-(void)cameraViewDidFinishUnblurringForPreview:(id)arg1 ;
-(void)testSetHDROn:(char)arg1 ;
-(void)testSetAutofocusDisabled:(char)arg1 ;
-(void)setTestPictureCounter:(int)arg1 ;
-(void)cameraViewFinishedTakingPicture:(id)arg1 ;
-(char)_cameraIsRunning;
-(void)_startCameraPreviewWithPreviewStartedBlock:(/*^block*/id)arg1 ;
-(char)shouldAnimateBlurForSuspension;
-(id)_stringForHDRMode:(int)arg1 ;
-(id)_stringForTimerDuration:(int)arg1 ;
-(void)_makeViewControllersPerformSelector:(SEL)arg1 withNotification:(id)arg2 ;
-(void)preferencesDidChange;
-(void)setUsesSessionAlbum:(char)arg1 ;
-(int)testPictureCounter;
-(double)testPictureRepeatDelay;
-(void)setTestPictureRepeatDelay:(double)arg1 ;
-(id)previewButtonAction;
-(char)_isDismissingCameraRoll;
-(void)_setDismissingCameraRoll:(char)arg1 ;
-(char)_isDismissingCameraRollForSuspension;
-(void)_setDismissingCameraRollForSuspension:(char)arg1 ;
-(char)_shouldRetryDismissal;
-(UIView *)_rootContainerView;
-(UIView *)_autorotationCorrectionView;
-(int)_lockToResetToken;
-(char)_didApplyConfigurationToCameraView;
-(void)set_didApplyConfigurationToCameraView:(char)arg1 ;
-(id<NSObject>)_cameraRollNotificationToken;
-(void)saveCameraConfiguration;
-(void)dismissCameraRollForSuspension;
-(void)startCameraPreviewWithSavedConfiguration;
-(void)stopCameraPreview;
-(void)_createPhysicalCaptureRecognizerIfNecessary;
-(void)_applyAutorotationCorrectingTransformForOrientation:(int)arg1 ;
-(CGAffineTransform)_autorotationCorrectingTransformFromOrientation:(int)arg1 ;
-(void)_previewStarted:(id)arg1 ;
-(void)prepareForDismissal;
-(void)setSessionID:(id)arg1 ;
-(char)cameraViewShouldShowPreviewAfterSelection:(id)arg1 ;
-(void)cameraPreviewWellImageDidChange:(id)arg1 ;
@end

