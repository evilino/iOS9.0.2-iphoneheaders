/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:13 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <MPUFoundation/MPUEffectView.h>

@class MPUPinningView, UIImageView;

@interface MPUBlurEffectView : MPUEffectView {

	MPUPinningView* _blurView;
	UIImageView* _blurImageView;

}

@property (nonatomic,retain) MPUPinningView * blurView;                //@synthesize blurView=_blurView - In the implementation block
@property (nonatomic,retain) UIImageView * blurImageView;              //@synthesize blurImageView=_blurImageView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(MPUPinningView *)blurView;
-(void)setBlurView:(MPUPinningView *)arg1 ;
-(void)setReferenceView:(id)arg1 ;
-(void)updateEffect;
-(UIImageView *)blurImageView;
-(void)setBlurImageView:(UIImageView *)arg1 ;
@end
