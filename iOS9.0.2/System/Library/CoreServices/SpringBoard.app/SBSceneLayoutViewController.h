/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIViewController.h>
#import <SpringBoard/SBAppViewHostRequester.h>
#import <SpringBoard/SBLayoutElementViewControllerDelegate.h>
#import <SpringBoard/SBDisplayLayoutContext.h>
#import <SpringBoard/SBWorkspaceTransitionLayoutDelegate.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol SBSceneLayoutViewControllerDelegate;
@class FBSDisplay, SBLayoutState, SBWorkspaceTransitionContext, FBDisplayLayoutTransition, NSMutableDictionary, FBDisplayLayoutElement, UIView, SBLayoutElementViewController, NSArray, NSString;

@interface SBSceneLayoutViewController : UIViewController <SBAppViewHostRequester, SBLayoutElementViewControllerDelegate, SBDisplayLayoutContext, SBWorkspaceTransitionLayoutDelegate, BSDescriptionProviding> {

	FBSDisplay* _display;
	SBLayoutState* _layoutState;
	id<SBSceneLayoutViewControllerDelegate> _delegate;
	SBLayoutState* _transitioningFromLayoutState;
	SBLayoutState* _transitioningToLayoutState;
	SBWorkspaceTransitionContext* _transitionContext;
	FBDisplayLayoutTransition* _displayLayoutTransition;
	NSMutableDictionary* _layoutElementControllersByRole;
	NSMutableDictionary* _previousLayoutElementControllersByRole;
	NSMutableDictionary* _reusableLayoutElementControllers;
	FBDisplayLayoutElement* _homescreenLayoutElement;
	char _userResizing;
	UIView* _sceneContainerView;

}

