/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:33 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/IMAVControllerDelegate.h>

@protocol TUVideoProxyCallManagerDelegate;
@class NSMutableSet, NSString;

@interface TUVideoProxyCallManager : NSObject <IMAVControllerDelegate> {

	id<TUVideoProxyCallManagerDelegate> _delegate;
	NSMutableSet* _cachedVideoProxyCalls;

}

@property (assign,nonatomic,__weak) id<TUVideoProxyCallManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSMutableSet * cachedVideoProxyCalls;                             //@synthesize cachedVideoProxyCalls=_cachedVideoProxyCalls - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)processUsesLocalPreview;
+(char)isIMAVChatHostProcess;
-(void)setDelegate:(id<TUVideoProxyCallManagerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<TUVideoProxyCallManagerDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(void)postNotificationName:(id)arg1 ;
-(void)setCachedVideoProxyCalls:(NSMutableSet *)arg1 ;
-(void)handleChatCameraErrorNotification:(id)arg1 ;
-(void)handleChatCameraAvailableNotification:(id)arg1 ;
-(void)handleVideoPreviewDidStart:(id)arg1 ;
-(void)handleVideoPreviewFirstFrameArrived:(id)arg1 ;
-(void)handleChatStateChanged:(id)arg1 ;
-(void)handleChatRemoteVideoDidChange:(id)arg1 ;
-(void)handleChatRemoteScreenDidChange:(id)arg1 ;
-(void)handleChatRemotePauseDidChange:(id)arg1 ;
-(void)handleChatVideoQualityDidChange:(id)arg1 ;
-(void)handleChatVideoStalledDidChange:(id)arg1 ;
-(void)handleVideoCallStatusChanged:(id)arg1 ;
-(void)startTrackingCall:(id)arg1 ;
-(void)registerCall:(id)arg1 ;
-(void)stopTrackingCall:(id)arg1 ;
-(NSMutableSet *)cachedVideoProxyCalls;
-(id)callForChat:(id)arg1 ;
-(void)_postVideoNotificationName:(id)arg1 forCall:(id)arg2 userInfo:(id)arg3 ;
-(id)_videoCallUserInfoForUserInfo:(id)arg1 ;
-(void)postNotificationName:(id)arg1 forCall:(id)arg2 userInfo:(id)arg3 ;
-(void)_postVideoNotificationName:(id)arg1 forChatParticipant:(id)arg2 userInfo:(id)arg3 ;
-(void)createdOutgoingIMAVChat:(id)arg1 ;
-(void)filteredIncomingIMAVChat:(id)arg1 ;
@end
