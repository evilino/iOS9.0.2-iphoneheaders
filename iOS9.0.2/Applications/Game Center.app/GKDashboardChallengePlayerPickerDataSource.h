/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:08 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Game Center.app/Game Center
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Game Center/Game Center-Structs.h>
#import <Game Center/GKCollectionDataSource.h>

@class GKChallenge, NSArray, NSMutableDictionary;

@interface GKDashboardChallengePlayerPickerDataSource : GKCollectionDataSource {

	GKChallenge* _challenge;
	NSArray* _players;
	NSMutableDictionary* _playerStates;
	NSMutableDictionary* _playerAchievementDates;
	NSArray* _searchPlayers;

}

@property (nonatomic,readonly) NSArray * selectedPlayers; 
@property (nonatomic,retain) GKChallenge * challenge;                                   //@synthesize challenge=_challenge - In the implementation block
@property (nonatomic,retain) NSArray * players;                                         //@synthesize players=_players - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * playerStates;                        //@synthesize playerStates=_playerStates - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * playerAchievementDates;              //@synthesize playerAchievementDates=_playerAchievementDates - In the implementation block
@property (nonatomic,retain) NSArray * searchPlayers;                                   //@synthesize searchPlayers=_searchPlayers - In the implementation block
-(float)preferredCollectionHeight;
-(void)setPlayerStates:(NSMutableDictionary *)arg1 ;
-(void)setPlayerAchievementDates:(NSMutableDictionary *)arg1 ;
-(id)currentPlayers;
-(id)playerForIndexPath:(id)arg1 ;
-(void)setSearchPlayers:(NSArray *)arg1 ;
-(id)sectionHeaderText;
-(id)itemForIndexPath:(id)arg1 ;
-(id)indexPathForPlayer:(id)arg1 ;
-(void)searchTextHasChanged;
-(NSMutableDictionary *)playerStates;
-(NSMutableDictionary *)playerAchievementDates;
-(NSArray *)searchPlayers;
-(int)itemCount;
-(void)dealloc;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(char)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)clearSelection;
-(void)loadDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSArray *)players;
-(void)setPlayers:(NSArray *)arg1 ;
-(id)searchKeyForSection:(int)arg1 ;
-(NSArray *)selectedPlayers;
-(id)initWithChallenge:(id)arg1 ;
-(GKChallenge *)challenge;
-(void)setChallenge:(GKChallenge *)arg1 ;
-(void)setupCollectionView:(id)arg1 ;
@end

