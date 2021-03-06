/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:19 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIControl.h>
#import <libobjc.A.dylib/ABText.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/NSCoding.h>

@class UIImageView, UILabel, UITapGestureRecognizer, UIView, _UIButtonMaskAnimationView, UIFont, NSArray, NSString, NSDictionary, UIColor, UIImage, NSAttributedString;

@interface UIButton : UIControl <ABText, UIGestureRecognizerDelegate, NSCoding> {

	unsigned _externalFlatEdge;
	CFDictionaryRef _contentLookup;
	UIEdgeInsets _contentEdgeInsets;
	UIEdgeInsets _titleEdgeInsets;
	UIEdgeInsets _imageEdgeInsets;
	UIImageView* _backgroundView;
	UIImageView* _imageView;
	UILabel* _titleView;
	char _initialized;
	unsigned _lastDrawingControlState;
	UITapGestureRecognizer* _selectGestureRecognizer;
	struct {
		unsigned reversesTitleShadowWhenHighlighted : 1;
		unsigned adjustsImageWhenHighlighted : 1;
		unsigned adjustsImageWhenDisabled : 1;
		unsigned autosizeToFit : 1;
		unsigned disabledDimsImage : 1;
		unsigned showsTouchWhenHighlighted : 1;
		unsigned buttonType : 8;
		unsigned shouldHandleScrollerMouseEvent : 1;
		unsigned titleFrozen : 1;
		unsigned resendTraitToImageViews : 2;
		unsigned animateNextHighlightChange : 1;
		unsigned blurEnabled : 1;
		unsigned visualEffectViewEnabled : 1;
		unsigned suppressAccessibilityUnderline : 1;
	}  _buttonFlags;
	UIView* _effectiveContentView;
	_UIButtonMaskAnimationView* _maskAnimationView;
	UIView* _selectionView;
	UIFont* _lazyTitleViewFont;
	NSArray* _contentConstraints;
	UIEdgeInsets _internalTitlePaddingInsets;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * ab_text; 
@property (nonatomic,copy) NSDictionary * ab_textAttributes; 
@property (assign,nonatomic) UIEdgeInsets contentEdgeInsets; 
@property (assign,nonatomic) UIEdgeInsets titleEdgeInsets; 
@property (assign,nonatomic) char reversesTitleShadowWhenHighlighted; 
@property (assign,nonatomic) UIEdgeInsets imageEdgeInsets; 
@property (assign,nonatomic) char adjustsImageWhenHighlighted; 
@property (assign,nonatomic) char adjustsImageWhenDisabled; 
@property (assign,nonatomic) char showsTouchWhenHighlighted; 
@property (nonatomic,retain) UIColor * tintColor; 
@property (nonatomic,readonly) int buttonType; 
@property (nonatomic,readonly) NSString * currentTitle; 
@property (nonatomic,readonly) UIColor * currentTitleColor; 
@property (nonatomic,readonly) UIColor * currentTitleShadowColor; 
@property (nonatomic,readonly) UIImage * currentImage; 
@property (nonatomic,readonly) UIImage * currentBackgroundImage; 
@property (nonatomic,readonly) NSAttributedString * currentAttributedTitle; 
@property (nonatomic,readonly) UILabel * titleLabel; 
@property (nonatomic,readonly) UIImageView * imageView; 
@property (nonatomic,retain,readonly) UIColor * _currentImageColor; 
@property (setter=_setExternalFlatEdge:) unsigned _externalFlatEdge; 
@property (assign,setter=_setWantsAccessibilityUnderline:,nonatomic) char _wantsAccessibilityUnderline; 
@property (setter=_setContentConstraints:,nonatomic,copy) NSArray * _contentConstraints;                                   //@synthesize contentConstraints=_contentConstraints - In the implementation block
@property (assign,setter=_setInternalTitlePaddingInsets:,nonatomic) UIEdgeInsets _internalTitlePaddingInsets;              //@synthesize internalTitlePaddingInsets=_internalTitlePaddingInsets - In the implementation block
+(id)mediaControlsBuyButtonWithStyle:(int)arg1 ;
+(id)buttonWithType:(int)arg1 ;
+(void)_setVisuallyHighlighted:(char)arg1 forViews:(id)arg2 initialPress:(char)arg3 ;
+(id)_defaultNormalTitleColor;
+(id)_defaultNormalTitleShadowColor;
+(id)_defaultImageForType:(int)arg1 andState:(unsigned)arg2 ;
+(char)_buttonTypeIsModernUI:(int)arg1 ;
+(void)_setVisuallyHighlighted:(char)arg1 forViews:(id)arg2 initialPress:(char)arg3 baseAlpha:(float)arg4 ;
+(id)_selectedIndicatorImage;
+(id)_infoLightImage;
+(id)_detailDisclosureImage;
+(id)_plusImage;
+(id)_infoDarkImage;
+(id)_exclamationMarkImage;
+(id)_questionMarkImage;
+(id)_checkmarkImage;
+(id)_minusImage;
+(id)_xImage;
+(id)_defaultBackgroundImageForType:(int)arg1 andState:(unsigned)arg2 ;
+(id)_defaultTitleColorForState:(unsigned)arg1 button:(id)arg2 ;
+(id)_defaultImageColorForState:(unsigned)arg1 button:(id)arg2 ;
-(void)pk_applyAppearance:(PKAppearanceSpecifier*)arg1 ;
-(id)pk_childrenForAppearance;
-(void)pu_setTitle:(id)arg1 withFallback:(/*^block*/id)arg2 forState:(unsigned)arg3 ;
-(void)pu_setRTLAwareContentEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)cam_updateContentInsetsToCenterImageWithinMinimumSize:(CGSize)arg1 ;
-(void)_mediaControlsBuyButtonTouchDown:(id)arg1 ;
-(void)_mediaControlsBuyButtonTouchUp:(id)arg1 ;
-(void)configureFromScriptButton:(id)arg1 ;
-(void)mpu_configureButtonWithTextDrawingContext:(id)arg1 ;
-(id)_mapkit_accessoryControlToExtendWithCallout;
-(void)ab_addConferenceIcon;
-(void)setAb_textAttributes:(NSDictionary *)arg1 ;
-(void)setAb_text:(NSString *)arg1 ;
-(NSString *)ab_text;
-(NSDictionary *)ab_textAttributes;
-(void)setTitle:(id)arg1 forState:(unsigned)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(void)invalidateIntrinsicContentSize;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(void)setTitle:(id)arg1 ;
-(char)_contentHuggingDefault_isUsuallyFixedHeight;
-(char)_contentHuggingDefault_isUsuallyFixedWidth;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)_backgroundView;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)setAttributedTitle:(id)arg1 forState:(unsigned)arg2 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(id)title;
-(int)_buttonType;
-(void)setEnabled:(char)arg1 ;
-(void)_setButtonType:(int)arg1 ;
-(id)_preferredConfigurationForFocusAnimation:(int)arg1 inContext:(id)arg2 ;
-(void)setFont:(id)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(id)image;
-(void)setLineBreakMode:(int)arg1 ;
-(id)_font;
-(int)_lineBreakMode;
-(id)_encodableSubviews;
-(void)setTintColor:(UIColor *)arg1 ;
-(char)canBecomeFocused;
-(void)_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)tintColorDidChange;
-(void)interactionTintColorDidChange;
-(void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1 ;
-(void)setSemanticContentAttribute:(int)arg1 ;
-(void)_willMoveToWindow:(id)arg1 ;
-(void)_didChangeFromIdiom:(int)arg1 onScreen:(id)arg2 traverseHierarchy:(char)arg3 ;
-(char)_alwaysHandleScrollerMouseEvent;
-(id)_scriptingInfo;
-(void)setImage:(id)arg1 forState:(unsigned)arg2 ;
-(id)titleForState:(unsigned)arg1 ;
-(void)_setLineBreakMode:(int)arg1 ;
-(void)_updateTitleView;
-(id)_titleView;
-(void)setHighlighted:(char)arg1 ;
-(void)setTitleColor:(id)arg1 forState:(unsigned)arg2 ;
-(void)_setTitleShadowOffset:(CGSize)arg1 ;
-(UILabel *)titleLabel;
-(void)_setFrame:(CGRect)arg1 deferLayout:(char)arg2 ;
-(CGRect)_selectedIndicatorBounds;
-(id)_imageView;
-(void)setTitleShadowColor:(id)arg1 forState:(unsigned)arg2 ;
-(void)setTitleColor:(id)arg1 forStates:(unsigned)arg2 ;
-(void)setAdjustsImageWhenHighlighted:(char)arg1 ;
-(void)setAdjustsImageWhenDisabled:(char)arg1 ;
-(void)setBackgroundImage:(id)arg1 forState:(unsigned)arg2 ;
-(void)setBackgroundImage:(id)arg1 forStates:(unsigned)arg2 ;
-(void)_setImageColor:(id)arg1 forState:(unsigned)arg2 ;
-(void)setTitleEdgeInsets:(UIEdgeInsets)arg1 ;
-(char)_isTitleFrozen;
-(void)_setFont:(id)arg1 ;
-(void)_setTitleFrozen:(char)arg1 ;
-(void)setTitleShadowColor:(id)arg1 forStates:(unsigned)arg2 ;
-(void)setContentEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)setTitle:(id)arg1 forStates:(unsigned)arg2 ;
-(void)setImage:(id)arg1 forStates:(unsigned)arg2 ;
-(void)setContentHorizontalAlignment:(int)arg1 ;
-(void)setContentVerticalAlignment:(int)arg1 ;
-(void)setDisabledDimsImage:(char)arg1 ;
-(id)imageForState:(unsigned)arg1 ;
-(id)_createPreparedImageViewWithFrame:(CGRect)arg1 ;
-(id)backgroundImageForState:(unsigned)arg1 ;
-(void)_sendSetNeedsLayoutToSuperviewOnTitleAnimationCompletionIfNecessary;
-(UIEdgeInsets)_pathTitleEdgeInsets;
-(UIEdgeInsets)_pathImageEdgeInsets;
-(char)_isModernButton;
-(char)_isExternalRoundedRectButton;
-(id)_externalUnfocusedBorderColor;
-(id)font;
-(void)setSelected:(char)arg1 ;
-(char)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(CGRect)_clippedHighlightBounds;
-(unsigned)_controlEventsForActionTriggered;
-(float)_highlightCornerRadius;
-(int)buttonType;
-(void)updateConstraints;
-(UIImageView *)imageView;
-(id)_effectiveContentView;
-(void)_setHighlighted:(char)arg1 animated:(char)arg2 ;
-(id)viewForLastBaselineLayout;
-(CGRect)backgroundRectForBounds:(CGRect)arg1 ;
-(id)_contentForState:(unsigned)arg1 ;
-(void)_setContent:(id)arg1 forState:(unsigned)arg2 ;
-(int)lineBreakMode;
-(id)_layoutDebuggingTitle;
-(CGRect)contentRectForBounds:(CGRect)arg1 ;
-(CGRect)titleRectForContentRect:(CGRect)arg1 ;
-(void)setAutosizesToFit:(char)arg1 ;
-(void)_uninstallSelectGestureRecognizer;
-(void)_installSelectGestureRecognizer;
-(void)_selectGestureChanged:(id)arg1 ;
-(NSString *)currentTitle;
-(UIImage *)currentImage;
-(CGRect)imageRectForContentRect:(CGRect)arg1 ;
-(void)setShowPressFeedback:(char)arg1 ;
-(void)_titleAttributesChanged;
-(id)_backgroundForState:(unsigned)arg1 usesBackgroundForNormalState:(char*)arg2 ;
-(id)_setupBackgroundView;
-(void)_setTitleColor:(id)arg1 forStates:(unsigned)arg2 ;
-(void)_setShadowColor:(id)arg1 forStates:(unsigned)arg2 ;
-(id)titleColorForState:(unsigned)arg1 ;
-(id)titleShadowColorForState:(unsigned)arg1 ;
-(id)attributedTitleForState:(unsigned)arg1 ;
-(UIEdgeInsets)contentEdgeInsets;
-(void)_setContentConstraints:(id)arg1 ;
-(void)_invalidateContentConstraints;
-(void)setShowsTouchWhenHighlighted:(char)arg1 ;
-(void)_applyAppropriateChargeForButtonType;
-(void)_takeContentFromArchivableContent:(id)arg1 ;
-(id)_archivableContent:(id*)arg1 ;
-(void)_updateEffectsForImageView:(id)arg1 background:(char)arg2 ;
-(char)autosizesToFit;
-(CGPoint)pressFeedbackPosition;
-(char)_canHaveTitle;
-(void)_setupTitleView;
-(void)_setupImageView;
-(char)_hasDrawingStyle;
-(char)_isEffectivelyDisabledExternalRoundedRectButton;
-(id)_imageForState:(unsigned)arg1 usesImageForNormalState:(char*)arg2 ;
-(void)_updateImageView;
-(char)_hasHighlightColor;
-(char)_isExternalRoundedRectButtonWithPressednessState;
-(id)_selectedIndicatorViewWithImage:(id)arg1 ;
-(float)_selectedIndicatorAlpha;
-(char)_textNeedsCompositingModeWhenSelected;
-(char)_imageNeedsCompositingModeWhenSelected;
-(unsigned)_externalFlatEdge;
-(CGRect)_highlightBoundsForDrawingStyle;
-(id)_borderColorForState:(unsigned)arg1 ;
-(void)_prepareMaskAnimationViewIfNecessary;
-(id)_transitionAnimationWithKeyPath:(id)arg1 ;
-(float)_borderWidthForState:(unsigned)arg1 bounds:(CGRect)arg2 ;
-(id)_fadeOutAnimationWithKeyPath:(id)arg1 ;
-(void)_updateMaskState;
-(id)_externalFocusedTitleColor;
-(id)_externalTitleColorForState:(unsigned)arg1 ;
-(id)_externalBorderColorForState:(unsigned)arg1 ;
-(float)_drawingStrokeForState:(unsigned)arg1 ;
-(UIEdgeInsets)_outsetInsets:(UIEdgeInsets)arg1 ;
-(CGRect)_highlightBounds;
-(id)_titleForState:(unsigned)arg1 ;
-(id)_titleColorForState:(unsigned)arg1 ;
-(id)_shadowColorForState:(unsigned)arg1 ;
-(id)_attributedTitleForState:(unsigned)arg1 ;
-(id)_imageColorForState:(unsigned)arg1 ;
-(UIEdgeInsets)_combinedContentPaddingInsets;
-(UIEdgeInsets)titleEdgeInsets;
-(CGRect)_titleRectForContentRect:(CGRect)arg1 calculatePositionForEmptyTitle:(char)arg2 ;
-(UIEdgeInsets)imageEdgeInsets;
-(void)_setContentHuggingPriorities:(CGSize)arg1 ;
-(id)_titleOrImageViewForBaselineLayout;
-(char)_likelyToHaveTitle;
-(void)_setupTitleViewRequestingLayout:(char)arg1 ;
-(CGRect)_highlightRectForImageRect:(CGRect)arg1 ;
-(CGRect)_highlightRectForTextRect:(CGRect)arg1 ;
-(char)adjustsImageWhenHighlighted;
-(char)showsTouchWhenHighlighted;
-(char)adjustsImageWhenDisabled;
-(void)_beginTitleAnimation;
-(id)_letterpressStyleForState:(unsigned)arg1 ;
-(void)_updateBackgroundImageView;
-(void)_layoutBackgroundImageView;
-(void)_layoutImageView;
-(void)_layoutTitleView;
-(void)_setupDrawingStyleForState:(unsigned)arg1 ;
-(char)_shouldUpdatePressedness;
-(void)_updateSelectionViewForState:(unsigned)arg1 ;
-(void)_setupPressednessForState:(unsigned)arg1 ;
-(CGSize)_titleShadowOffset;
-(id)_newImageViewWithFrame:(CGRect)arg1 ;
-(char)_wantsAccessibilityUnderline;
-(id)_newLabelWithFrame:(CGRect)arg1 ;
-(void)_setTitle:(id)arg1 forStates:(unsigned)arg2 ;
-(void)_setImage:(id)arg1 forStates:(unsigned)arg2 ;
-(void)_setBackground:(id)arg1 forStates:(unsigned)arg2 ;
-(float)_drawingStrokeForStyle:(int)arg1 ;
-(void)_setDrawingStroke:(float)arg1 forState:(unsigned)arg2 ;
-(int)_drawingStyleForStroke:(float)arg1 ;
-(int)_externalDrawingStyleForState:(unsigned)arg1 ;
-(char)_shouldDefaultToTemplatesForImageViewBackground:(char)arg1 ;
-(id)_externalImageColorForState:(unsigned)arg1 ;
-(char)_hasImageForProperty:(id)arg1 ;
-(char)reversesTitleShadowWhenHighlighted;
-(void)setReversesTitleShadowWhenHighlighted:(char)arg1 ;
-(void)setImageEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)_setExternalFlatEdge:(unsigned)arg1 ;
-(UIColor *)currentTitleColor;
-(UIColor *)_currentImageColor;
-(UIColor *)currentTitleShadowColor;
-(UIImage *)currentBackgroundImage;
-(NSAttributedString *)currentAttributedTitle;
-(CGSize)titleShadowOffset;
-(void)setTitleShadowOffset:(CGSize)arg1 ;
-(void)_setWantsAccessibilityUnderline:(char)arg1 ;
-(void)_setShouldHandleScrollerMouseEvent:(char)arg1 ;
-(void)crossfadeToImage:(id)arg1 forState:(unsigned)arg2 ;
-(void)_setLetterpressStyle:(id)arg1 forState:(unsigned)arg2 ;
-(void)_setDrawingStyle:(int)arg1 forState:(unsigned)arg2 ;
-(int)_drawingStyleForState:(unsigned)arg1 ;
-(void)_setImageColor:(id)arg1 forStates:(unsigned)arg2 ;
-(void)_setAttributedTitle:(id)arg1 forStates:(unsigned)arg2 ;
-(NSArray *)_contentConstraints;
-(UIEdgeInsets)_internalTitlePaddingInsets;
-(void)_setInternalTitlePaddingInsets:(UIEdgeInsets)arg1 ;
-(unsigned long long)defaultAccessibilityTraits;
-(char)isAccessibilityElementByDefault;
-(char)isElementAccessibilityExposedToInterfaceBuilder;
-(float)_autolayoutSpacingAtEdge:(int)arg1 inContainer:(id)arg2 ;
-(float)_autolayoutSpacingAtEdge:(int)arg1 nextToNeighbor:(id)arg2 ;
-(char)_hasCustomAutolayoutNeighborSpacing;
@end

