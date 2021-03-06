/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:35:25 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GuidedAccess/GuidedAccess-Structs.h>
#import <UIKit/UIButton.h>

@interface GAXInterestAreaViewButton : UIButton {

	char _closeButton;
	unsigned _associatedInterestAreaPathIndex;
	unsigned _knobPosition;

}

@property (assign,nonatomic) unsigned associatedInterestAreaPathIndex;              //@synthesize associatedInterestAreaPathIndex=_associatedInterestAreaPathIndex - In the implementation block
@property (assign,nonatomic) unsigned knobPosition;                                 //@synthesize knobPosition=_knobPosition - In the implementation block
@property (assign,getter=isCloseButton,nonatomic) char closeButton;                 //@synthesize closeButton=_closeButton - In the implementation block
+(id)buttonWithImage:(id)arg1 ;
-(char)isCloseButton;
-(unsigned)associatedInterestAreaPathIndex;
-(void)setAssociatedInterestAreaPathIndex:(unsigned)arg1 ;
-(void)setCloseButton:(char)arg1 ;
-(char)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)accessibilityLabel;
-(char)pointMostlyInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)accessibilityValue;
-(id)accessibilityHint;
-(unsigned long long)accessibilityTraits;
-(void)setKnobPosition:(unsigned)arg1 ;
-(unsigned)knobPosition;
@end

