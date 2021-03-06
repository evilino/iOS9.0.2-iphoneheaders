/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:26 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UITableView, UIView, NSString, RAPTablePart, RAPTablePartsDataSource;

@interface RAPTablePartSection : NSObject {

	UITableView* _tableView;
	UIView* _headerView;
	UIView* _footerView;
	NSString* _headerTitle;
	NSString* _footerTitle;
	RAPTablePart* _partController;

}

@property (nonatomic,__weak,readonly) RAPTablePart * partController;                                                 //@synthesize partController=_partController - In the implementation block
@property (nonatomic,__weak,readonly) UITableView * tableView;                                                       //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,readonly) RAPTablePartsDataSource * dataSource; 
@property (nonatomic,readonly) int sectionIndex; 
@property (nonatomic,readonly) UIViewController*<RAPPresentingViewController> presentingViewController; 
@property (nonatomic,readonly) int rowsCount; 
@property (nonatomic,retain) UIView * headerView;                                                                    //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) UIView * footerView;                                                                    //@synthesize footerView=_footerView - In the implementation block
@property (nonatomic,copy) NSString * headerTitle;                                                                   //@synthesize headerTitle=_headerTitle - In the implementation block
@property (nonatomic,copy) NSString * footerTitle;                                                                   //@synthesize footerTitle=_footerTitle - In the implementation block
@property (nonatomic,readonly) float headerHeight; 
@property (nonatomic,readonly) float footerHeight; 
-(id)cellForRowAtIndex:(int)arg1 ;
-(int)rowsCount;
-(void)didSelectCellForRowAtIndex:(int)arg1 tableIndexPath:(id)arg2 ;
-(void)registerReuseIdentifiersForCells;
-(char)usesAutoLayoutForRowAtIndex:(int)arg1 ;
-(void)holdChangesAffectingTableViewWithinBlock:(/*^block*/id)arg1 ;
-(void)_reloadHeaderFooterWithAnimation:(int)arg1 ;
-(void)tableViewTintColorDidChange;
-(void)registerClass:(Class)arg1 forNamespacedReuseIdentifier:(id)arg2 ;
-(void)didChange;
-(void)_registerReuseIdentifiersIfNeeded;
-(void)_setPartController:(id)arg1 ;
-(void)commitEdit:(int)arg1 forRowAtIndex:(int)arg2 tableViewIndexPath:(id)arg3 ;
-(id)dequeueDefaultStyleCell;
-(void)presentingViewControllerViewDidLayoutSubviews;
-(RAPTablePart *)partController;
-(id)namespacedReuseIdentifierWithSuffix:(id)arg1 ;
-(id)dequeueCellWithNamespacedReuseIdentifier:(id)arg1 creationBlock:(/*^block*/id)arg2 ;
-(void)reloadWithRowAnimation:(int)arg1 ;
-(id)dequeueCellWithNamespacedReuseIdentifier:(id)arg1 ;
-(int)sectionIndex;
-(id)init;
-(RAPTablePartsDataSource *)dataSource;
-(UIViewController*<RAPPresentingViewController>)presentingViewController;
-(UITableView *)tableView;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(float)heightForRowAtIndex:(int)arg1 ;
-(float)headerHeight;
-(float)footerHeight;
-(NSString *)headerTitle;
-(void)setHeaderTitle:(NSString *)arg1 ;
-(NSString *)footerTitle;
-(void)setFooterTitle:(NSString *)arg1 ;
-(UIView *)footerView;
-(void)setFooterView:(UIView *)arg1 ;
-(char)canEditRowAtIndex:(int)arg1 ;
@end

