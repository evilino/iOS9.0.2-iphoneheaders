/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:16 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/iBooks-Structs.h>
#import <UIKit/UIView.h>

@class NSArray, _UIBackdropView, UIImageView;

@interface IMCalloutBar : UIView {

	float _arrowX;
	char _up;
	NSArray* _controls;
	_UIBackdropView* _backgroundView;
	_UIBackdropView* _separatorBackgroundView;
	UIImageView* _blurMaskView;
	UIImageView* _tintMaskView;
	UIImageView* _separatorMaskView;
	CGRect _highlightRect;

}

@property (assign,nonatomic) float arrowX;                    //@synthesize arrowX=_arrowX - In the implementation block
@property (assign,nonatomic) char up;                         //@synthesize up=_up - In the implementation block
@property (nonatomic,retain) NSArray * controls;              //@synthesize controls=_controls - In the implementation block
-(float)arrowX;
-(void)setArrowX:(float)arg1 ;
-(CGSize)sizeThatFitsControls:(id)arg1 ;
-(id)newMaskView:(int)arg1 ;
-(CGRect)dividerLineRectForControl:(int)arg1 ;
-(void)setHighlighted:(char)arg1 forControl:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setBlurDisabled:(char)arg1 ;
-(void)setUp:(char)arg1 ;
-(char)up;
-(void)setControls:(NSArray *)arg1 ;
-(NSArray *)controls;
@end

