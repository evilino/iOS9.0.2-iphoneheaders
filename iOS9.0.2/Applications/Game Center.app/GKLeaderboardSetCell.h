/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:09 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Game Center.app/Game Center
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Game Center/GKLeaderboardListCell.h>

@class UILabel;

@interface GKLeaderboardSetCell : GKLeaderboardListCell

@property (nonatomic,readonly) UILabel * leaderboardsLabel; 
+(void)initialize;
+(void)registerCellClassesWithCollectionView:(id)arg1 ;
+(float)defaultRowHeight;
-(id)leaderboardSet;
-(UILabel *)leaderboardsLabel;
-(void)didUpdateModel;
@end
