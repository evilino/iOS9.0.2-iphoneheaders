/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:04:41 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Assistant/Plugins/Podcasts.assistantBundle/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface POUtilities : NSObject
+(id)indexPath:(id)arg1 byAppendingEpisodePlaybackOrder:(id)arg2 ;
+(char)isPodcastsNowPlaying;
+(id)requestPodcastsPlaybackItemAtIndexPath:(id)arg1 ;
+(void)setPlaybackRate:(float)arg1 failureErrorCode:(int)arg2 completion:(/*^block*/id)arg3 ;
+(id)playableContentIndexPathForIndexPath:(id)arg1 ;
+(id)UUIDFromDomainObject:(id)arg1 ;
+(void)initialize;
+(id)_sharedInstance;
-(void)_playbackInitiatedNotification:(id)arg1 ;
@end
