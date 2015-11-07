/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:40 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileNotes/MobileNotes-Structs.h>
#import <UIKit/UISplitViewController.h>
#import <UIKit/UISplitViewControllerDelegate.h>

@protocol ICSplitViewControllerDelegate;
@class UINavigationController, UIView, UILabel, NSArray, NSMutableArray, UIViewController;

@interface ICSplitViewController : UISplitViewController <UISplitViewControllerDelegate> {

	char _detailDimmed;
	UINavigationController* _masterNavigationController;
	UINavigationController* _detailNavigationController;
	id<ICSplitViewControllerDelegate> _icSplitViewControllerDelegate;
	UIView* _detailDimmingView;
	UILabel* _dimViewTitleLabel;
	NSArray* _dimmedRightBarButtonItems;
	NSArray* _dimmedToolbarItems;
	NSMutableArray* _dismissDetailDimmingBlocks;
	NSMutableArray* _dimViewTitles;

}

@property (nonatomic,retain) UINavigationController * masterNavigationController;                                 //@synthesize masterNavigationController=_masterNavigationController - In the implementation block
@property (nonatomic,retain) UINavigationController * detailNavigationController;                                 //@synthesize detailNavigationController=_detailNavigationController - In the implementation block
@property (nonatomic,readonly) UIViewController * currentNoteEditorController; 
@property (assign,nonatomic,__weak) id<ICSplitViewControllerDelegate> icSplitViewControllerDelegate;              //@synthesize icSplitViewControllerDelegate=_icSplitViewControllerDelegate - In the implementation block
@property (assign,getter=isDetailDimmed,nonatomic) char detailDimmed;                                             //@synthesize detailDimmed=_detailDimmed - In the implementation block
@property (nonatomic,readonly) char isDisplayingOverlayOnPad; 
@property (nonatomic,retain) UIView * detailDimmingView;                                                          //@synthesize detailDimmingView=_detailDimmingView - In the implementation block
@property (nonatomic,retain) UILabel * dimViewTitleLabel;                                                         //@synthesize dimViewTitleLabel=_dimViewTitleLabel - In the implementation block
@property (nonatomic,copy) NSArray * dimmedRightBarButtonItems;                                                   //@synthesize dimmedRightBarButtonItems=_dimmedRightBarButtonItems - In the implementation block
@property (nonatomic,copy) NSArray * dimmedToolbarItems;                                                          //@synthesize dimmedToolbarItems=_dimmedToolbarItems - In the implementation block
@property (nonatomic,retain) NSMutableArray * dismissDetailDimmingBlocks;                                         //@synthesize dismissDetailDimmingBlocks=_dismissDetailDimmingBlocks - In the implementation block
@property (nonatomic,retain) NSMutableArray * dimViewTitles;                                                      //@synthesize dimViewTitles=_dimViewTitles - In the implementation block
-(void)setDismissDetailDimmingBlocks:(NSMutableArray *)arg1 ;
-(void)setDimViewTitles:(NSMutableArray *)arg1 ;
-(char)isDetailDimmed;
-(void)updateDetailDimmingViewFrame;
-(void)showPrimaryControllerAnimated:(char)arg1 ;
-(UINavigationController *)detailNavigationController;
-(UIViewController *)currentNoteEditorController;
-(id)legacyNoteEditorController;
-(char)hasLegacyNoteEditorController;
-(id)noteEditorController;
-(void)switchToNoteEditorControllerIfNecessary:(id)arg1 ;
-(void)showDetailViewController:(id)arg1 animated:(char)arg2 sender:(id)arg3 ;
-(char)isNoteEditorControllerVisible;
-(void)cancelDetailDimmingIfNecessary;
-(id<ICSplitViewControllerDelegate>)icSplitViewControllerDelegate;
-(id)listControllerForCurrentNoteEditor;
-(char)allowsLandscapeOrientation;
-(NSMutableArray *)dismissDetailDimmingBlocks;
-(UIView *)detailDimmingView;
-(void)setDetailDimmed:(char)arg1 ;
-(void)setDetailDimmingView:(UIView *)arg1 ;
-(void)setDimViewTitleLabel:(UILabel *)arg1 ;
-(UILabel *)dimViewTitleLabel;
-(NSMutableArray *)dimViewTitles;
-(void)setDetailDimmed:(char)arg1 animated:(char)arg2 title:(id)arg3 ;
-(void)setDimmedRightBarButtonItems:(NSArray *)arg1 ;
-(void)setDimmedToolbarItems:(NSArray *)arg1 ;
-(void)setDimViewTitle:(id)arg1 animated:(char)arg2 ;
-(NSArray *)dimmedRightBarButtonItems;
-(NSArray *)dimmedToolbarItems;
-(void)updateNoteEditorNavigation;
-(void)switchToNoteEditorController;
-(void)switchToLegacyNoteEditorController;
-(void)showDetailViewControllerAnimated:(char)arg1 sender:(id)arg2 ;
-(void)dismissPrimaryControllerAnimated:(char)arg1 ;
-(void)dimDetailViewWithTitle:(id)arg1 dismissBlock:(/*^block*/id)arg2 animated:(char)arg3 ;
-(void)undimDetailViewAnimated:(char)arg1 ;
-(char)isDisplayingOverlayOnPad;
-(void)setDetailNavigationController:(UINavigationController *)arg1 ;
-(void)setIcSplitViewControllerDelegate:(id<ICSplitViewControllerDelegate>)arg1 ;
-(id)mainNavigationController;
-(char)isDisplayControllerVisible;
-(void)showLegacyListControllerAnimated:(char)arg1 ;
-(void)showDisplayControllerAnimated:(char)arg1 ;
-(void)dismissDisplayControllerAnimated:(char)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(unsigned)supportedInterfaceOrientations;
-(char)shouldAutorotate;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLoad;
-(char)splitViewController:(id)arg1 collapseSecondaryViewController:(id)arg2 ontoPrimaryViewController:(id)arg3 ;
-(id)splitViewController:(id)arg1 separateSecondaryViewControllerFromPrimaryViewController:(id)arg2 ;
-(char)_splitViewControllerIsPrimaryVisible:(id)arg1 ;
-(void)splitViewController:(id)arg1 willChangeToDisplayMode:(int)arg2 ;
-(int)targetDisplayModeForActionInSplitViewController:(id)arg1 ;
-(UINavigationController *)masterNavigationController;
-(void)setMasterNavigationController:(UINavigationController *)arg1 ;
@end
