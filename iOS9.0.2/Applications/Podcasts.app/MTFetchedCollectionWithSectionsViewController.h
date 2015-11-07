/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:51 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <UIKit/UICollectionViewController.h>
#import <Podcasts/MTSectionHeaderViewDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <Podcasts/MTResultsControllerDelegate.h>

@class NSMutableDictionary, MTCollectionSectionHeaderView, MTCompositeResultsController, UIRefreshControl, NSArray, NSString;

@interface MTFetchedCollectionWithSectionsViewController : UICollectionViewController <MTSectionHeaderViewDelegate, UICollectionViewDelegateFlowLayout, MTResultsControllerDelegate> {

	NSMutableDictionary* _frcChangesDict;
	MTCollectionSectionHeaderView* _floatingHeaderView;
	MTCompositeResultsController* _compositeResultsController;
	UIRefreshControl* _refreshControl;
	unsigned _frcState;
	NSArray* _sections;

}

@property (nonatomic,retain) MTCompositeResultsController * compositeResultsController;              //@synthesize compositeResultsController=_compositeResultsController - In the implementation block
@property (nonatomic,retain) UIRefreshControl * refreshControl;                                      //@synthesize refreshControl=_refreshControl - In the implementation block
@property (assign) unsigned frcState;                                                                //@synthesize frcState=_frcState - In the implementation block
@property (nonatomic,retain) NSArray * sections;                                                     //@synthesize sections=_sections - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCompositeFetchedResultsController:(id)arg1 ;
-(void)registerCollectionViewClasses;
-(void)_willUpdateCollectionView:(id)arg1 ;
-(id)reuseIdentifierForItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg1 configureCell:(id)arg2 withObject:(id)arg3 atIndexPath:(id)arg4 ;
-(id)indexPathsForObject:(id)arg1 ;
-(MTCompositeResultsController *)compositeResultsController;
-(void)setCompositeResultsController:(MTCompositeResultsController *)arg1 ;
-(void)collectionView:(id)arg1 configureReusableView:(id)arg2 ofSupplementaryElementOfKind:(id)arg3 forItemAtIndexPath:(id)arg4 ;
-(char)hideHeaderForEmptySection:(int)arg1 ;
-(id)initWithCollectionViewLayout:(id)arg1 compositeFetchedResultsController:(id)arg2 ;
-(void)_didUpdateCollectionView:(id)arg1 ;
-(void)reloadDataSource;
-(unsigned)frcState;
-(void)setFrcState:(unsigned)arg1 ;
-(id)createSectionCountDictionary;
-(char)updatesContainsInsertSection:(id)arg1 sectionCountDict:(id)arg2 ;
-(char)updatesContainsDeleteSection:(id)arg1 sectionCountDict:(id)arg2 ;
-(char)updatesContainChanges:(id)arg1 ;
-(void)updateCollectionViewForUpdates:(id)arg1 animated:(char)arg2 ;
-(void)updateCollectionViewForUpdates:(id)arg1 ;
-(id)collectionView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned)arg4 newIndexPath:(id)arg5 ;
-(void)controllerDidChangeContent:(id)arg1 ;
-(void)controllerWillChangeContent:(id)arg1 ;
-(id)objectAtIndexPath:(id)arg1 ;
-(id)indexPathForObject:(id)arg1 ;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)viewDidLoad;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(int)arg3 ;
-(void)setRefreshControl:(UIRefreshControl *)arg1 ;
-(UIRefreshControl *)refreshControl;
-(void)setSections:(NSArray *)arg1 ;
-(NSArray *)sections;
@end
