/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:10 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIFont;

@interface SearchUICardSectionFormatter : NSObject {

	char _primaryTextIsVibrant;
	char _secondaryTextIsVibrant;
	unsigned _style;
	float _imageYInset;
	float _imageXInset;
	float _primaryTextLeadingInset;
	float _secondaryTextLeadingInset;
	float _primaryTextBaselineFromBottom;
	float _primaryTextBaselineFromTop;
	float _secondaryTextBaselineFromBottom;
	float _secondaryTextBaselineFromTop;
	UIFont* _primaryFont;
	UIFont* _secondaryFont;

}

@property (assign,nonatomic) unsigned style;                                     //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) float imageYInset;                                  //@synthesize imageYInset=_imageYInset - In the implementation block
@property (assign,nonatomic) float imageXInset;                                  //@synthesize imageXInset=_imageXInset - In the implementation block
@property (assign,nonatomic) float primaryTextLeadingInset;                      //@synthesize primaryTextLeadingInset=_primaryTextLeadingInset - In the implementation block
@property (assign,nonatomic) float secondaryTextLeadingInset;                    //@synthesize secondaryTextLeadingInset=_secondaryTextLeadingInset - In the implementation block
@property (assign,nonatomic) float primaryTextBaselineFromBottom;                //@synthesize primaryTextBaselineFromBottom=_primaryTextBaselineFromBottom - In the implementation block
@property (assign,nonatomic) float primaryTextBaselineFromTop;                   //@synthesize primaryTextBaselineFromTop=_primaryTextBaselineFromTop - In the implementation block
@property (assign,nonatomic) float secondaryTextBaselineFromBottom;              //@synthesize secondaryTextBaselineFromBottom=_secondaryTextBaselineFromBottom - In the implementation block
@property (assign,nonatomic) float secondaryTextBaselineFromTop;                 //@synthesize secondaryTextBaselineFromTop=_secondaryTextBaselineFromTop - In the implementation block
@property (nonatomic,retain) UIFont * primaryFont;                               //@synthesize primaryFont=_primaryFont - In the implementation block
@property (nonatomic,retain) UIFont * secondaryFont;                             //@synthesize secondaryFont=_secondaryFont - In the implementation block
@property (assign,nonatomic) char primaryTextIsVibrant;                          //@synthesize primaryTextIsVibrant=_primaryTextIsVibrant - In the implementation block
@property (assign,nonatomic) char secondaryTextIsVibrant;                        //@synthesize secondaryTextIsVibrant=_secondaryTextIsVibrant - In the implementation block
-(unsigned)style;
-(void)setStyle:(unsigned)arg1 ;
-(id)initWithRowCardSectionType:(unsigned)arg1 style:(unsigned)arg2 ;
-(void)setImageYInset:(float)arg1 ;
-(void)setPrimaryTextLeadingInset:(float)arg1 ;
-(void)setSecondaryTextLeadingInset:(float)arg1 ;
-(void)setPrimaryTextBaselineFromTop:(float)arg1 ;
-(void)setPrimaryTextBaselineFromBottom:(float)arg1 ;
-(void)setPrimaryFont:(UIFont *)arg1 ;
-(void)setSecondaryFont:(UIFont *)arg1 ;
-(void)setSecondaryTextIsVibrant:(char)arg1 ;
-(UIFont *)primaryFont;
-(void)setPrimaryTextIsVibrant:(char)arg1 ;
-(id)initWithRowCardSection:(id)arg1 style:(unsigned)arg2 ;
-(float)imageYInset;
-(float)imageXInset;
-(void)setImageXInset:(float)arg1 ;
-(float)primaryTextLeadingInset;
-(float)secondaryTextLeadingInset;
-(float)primaryTextBaselineFromBottom;
-(float)primaryTextBaselineFromTop;
-(float)secondaryTextBaselineFromBottom;
-(void)setSecondaryTextBaselineFromBottom:(float)arg1 ;
-(float)secondaryTextBaselineFromTop;
-(void)setSecondaryTextBaselineFromTop:(float)arg1 ;
-(UIFont *)secondaryFont;
-(char)primaryTextIsVibrant;
-(char)secondaryTextIsVibrant;
@end

