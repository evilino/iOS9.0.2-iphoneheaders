/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/FaceTime.app/FaceTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel, UIDateLabel, UIImageView, NSDictionary, NSLayoutConstraint, CHRecentCall;

@interface PHRecentsCell : UITableViewCell {

	UILabel* _callerNameLabel;
	UILabel* _callerLabelLabel;
	UILabel* _callerCountLabel;
	UIDateLabel* _callerDateLabel;
	UIImageView* _callTypeIconView;
	NSDictionary* _allViewsDictionary;
	long _buildConstraintsOnceToken;
	NSLayoutConstraint* _topConstraint;
	NSLayoutConstraint* _bottomConstraint;
	NSLayoutConstraint* _dateConstraint;
	NSLayoutConstraint* _dateYConstraint;
	NSLayoutConstraint* _labelConstraint;
	CHRecentCall* _call;

}

@property (nonatomic,retain) CHRecentCall * call;              //@synthesize call=_call - In the implementation block
@property (readonly) int count; 
@property (readonly) NSDictionary * allViews; 
@property (readonly) NSDictionary * allMetrics; 
+(float)editingMarginWidth;
+(id)allMetrics;
+(id)_sharedOutgoingFaceTimeImage;
+(id)_sharedOutgoingCallImage;
+(float)marginWidth;
-(void)setCall:(CHRecentCall *)arg1 ;
-(void)_handleContentSizeDidChange:(id)arg1 ;
-(NSDictionary *)allMetrics;
-(void)_updateFonts;
-(void)dealloc;
-(int)count;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(void)_buildConstraints;
-(void)_updateConstraints;
-(NSDictionary *)allViews;
-(CHRecentCall *)call;
@end

