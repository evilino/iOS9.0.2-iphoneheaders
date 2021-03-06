/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:18 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
@class NSString, NSDictionary, UIColor;

@interface MPUExtrasGridSectionHeaderStyle : NSObject {

	NSString* _textStyle;
	NSDictionary* _defaultFontAttributes;
	UIColor* _textColor;
	float _textBaselineHeight;
	float _textBaselineDescender;
	UIEdgeInsets _insets;

}

@property (nonatomic,retain) NSString * textStyle;                              //@synthesize textStyle=_textStyle - In the implementation block
@property (nonatomic,retain) NSDictionary * defaultFontAttributes;              //@synthesize defaultFontAttributes=_defaultFontAttributes - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                               //@synthesize textColor=_textColor - In the implementation block
@property (assign,nonatomic) UIEdgeInsets insets;                               //@synthesize insets=_insets - In the implementation block
@property (assign,nonatomic) float textBaselineHeight;                          //@synthesize textBaselineHeight=_textBaselineHeight - In the implementation block
@property (assign,nonatomic) float textBaselineDescender;                       //@synthesize textBaselineDescender=_textBaselineDescender - In the implementation block
-(void)setTextColor:(UIColor *)arg1 ;
-(UIColor *)textColor;
-(NSString *)textStyle;
-(void)setTextStyle:(NSString *)arg1 ;
-(UIEdgeInsets)insets;
-(void)setInsets:(UIEdgeInsets)arg1 ;
-(void)setDefaultFontAttributes:(NSDictionary *)arg1 ;
-(void)setTextBaselineDescender:(float)arg1 ;
-(void)setTextBaselineHeight:(float)arg1 ;
-(NSDictionary *)defaultFontAttributes;
-(float)textBaselineDescender;
-(float)textBaselineHeight;
@end

