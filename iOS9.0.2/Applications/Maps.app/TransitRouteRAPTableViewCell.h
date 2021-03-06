/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:28 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/TransitRouteTableViewCell.h>

@class UIImageView;

@interface TransitRouteRAPTableViewCell : TransitRouteTableViewCell {

	UIImageView* _checkmarkImageView;
	char _checked;

}

@property (assign,getter=isChecked,nonatomic) char checked;              //@synthesize checked=_checked - In the implementation block
+(float)checkmarkPaddingLeft;
+(float)checkmarkPaddingRight;
+(float)leadingTextAlignmentMargin;
+(float)rowHeight;
+(float)horizontalPadding;
-(id)_autolayoutConstraints;
-(float)_trailingInset;
-(float)_leadingInset;
-(void)_createSubviews;
-(void)setChecked:(char)arg1 ;
-(char)isChecked;
@end

