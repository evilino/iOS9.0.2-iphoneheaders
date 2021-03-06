/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:25 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreMediaStream/MSDaemon.h>

@protocol MSMediaStreamDaemonDelegate;
@class NSCountedSet;

@interface MSMediaStreamDaemon : MSDaemon {

	id<MSMediaStreamDaemonDelegate> _delegate;
	NSCountedSet* _retainedObjects;

}

@property (assign,nonatomic) id<MSMediaStreamDaemonDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<MSMediaStreamDaemonDelegate>)arg1 ;
-(id)init;
-(id<MSMediaStreamDaemonDelegate>)delegate;
-(void)stop;
-(void)start;
-(id)nextActivityDate;
-(char)isInRetryState;
-(id)_boundPublisherForPersonID:(id)arg1 ;
-(id)_boundSubscriberForPersonID:(id)arg1 ;
-(id)_boundDeleterForPersonID:(id)arg1 ;
-(void)stopAllActivities;
-(void)didReceivePushNotificationForPersonID:(id)arg1 ;
-(id)_boundSharingManagerForPersonID:(id)arg1 ;
-(id)sharesForPersonID:(id)arg1 ;
-(char)personIDIsAcceptingInvitations:(id)arg1 ;
-(id)_findShareWithPersonID:(id)arg1 inArray:(id)arg2 ;
-(void)_removeShareWithPersonID:(id)arg1 inArray:(id)arg2 ;
-(id)_boundServerSideConfigManagerForPersonID:(id)arg1 ;
-(void)refreshServerSideConfigurationForPersonID:(id)arg1 ;
-(char)hasOutstandingActivity;
-(char)personIDHasOutstandingPublications:(id)arg1 ;
-(void)didIdle;
-(void)didUnidle;
-(void)reenqueueQuarantinedActivitiesWithReason:(id)arg1 ;
-(void)abortAllActivityForPersonID:(id)arg1 ;
-(char)enqueueAssetCollection:(id)arg1 personID:(id)arg2 outError:(id*)arg3 ;
-(void)pollForSubscriptionUpdatesTriggeredByPushNotificationForPersonID:(id)arg1 ;
-(void)resetSubscriberSyncForPersonID:(id)arg1 ;
-(void)computeHashForAsset:(id)arg1 personID:(id)arg2 ;
-(id)subscribedStreamsForPersonID:(id)arg1 ;
-(id)ownSubscribedStreamForPersonID:(id)arg1 ;
-(void)_setShares:(id)arg1 forPersonID:(id)arg2 ;
-(id)invitationFromPushNotificationUserInfo:(id)arg1 outSourcePersonID:(id*)arg2 outTargetPersonID:(id*)arg3 ;
-(id)invitationStringsFromInvitation:(id)arg1 targetPersonID:(id)arg2 ;
-(void)sendInvitations:(id)arg1 forPersonID:(id)arg2 ;
-(void)respondToInvitation:(id)arg1 forPersonID:(id)arg2 accept:(char)arg3 ;
-(void)modifyShare:(id)arg1 forPersonID:(id)arg2 ;
-(void)removeShare:(id)arg1 forPersonID:(id)arg2 ;
-(void)refreshShareStatesForPersonID:(id)arg1 ;
-(id)notificationStringsForShareStateTransitionOldShares:(id)arg1 newShares:(id)arg2 ;
-(void)didReceiveServerSideConfigurationVersion:(id)arg1 forPersonID:(id)arg2 ;
-(void)didReceiveNewServerSideConfigurationForPersonID:(id)arg1 ;
-(void)deleteAssetCollections:(id)arg1 forPersonID:(id)arg2 ;
-(void)didReceiveNewShareState:(id)arg1 oldShareState:(id)arg2 forPersonID:(id)arg3 ;
-(void)showInvitationFailureAlertForPersonID:(id)arg1 failures:(id)arg2 ;
-(void)didReceiveAuthenticationFailureForPersonID:(id)arg1 ;
-(void)didReceiveAuthenticationSuccessForPersonID:(id)arg1 ;
-(void)didExceedPublishQuotaForPersonID:(id)arg1 retryDate:(id)arg2 ;
-(void)didReceiveGlobalResetSyncForPersonID:(id)arg1 ;
-(char)mayDownloadPersonID:(id)arg1 ;
-(char)dequeueAssetCollectionWithGUIDs:(id)arg1 personID:(id)arg2 outError:(id*)arg3 ;
-(void)pollForSubscriptionUpdatesForPersonID:(id)arg1 ;
-(id)serverSideConfigurationForPersonID:(id)arg1 ;
-(void)forgetPersonID:(id)arg1 ;
-(void)retryOutstandingActivities;
@end

