/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:08:00 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilitySettings-Structs.h>
#import <UIKit/UIView.h>

@class StrokableLabel, UIColor;

@interface AXColorWell : UIView {

	StrokableLabel* _sampleTextLabel;
	int _colorType;
	UIColor* wellColor;
	int _transparencyType;
	long _edgeStyle;
	float _textAlpha;

}

@property (nonatomic,retain) UIColor * wellColor; 
@property (assign,nonatomic) int colorType;                     //@synthesize colorType=_colorType - In the implementation block
@property (assign,nonatomic) int transparencyType;              //@synthesize transparencyType=_transparencyType - In the implementation block
@property (assign,nonatomic) long edgeStyle;                    //@synthesize edgeStyle=_edgeStyle - In the implementation block
@property (assign,nonatomic) float textAlpha;                   //@synthesize textAlpha=_textAlpha - In the implementation block
-(long)edgeStyle;
-(void)setEdgeStyle:(long)arg1 ;
-(void)setTextAlpha:(float)arg1 ;
-(UIColor *)wellColor;
-(float)textAlpha;
-(void)setTransparencyType:(int)arg1 ;
-(void)updateProperties;
-(int)transparencyType;
-(void)setWellColor:(UIColor *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setColorType:(int)arg1 ;
-(int)colorType;
@end

