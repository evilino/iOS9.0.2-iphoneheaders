/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:12 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SiriUIAudioRoutePickerControllerDelegate;
@class NSString, UIWindow, SiriRoutePickerAlertController;

@interface SiriUIAudioRoutePickerController : NSObject {

	id<SiriUIAudioRoutePickerControllerDelegate> _delegate;
	NSString* _audioCategory;
	UIWindow* _window;
	char _hasRoutesToPick;
	char _bluetoothIsPicked;
	SiriRoutePickerAlertController* _pickerAlertController;

}

@property (assign,nonatomic,__weak) id<SiriUIAudioRoutePickerControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SiriRoutePickerAlertController * pickerAlertController;                    //@synthesize pickerAlertController=_pickerAlertController - In the implementation block
+(id)_nameForRouteInfo:(id)arg1 isSelected:(char*)arg2 isBluetooth:(char*)arg3 isOverride:(char*)arg4 audioRouteName:(id*)arg5 ;
-(void)setDelegate:(id<SiriUIAudioRoutePickerControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<SiriUIAudioRoutePickerControllerDelegate>)delegate;
-(void)cancelPickerAnimated:(char)arg1 ;
-(id)initWithCategory:(id)arg1 delegate:(id)arg2 ;
-(void)showPickerFromViewController:(id)arg1 animated:(char)arg2 ;
-(void)refreshRoutes;
-(char)hasRoutesToPick;
-(char)bluetoothIsPicked;
-(char)isShowingPicker;
-(void)_pickableRoutesChanged:(id)arg1 ;
-(void)_routeChanged:(id)arg1 ;
-(void)_showAlertControllerFromViewController:(id)arg1 animated:(char)arg2 ;
-(void)_selectRouteWithInfo:(id)arg1 ;
-(void)_dismissAlertController:(char)arg1 ;
-(SiriRoutePickerAlertController *)pickerAlertController;
-(void)_fetchPickableRoutesForCategory:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_removeWindow;
-(void)setPickerAlertController:(SiriRoutePickerAlertController *)arg1 ;
@end
