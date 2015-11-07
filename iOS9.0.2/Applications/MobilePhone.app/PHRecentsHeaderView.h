/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:43 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobilePhone/MobilePhone-Structs.h>
#import <UIKit/UIView.h>

@class CHRecentCall, UIView, NSArray;

@interface PHRecentsHeaderView : UIView {

	CHRecentCall* _recentCall;
	UIView* _topSeparator;
	UIView* _bottomSeparator;
	NSArray* _topSeparatorConstraints;
	NSArray* _bottomSeparatorConstraints;
	NSArray* _dateLabels;
	NSArray* _summaries;
	float _intrinsicContentHeight;

}

@property (readonly) CHRecentCall * recentCall;                       //@synthesize recentCall=_recentCall - In the implementation block
@property (retain) UIView * topSeparator;                             //@synthesize topSeparator=_topSeparator - In the implementation block
@property (retain) UIView * bottomSeparator;                          //@synthesize bottomSeparator=_bottomSeparator - In the implementation block
@property (retain) NSArray * topSeparatorConstraints;                 //@synthesize topSeparatorConstraints=_topSeparatorConstraints - In the implementation block
@property (retain) NSArray * bottomSeparatorConstraints;              //@synthesize bottomSeparatorConstraints=_bottomSeparatorConstraints - In the implementation block
@property (retain) NSArray * dateLabels;                              //@synthesize dateLabels=_dateLabels - In the implementation block
@property (retain) NSArray * summaries;                               //@synthesize summaries=_summaries - In the implementation block
@property (assign) float intrinsicContentHeight;                      //@synthesize intrinsicContentHeight=_intrinsicContentHeight - In the implementation block
+(id)headerViewWithFrame:(CGRect)arg1 recentCall:(id)arg2 ;
-(void)removeTopSeparator;
-(id)newSummaryViewForRecentCall:(id)arg1 occurrenceDate:(id)arg2 status:(unsigned)arg3 duration:(double)arg4 type:(unsigned)arg5 dataUsage:(double)arg6 ;
-(void)setIntrinsicContentHeight:(float)arg1 ;
-(void)_buildView;
-(id)_initWithFrame:(CGRect)arg1 recentCall:(id)arg2 ;
-(CHRecentCall *)recentCall;
-(void)setDateLabels:(NSArray *)arg1 ;
-(void)setSummaries:(NSArray *)arg1 ;
-(void)removeBottomSeparator;
-(NSArray *)topSeparatorConstraints;
-(void)setTopSeparatorConstraints:(NSArray *)arg1 ;
-(NSArray *)bottomSeparatorConstraints;
-(void)setBottomSeparatorConstraints:(NSArray *)arg1 ;
-(NSArray *)dateLabels;
-(NSArray *)summaries;
-(float)intrinsicContentHeight;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setTopSeparator:(UIView *)arg1 ;
-(UIView *)topSeparator;
-(void)setBottomSeparator:(UIView *)arg1 ;
-(UIView *)bottomSeparator;
@end
