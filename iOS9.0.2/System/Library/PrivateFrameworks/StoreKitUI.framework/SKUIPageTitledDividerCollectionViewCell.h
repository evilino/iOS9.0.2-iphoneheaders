/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:20 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <libobjc.A.dylib/SKUIViewElementView.h>

@class SKUIButtonViewElement, UIButton, NSNumber, UILabel, UIView, NSString;

@interface SKUIPageTitledDividerCollectionViewCell : UICollectionViewCell <SKUIViewElementView> {

	float _buttonContentHorizontalPadding;
	SKUIButtonViewElement* _buttonViewElement;
	UIEdgeInsets _contentEdgeInsets;
	UIEdgeInsets _contentInset;
	UIButton* _dividerButton;
	NSNumber* _dividerButtonImageRequestIdentifier;
	UILabel* _dividerLabel;
	UIEdgeInsets _imageVerticalPadding;
	UIEdgeInsets _internalHorizontalMargins;
	UIView* _leftLine;
	UIView* _rightLine;
	UIEdgeInsets _titleVerticalPadding;
	float _topEdgeInset;

}

@property (assign,nonatomic) float topEdgeInset;                    //@synthesize topEdgeInset=_topEdgeInset - In the implementation block
@property (nonatomic,copy) NSString * dividerTitle; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)prefetchResourcesForViewElement:(id)arg1 reason:(int)arg2 context:(id)arg3 ;
+(CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForViewElement:(id)arg1 width:(float)arg2 context:(id)arg3 ;
+(CGSize)sizeThatFitsWidth:(float)arg1 viewElement:(id)arg2 context:(id)arg3 ;
+(id)_attributedStringForDividerTitle:(id)arg1 context:(id)arg2 ;
+(id)_attributedStringForButtonViewElement:(id)arg1 context:(id)arg2 ;
+(UIEdgeInsets)_imageVerticalPaddingForViewElement:(id)arg1 ;
+(id)_attributedStringForViewElementText:(id)arg1 style:(id)arg2 context:(id)arg3 ;
+(UIEdgeInsets)_titleVerticalPaddingForViewElement:(id)arg1 ;
+(UIEdgeInsets)_contentEdgeInsetsForViewElement:(id)arg1 ;
+(float)viewElementInsetDividerHeight:(id)arg1 ;
+(CGSize)sizeThatFitsWidth:(float)arg1 dividerTitle:(id)arg2 context:(id)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)applyLayoutAttributes:(id)arg1 ;
-(void)reloadWithViewElement:(id)arg1 width:(float)arg2 context:(id)arg3 ;
-(char)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3 ;
-(char)updateWithItemState:(id)arg1 context:(id)arg2 animated:(char)arg3 ;
-(id)viewForElementIdentifier:(id)arg1 ;
-(void)_buttonAction:(id)arg1 ;
-(id)_imageForImageViewElement:(id)arg1 returningRequestIdentifier:(out id*)arg2 context:(id)arg3 ;
-(NSString *)dividerTitle;
-(void)setColoringWithColorScheme:(id)arg1 ;
-(void)setDividerTitle:(NSString *)arg1 ;
-(void)setTopEdgeInset:(float)arg1 ;
-(float)topEdgeInset;
@end
