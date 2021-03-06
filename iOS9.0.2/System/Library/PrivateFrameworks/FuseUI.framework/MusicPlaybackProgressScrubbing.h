/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:43 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MusicPlaybackProgressScrubbing <NSObject>
@property (assign,getter=isAlwaysLive,nonatomic) char alwaysLive; 
@property (nonatomic,readonly) int currentScrubSpeed; 
@property (assign,nonatomic,__weak) id<MusicPlaybackProgressScrubberDelegate> scrubberDelegate; 
@property (nonatomic,readonly) double effectiveCurrentTime; 
@property (assign,nonatomic) float rate; 
@property (assign,getter=isScrubbingEnabled,nonatomic) char scrubbingEnabled; 
@property (assign,nonatomic) double totalDuration; 
@required
-(int)currentScrubSpeed;
-(void)setCurrentTime:(double)arg1;
-(id<MusicPlaybackProgressScrubberDelegate>)scrubberDelegate;
-(void)setScrubberDelegate:(id)arg1;
-(float)rate;
-(double)effectiveCurrentTime;
-(void)cancelScrubbing;
-(void)setAlwaysLive:(char)arg1;
-(char)isScrubbingEnabled;
-(void)setScrubbingEnabled:(char)arg1;
-(double)totalDuration;
-(void)setTotalDuration:(double)arg1;
-(void)setRate:(float)arg1;
-(char)isAlwaysLive;

@end

