/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:57 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <UIKit/UIView.h>

@protocol PKGlyphViewDelegate;
@class NSMutableArray, NSString, PKFingerprintGlyphView, PKPhoneGlyphView, PKCheckGlyphView, UIImageView, UIColor, UIImage;

@interface PKGlyphView : UIView {

	unsigned _transitionIndex;
	char _transitioning;
	int _priorState;
	NSMutableArray* _transitionCompletionHandlers;
	double _lastAnimationWillFinish;
	char _phoneWiggling;
	NSString* _phoneWiggleAnimationKey;
	struct {
		unsigned showingPhone : 1;
		unsigned phoneRotated : 1;
	}  _layoutFlags;
	PKFingerprintGlyphView* _fingerprintView;
	PKPhoneGlyphView* _phoneView;
	PKCheckGlyphView* _checkView;
	float _phoneAspectRatio;
	UIImageView* _customImageView;
	UIColor* _primaryColor;
	UIColor* _secondaryColor;
	UIImage* _customImage;
	int _state;
	id<PKGlyphViewDelegate> _delegate;

}

@property (nonatomic,copy) UIColor * primaryColor;                          //@synthesize primaryColor=_primaryColor - In the implementation block
@property (nonatomic,copy) UIColor * secondaryColor;                        //@synthesize secondaryColor=_secondaryColor - In the implementation block
@property (assign,nonatomic) char fadeOnRecognized; 
@property (nonatomic,retain) UIImage * customImage;                         //@synthesize customImage=_customImage - In the implementation block
@property (nonatomic,readonly) int state;                                   //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) id<PKGlyphViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(char)automaticallyNotifiesObserversOfState;
-(void)_startPhoneWiggle;
-(void)_endPhoneWiggle;
-(void)setPrimaryColor:(id)arg1 animated:(char)arg2 ;
-(void)_executeTransitionCompletionHandlers:(char)arg1 ;
-(void)_updatePhoneLayoutWithTransitionIndex:(unsigned)arg1 animated:(char)arg2 ;
-(double)_minimumAnimationDurationForStateTransition;
-(void)setState:(int)arg1 animated:(char)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_performTransitionWithTransitionIndex:(unsigned)arg1 animated:(char)arg2 ;
-(void)_updatePhoneWiggleIfNecessary;
-(void)_updateCustomImageViewOpacityAnimated:(char)arg1 ;
-(void)_updateCheckViewStateAnimated:(char)arg1 ;
-(void)_finishTransitionForIndex:(unsigned)arg1 ;
-(void)_executeAfterMinimumAnimationDurationForStateTransition:(/*^block*/id)arg1 ;
-(void)_updateLastAnimationTimeWithAnimationOfDuration:(double)arg1 ;
-(CGPoint)_phonePositionWhileShownWithRotationPercentage:(float)arg1 ;
-(CATransform3D)_phoneTransformDeltaWhileShownFromRotationPercentage:(float)arg1 toPercentage:(float)arg2 ;
-(CGPoint)_phonePositionDeltaWhileShownFromRotationPercentage:(float)arg1 toPercentage:(float)arg2 ;
-(void)setSecondaryColor:(id)arg1 animated:(char)arg2 ;
-(char)fadeOnRecognized;
-(void)setFadeOnRecognized:(char)arg1 ;
-(void)setCustomImage:(UIImage *)arg1 ;
-(UIImage *)customImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<PKGlyphViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<PKGlyphViewDelegate>)delegate;
-(int)state;
-(void)setState:(int)arg1 ;
-(id)initWithStyle:(int)arg1 ;
-(UIColor *)primaryColor;
-(void)setPrimaryColor:(UIColor *)arg1 ;
-(void)setSecondaryColor:(UIColor *)arg1 ;
-(UIColor *)secondaryColor;
@end

