/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:10 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface UIViewAnimationBlockDelegate : NSObject {

	char _didBeginBlockAnimation;
	char _allowUserInteraction;
	char _isZeroDuration;
	char _allowsUserInteractionToCutOffEndOfAnimation;
	char _animationDidStopSent;
	/*^block*/id _start;
	/*^block*/id _completion;
	NSMutableArray* _systemPostAnimationActions;

}

@property (nonatomic,readonly) char _allowsUserInteraction;              //@synthesize allowUserInteraction=_allowUserInteraction - In the implementation block
+(void)setAnimationBlockDelegateWithDuration:(double)arg1 options:(unsigned)arg2 start:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(char)_allowsUserInteraction;
-(char)_allowsUserInteractionToCutOffEndOfAnimation;
-(void)_willBeginBlockAnimation:(id)arg1 context:(id)arg2 ;
-(void)_didEndBlockAnimation:(id)arg1 finished:(id)arg2 context:(id)arg3 ;
-(void)_sendDeferredCompletion:(id)arg1 ;
@end

