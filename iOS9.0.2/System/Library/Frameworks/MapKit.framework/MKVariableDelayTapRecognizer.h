/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:44 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITapGestureRecognizer.h>

@protocol MKVariableDelayTapRecognizerDelegate;
@interface MKVariableDelayTapRecognizer : UITapGestureRecognizer {

	double originalMaximumIntervalBetweenSuccessiveTaps;
	id<MKVariableDelayTapRecognizerDelegate> tapDelayDelegate;

}

@property (assign,nonatomic,__weak) id<MKVariableDelayTapRecognizerDelegate> tapDelayDelegate; 
-(id<MKVariableDelayTapRecognizerDelegate>)tapDelayDelegate;
-(void)setTapDelayDelegate:(id<MKVariableDelayTapRecognizerDelegate>)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
@end

