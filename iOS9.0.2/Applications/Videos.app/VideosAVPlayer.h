/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:13:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Videos.app/Videos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MPAVController.h>
#import <libobjc.A.dylib/AVPictureInPictureControllerDelegate.h>

@class NSTimer, MPUExtrasVideoTimeline, MPUExtrasVideoTimelineEvent, NSString;

@interface VideosAVPlayer : MPAVController <AVPictureInPictureControllerDelegate> {

	char _scheduledTrackExpirationCallback;
	char _receivedTimeJumpEvent;
	char _resumeOnNextTimeJumpEvent;
	NSTimer* _rentalExpiryTimer;
	MPUExtrasVideoTimeline* _timeline;
	MPUExtrasVideoTimelineEvent* _currentTimelineEvent;
	char _playingExtras;

}

@property (assign,getter=isPlayingExtras,nonatomic) char playingExtras;              //@synthesize playingExtras=_playingExtras - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedAVPlayer;
-(void)reloadWithPlaybackContext:(id)arg1 timeline:(id)arg2 ;
-(void)setPlayingExtras:(char)arg1 ;
-(void)_availableMediaLibrariesDidChange:(id)arg1 ;
-(void)_playerTimeDidJump:(id)arg1 ;
-(void)_videos_applicationDidBecomeActiveNotification:(id)arg1 ;
-(void)_videos_applicationWillResignActiveNotification:(id)arg1 ;
-(void)seekToTimelineEvent:(id)arg1 ;
-(void)_scheduleExpirationTimerIfNecessary;
-(void)_setRentalIsPlaying:(char)arg1 forItem:(id)arg2 ;
-(char)isPlayingExtras;
-(void)_movieExpirationCheckCallback;
-(id)currentTimelineEvent;
-(void)pictureInPictureController:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(/*^block*/id)arg2 ;
-(void)pictureInPictureControllerDidStartPictureInPicture:(id)arg1 ;
-(char)showPlaybackStateOverlaysOnTVOut;
-(void)endPlayback;
-(void)reloadWithPlaybackContext:(id)arg1 ;
-(void)_connectAVPlayer;
-(void)airPlayVideoEnded;
-(void)_itemWillChange:(id)arg1 ;
-(void)_itemReadyToPlay:(id)arg1 ;
-(void)tickTimerFired;
-(void)_streamingDownloadSessionControllerDidFailDownloadSessionNotification:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end
