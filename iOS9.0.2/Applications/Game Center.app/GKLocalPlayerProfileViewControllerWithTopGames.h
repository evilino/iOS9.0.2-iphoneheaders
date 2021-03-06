/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:08 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Game Center.app/Game Center
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Game Center/Game Center-Structs.h>
#import <Game Center/GKLocalPlayerProfileViewController.h>

@class GKGamesViewController, _GKCollectionViewWrapperAdaptorView, NSLayoutConstraint;

@interface GKLocalPlayerProfileViewControllerWithTopGames : GKLocalPlayerProfileViewController {

	char _didSetConstraints;
	GKGamesViewController* _topGamesViewController;
	_GKCollectionViewWrapperAdaptorView* _topGamesViewWrapperView;
	NSLayoutConstraint* _topGamesWrapperViewWidthConstraint;
	UIEdgeInsets _contentInsetsBeforeKeyboard;
	UIEdgeInsets _scrollInsetsBeforeKeyboard;

}

@property (nonatomic,retain) GKGamesViewController * topGamesViewController;                             //@synthesize topGamesViewController=_topGamesViewController - In the implementation block
@property (nonatomic,retain) _GKCollectionViewWrapperAdaptorView * topGamesViewWrapperView;              //@synthesize topGamesViewWrapperView=_topGamesViewWrapperView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * topGamesWrapperViewWidthConstraint;                    //@synthesize topGamesWrapperViewWidthConstraint=_topGamesWrapperViewWidthConstraint - In the implementation block
@property (assign,nonatomic) char didSetConstraints;                                                     //@synthesize didSetConstraints=_didSetConstraints - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsetsBeforeKeyboard;                                   //@synthesize contentInsetsBeforeKeyboard=_contentInsetsBeforeKeyboard - In the implementation block
@property (assign,nonatomic) UIEdgeInsets scrollInsetsBeforeKeyboard;                                    //@synthesize scrollInsetsBeforeKeyboard=_scrollInsetsBeforeKeyboard - In the implementation block
-(void)adjustConstraintsForOrientation:(int)arg1 ;
-(_GKCollectionViewWrapperAdaptorView *)topGamesViewWrapperView;
-(void)setTopGamesWrapperViewWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)topGamesWrapperViewWidthConstraint;
-(GKGamesViewController *)topGamesViewController;
-(void)setTopGamesViewController:(GKGamesViewController *)arg1 ;
-(void)setTopGamesViewWrapperView:(_GKCollectionViewWrapperAdaptorView *)arg1 ;
-(char)didSetConstraints;
-(void)setDidSetConstraints:(char)arg1 ;
-(UIEdgeInsets)contentInsetsBeforeKeyboard;
-(void)setContentInsetsBeforeKeyboard:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)scrollInsetsBeforeKeyboard;
-(void)setScrollInsetsBeforeKeyboard:(UIEdgeInsets)arg1 ;
-(void)dealloc;
-(id)init;
-(void)loadView;
-(char)shouldAutomaticallyForwardRotationMethods;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)didUpdateModel;
-(char)automaticallyForwardAppearanceMethods;
-(id)viewsToAnimateInWhileAppearingWithBubbleFlow;
-(void)keyboardWillShow:(id)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
@end

