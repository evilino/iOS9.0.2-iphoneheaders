/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:54 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <BaseBoard/BSAnimationSettings.h>

@class CAMediaTimingFunction;

@interface BSMutableAnimationSettings : BSAnimationSettings

@property (assign,nonatomic) double duration; 
@property (assign,nonatomic) double delay; 
@property (assign,nonatomic) double frameInterval; 
@property (nonatomic,retain) CAMediaTimingFunction * timingFunction; 
+(id)settingsWithDuration:(double)arg1 ;
+(id)settingsWithDuration:(double)arg1 delay:(double)arg2 ;
+(id)settingsWithDuration:(double)arg1 timingFunction:(id)arg2 ;
+(id)settingsWithDuration:(double)arg1 delay:(double)arg2 timingFunction:(id)arg3 ;
-(void)setDuration:(double)arg1 ;
-(void)setDelay:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFrameInterval:(double)arg1 ;
-(void)setTimingFunction:(CAMediaTimingFunction *)arg1 ;
@end

