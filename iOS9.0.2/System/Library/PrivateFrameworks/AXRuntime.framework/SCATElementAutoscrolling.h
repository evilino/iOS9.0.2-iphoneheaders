/*
* This header is generated by classdump-dyld 0.7
* on Sunday, October 25, 2015 at 9:09:47 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SCATElementAutoscrolling <SCATElement>
@property (nonatomic,retain) id<SCATElementAutoscrolling> scatAutoscrollTarget; 
@property (nonatomic,readonly) char scatIsAutoscrolling; 
@required
-(void)setScatAutoscrollTarget:(id)arg1;
-(char)scatIsAutoscrolling;
-(void)scatAutoscrollInDirection:(int)arg1;
-(void)scatPauseAutoscrolling;
-(void)scatIncreaseAutoscrollSpeed;
-(void)scatDecreaseAutoscrollSpeed;
-(void)scatScrollToTop;
-(id<SCATElementAutoscrolling>)scatAutoscrollTarget;

@end