@property (nonatomic,retain,readonly) FBSDisplay * display;                                                        //@synthesize display=_display - In the implementation block
@property (nonatomic,retain) SBLayoutState * layoutState;                                                          //@synthesize layoutState=_layoutState - In the implementation block
@property (nonatomic,retain,readonly) SBLayoutElementViewController * primaryLayoutElementController; 
@property (nonatomic,retain,readonly) NSArray * layoutElementControllers; 
@property (nonatomic,retain,readonly) NSArray * appViewControllers; 
@property (nonatomic,readonly) char hasVisibleElements; 
@property (assign,getter=isUserResizing,nonatomic) char userResizing;                                              //@synthesize userResizing=_userResizing - In the implementation block
@property (assign,nonatomic) id<SBSceneLayoutViewControllerDelegate> delegate;                                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView * sceneContainerView;                                                          //@synthesize sceneContainerView=_sceneContainerView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)mainDisplayLayoutViewController;
+(Class)_layoutStateClass;
-(char)handleMenuButtonPress;
-(int)_layoutOrientation;
-(int)_layoutOrientationForInterfaceOrientation:(int)arg1 ;
-(id)layoutStateForTransitionContext:(id)arg1 ;
-(id)originalLayoutStateForTransitionContext:(id)arg1 ;
-(CGRect)transitionContext:(id)arg1 referenceFrameForEntity:(id)arg2 ;
-(id)_layoutElementControllerForLayoutRole:(int)arg1 ;
-(id)_transitioningFromLayoutElementControllerForLayoutRole:(int)arg1 ;
-(id)animationWrapperViewForLayoutState:(id)arg1 interfaceOrientation:(int)arg2 ;
-(id)animationWrapperViewForLayoutState:(id)arg1 roleMask:(unsigned)arg2 interfaceOrientation:(int)arg3 ;
-(int)appViewRequesterPriority:(id)arg1 ;
-(id)appViewRequesterIdentifier:(id)arg1 ;
-(id)appViewForApplication:(id)arg1 inLayoutRole:(int)arg2 withLayoutContext:(id)arg3 hostRequester:(id)arg4 ;
-(void)_beginLayoutStateTransitionWithContext:(id)arg1 ;
-(void)_endLayoutStateTransitionForContext:(id)arg1 ;
-(void)_endLayoutStateTransitionForFailedTransactionWithContext:(id)arg1 ;
-(NSArray *)appViewControllers;
-(CGRect)referenceFrameForIdentifier:(id)arg1 inLayoutState:(id)arg2 ;
-(void)setSceneContainerView:(UIView *)arg1 ;
-(id)_transitioningLayoutElementControllers;
-(id)_existingLayoutElementControllerWithElementIdentifier:(id)arg1 ;
-(id)_dequeueLayoutElementControllerForReuseOfClass:(Class)arg1 ;
-(void)_addLayoutElementViewController:(id)arg1 forLayoutElement:(id)arg2 entity:(id)arg3 ;
-(void)_enqueueLayoutViewControllerForReuse:(id)arg1 ;
-(SBLayoutElementViewController *)primaryLayoutElementController;
-(id)animationControllerForTransitionRequest:(id)arg1 ;
-(char)_isCurrentlyTransitioning;
-(id)coordinateSpaceForInterfaceOrientation:(int)arg1 ;
-(id)_transitioningFromLayoutState;
-(id)_transitioningAppViewControllers;
-(id)_animationWrapperViewForElement:(id)arg1 layoutState:(id)arg2 ;
-(id)adornmentViewForApplication:(id)arg1 inLayoutRole:(int)arg2 withLayoutContext:(id)arg3 ;
-(id)appViewForWorkspaceApplication:(id)arg1 inLayoutState:(id)arg2 ;
-(id)appViewForApplication:(id)arg1 inLayoutRole:(int)arg2 withLayoutContext:(id)arg3 ;
-(CGSize)_referenceSizeForRole:(int)arg1 withLayoutContext:(id)arg2 ;
-(id)coordinateSpaceForLayoutContext:(id)arg1 ;
-(CGRect)referenceBoundsForEntity:(id)arg1 inLayoutState:(id)arg2 ;
-(CGRect)referenceFrameForEntity:(id)arg1 inLayoutState:(id)arg2 ;
-(id)_previousLayoutElementControllerWithElementIdentifier:(id)arg1 ;
-(void)_addViewControllerForLayoutElement:(id)arg1 entity:(id)arg2 ;
-(char)_presentationChangesSignificantlyOnTransitioningFromLayoutElement:(id)arg1 toLayoutElement:(id)arg2 ;
-(void)_layoutElementViewController:(id)arg1 transitioningFromLayoutElement:(id)arg2 toLayoutElement:(id)arg3 ;
-(void)_configureVisibilityForCurrentLayoutState;
-(void)_doCommonCleanupUponEndingLayoutTransitionWithContext:(id)arg1 ;
-(void)_cleanupDisappearedLayoutElementController:(id)arg1 ;
-(char)_shouldRepositionViewAfterTransition:(id)arg1 ;
-(char)_shouldAdjustViewAffordancesAfterTransition:(id)arg1 ;
-(int)_dimmingLevelForElement:(id)arg1 inLayout:(id)arg2 ;
-(void)_verifyLayoutElementControllersAreValidForCurrentLayoutState;
-(int)_transitioningFromLayoutOrientation;
-(int)_transitioningToLayoutOrientation;
-(char)_shouldRotateToLayoutOrientation:(int)arg1 ;
-(char)shouldAllowSwipeInDimmingViewAtStartLocation:(CGPoint)arg1 forLayoutElementViewController:(id)arg2 ;
-(void)layoutElementViewController:(id)arg1 configureDisplayLayoutElement:(id)arg2 ;
-(NSArray *)layoutElementControllers;
-(char)hasVisibleElements;
-(char)shouldPerformFullscreenAnimationForTransitionRequest:(id)arg1 ;
-(id)animationControllerForRotatingWithTransitionRequest:(id)arg1 ;
-(id)composedAnimationControllerForZoomingUpToLayoutState:(id)arg1 using:(id)arg2 ;
-(id)composedAnimationControllerForZoomingDownWithTransitionRequest:(id)arg1 using:(id)arg2 ;
-(id)composedAnimationControllerForDosidoWithTransitionRequest:(id)arg1 using:(id)arg2 ;
-(id)animationWrapperViewForLayoutState:(id)arg1 ;
-(id)animationWrapperViewForLayoutState:(id)arg1 roleMask:(unsigned)arg2 ;
-(id)appViewForWorkspaceApplication:(id)arg1 ;
-(void)__testCoordinateSpaceStuff;
-(CGRect)referenceBoundsForEntity:(id)arg1 ;
-(CGRect)referenceBoundsForIdentifier:(id)arg1 inLayoutState:(id)arg2 ;
-(CGRect)referenceFrameForEntity:(id)arg1 ;
-(id)_transitioningToLayoutState;
-(id)_transitionContext;
-(void)_updateLayoutStateWithContext:(id)arg1 ;
-(char)_isCurrentlyRotating;
-(char)isUserResizing;
-(void)setUserResizing:(char)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<SBSceneLayoutViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(id<SBSceneLayoutViewControllerDelegate>)delegate;
-(unsigned)supportedInterfaceOrientations;
-(FBSDisplay *)display;
-(char)shouldAutorotate;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)coordinateSpace;
-(void)viewWillLayoutSubviews;
-(SBLayoutState *)layoutState;
-(void)setLayoutState:(SBLayoutState *)arg1 ;
-(id)initWithDisplay:(id)arg1 ;
-(void)_invalidate;
-(void)handleDimmingViewTapForLayoutElementViewController:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(UIView *)sceneContainerView;
@end
