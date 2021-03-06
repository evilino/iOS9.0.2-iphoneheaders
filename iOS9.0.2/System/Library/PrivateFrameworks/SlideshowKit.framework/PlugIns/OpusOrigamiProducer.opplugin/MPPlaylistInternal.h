/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:24 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface MPPlaylistInternal : NSObject {

	double duration;
	double fadeInDuration;
	double fadeOutDuration;
	double duckInDuration;
	double duckOutDuration;
	float duckLevel;

}

@property (assign,nonatomic) double duration; 
@property (assign,nonatomic) double fadeInDuration; 
@property (assign,nonatomic) double fadeOutDuration; 
@property (assign,nonatomic) double duckInDuration; 
@property (assign,nonatomic) double duckOutDuration; 
@property (assign,nonatomic) float duckLevel; 
-(float)duckLevel;
-(double)duckOutDuration;
-(double)duckInDuration;
-(void)setDuckLevel:(float)arg1 ;
-(void)setDuckInDuration:(double)arg1 ;
-(void)setDuckOutDuration:(double)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setFadeInDuration:(double)arg1 ;
-(void)setFadeOutDuration:(double)arg1 ;
-(double)fadeInDuration;
-(double)fadeOutDuration;
@end

