/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:04:50 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Assistant/UIPlugins/Sports.siriUIBundle/Sports
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Sports/Sports-Structs.h>
#import <UIKit/UIView.h>

@class SASportsMetadataGroup, UILabel, NSMutableArray;

@interface ACSportsAthleteStatGroupView : UIView {

	SASportsMetadataGroup* _metadataGroup;
	UILabel* _headerLabel;
	NSMutableArray* _statLabels;

}
-(void)_setStatLabelCount:(unsigned)arg1 ;
-(void)setMetadataGroup:(id)arg1 ;
-(void)_setupText;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

