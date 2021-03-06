/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:25 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/TransitDirectionsInfoCell.h>

@protocol TransitDirectionsOriginDestinationCellDelegate;
@class NSLayoutConstraint, UIView, UILabel, UIImageView;

@interface TransitDirectionsOriginDestinationCell : TransitDirectionsInfoCell {

	NSLayoutConstraint* _topToLabelConstraint;
	NSLayoutConstraint* _baselineToBottomConstraint;
	NSLayoutConstraint* _yCenterLabelConstraint;
	NSLayoutConstraint* _centeringViewWidthConstraint;
	UIView* _centeringPinView;
	id<TransitDirectionsOriginDestinationCellDelegate> _delegate;
	UILabel* _placeLabel;
	UIImageView* _pinImageView;

}

@property (assign,nonatomic,__weak) id<TransitDirectionsOriginDestinationCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UILabel * placeLabel;                                                            //@synthesize placeLabel=_placeLabel - In the implementation block
@property (nonatomic,retain) UIImageView * pinImageView;                                                      //@synthesize pinImageView=_pinImageView - In the implementation block
+(id)fontsForInstructions;
+(id)_primaryFont;
-(UILabel *)placeLabel;
-(float)_topToFirstBaselineDistance;
-(void)configureWithItem:(id)arg1 ;
-(void)setPlaceLabel:(UILabel *)arg1 ;
-(float)_lastBaselineToBottomDistance;
-(void)setPinImageView:(UIImageView *)arg1 ;
-(void)setLeadingInstructionMargin:(float)arg1 ;
-(id)_initialConstraints;
-(UIImageView *)pinImageView;
-(void)_contentSizeCategoryDidChange;
-(void)_createSubviews;
-(void)setDelegate:(id<TransitDirectionsOriginDestinationCellDelegate>)arg1 ;
-(id<TransitDirectionsOriginDestinationCellDelegate>)delegate;
-(void)setSeparatorStyle:(int)arg1 ;
@end

