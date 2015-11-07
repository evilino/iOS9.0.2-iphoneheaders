/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:38 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UIViewController.h>
#import <MobileMail/MFTiltedTabViewDelegate.h>
#import <MobileMail/MFActorItemSnapshotCacheDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol OS_dispatch_queue, MFApplicationSceneDelegate;
@class UIView, UITapGestureRecognizer, UIPanGestureRecognizer, NSTimer, NSMapTable, NSObject, NSMutableArray, _MFActorItem, MFTiltedTabView, UIColor, MFActorItemSnapshotCache, SBSAssertion, NSArray, NSString;

@interface MFApplicationSceneController : UIViewController <MFTiltedTabViewDelegate, MFActorItemSnapshotCacheDelegate, UIGestureRecognizerDelegate> {

	UIView* _containerView;
	UIView* _sceneDimmingView;
	char _isPrimaryViewProstrated;
	char _isPrimaryViewConstricted;
	char _isWallpaperVisible;
	CGPoint _engagementPoint;
	UITapGestureRecognizer* _engageTapGesture;
	UIPanGestureRecognizer* _engagePanGesture;
	NSTimer* _purgingTimer;
	NSMapTable* _actorItemToDecayTimeMapTable;
	NSObject*<OS_dispatch_queue> _purgingQueue;
	NSMutableArray* _actorItems;
	_MFActorItem* _activeActorItem;
	_MFActorItem* _primaryActorItem;
	UIViewController* _primaryViewController;
	MFTiltedTabView* _tiltedTabView;
	char _exposeModeActivated;
	unsigned _tabItemIndexToSelect;
	_MFActorItem* _interactivelyAnimatingActorItem;
	UIColor* _opaqueBackgroundColor;
	MFActorItemSnapshotCache* _snapshotCache;
	SBSAssertion* _wallpaperSuspensionAssertion;
	char _automaticallyPurgesInactiveActors;
	id<MFApplicationSceneDelegate> _sceneDelegate;

}

@property (nonatomic,retain) UIViewController*<MFApplicationSceneActor> primaryViewController; 
@property (nonatomic,readonly) NSArray * actorViewControllers; 
@property (assign,nonatomic) char automaticallyPurgesInactiveActors;                                        //@synthesize automaticallyPurgesInactiveActors=_automaticallyPurgesInactiveActors - In the implementation block
@property (assign,getter=isExposeModeActivated,nonatomic) char exposeModeActivated;                         //@synthesize exposeModeActivated=_exposeModeActivated - In the implementation block
@property (assign,nonatomic) id<MFApplicationSceneDelegate> sceneDelegate;                                  //@synthesize sceneDelegate=_sceneDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_wallpaperColor;
+(id)_dimmedWallpaperColor;
+(char)_shouldForwardViewWillTransitionToSize;
-(void)withdrawActiveViewControllerAnimated:(char)arg1 ;
-(id)initWithPrimaryViewController:(UIViewController*)arg1 ;
-(void)setSceneDelegate:(id<MFApplicationSceneDelegate>)arg1 ;
-(void)setAutomaticallyPurgesInactiveActors:(char)arg1 ;
-(char)restoreStateFromDisk;
-(void)presentModalViewController:(UIViewController*)arg1 animated:(char)arg2 options:(id)arg3 ;
-(NSArray *)actorViewControllers;
-(void)dismissViewController:(UIViewController*)arg1 animated:(char)arg2 options:(id)arg3 ;
-(void)flushRestorableStateToDisk;
-(void)forciblyPurgeAllInactiveActorViewControllers;
-(void)dismissViewController:(UIViewController*)arg1 animated:(char)arg2 ;
-(void)_handleEngageTapGesture:(id)arg1 ;
-(void)_handleEngagePanGesture:(id)arg1 ;
-(void)_setWallpaperVisible:(char)arg1 animated:(char)arg2 duration:(double)arg3 ;
-(void)_layoutPrimaryViewControllerView;
-(void)_layoutActiveViewControllerView;
-(void)_layoutActorViewControllers;
-(void)_layoutPrimaryComponents;
-(void)_layoutTiltedTabView;
-(void)_suspendWallpaperAnimationIfNecessary;
-(void)_ensureSnapshotsAreUpToDate;
-(void)_didWithdrawActorItem:(id)arg1 ;
-(char)_sceneDelegateSupportsPurgingAndResurrection;
-(void)_purgeInactiveActorsTimerFired:(id)arg1 ;
-(void)_setPrimaryViewProstrated:(char)arg1 animated:(char)arg2 ;
-(void)_setDimmingViewDimmed:(char)arg1 animated:(char)arg2 ;
-(void)_setActorViewBordersVisible:(char)arg1 ;
-(char)_useRegularSizeClassBehavior;
-(float)_preferredWidthForActiveActorItem;
-(float)_cornerRadiusForActiveActorItem;
-(CGRect)_activeViewControllerFrame;
-(float)_bottomShelfHeight;
-(void)_setPrimaryViewConstrictedForBottomShelf:(char)arg1 ;
-(void)_layoutActorItem:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)_beginPurgingDecayForActorItemIfNecessary:(id)arg1 ;
-(void)_sceneStateDidChange;
-(void)_willWithdrawActorItem:(id)arg1 ;
-(char)_resurrectActorItemIfNecessary:(id)arg1 ;
-(id)primarySplitViewController;
-(void)_animate:(char)arg1 sceneForActiveActorItem:(id)arg2 ;
-(void)_setActiveActorItem:(id)arg1 animated:(char)arg2 ;
-(void)_purgeInactiveActorsBeyondDepthThreshold;
-(char)isExposeModeActivated;
-(void)setExposeModeActivated:(char)arg1 animated:(char)arg2 ;
-(id)_actorItemForActorViewController:(UIViewController*)arg1 createIfNecessary:(char)arg2 ;
-(void)_presentActorItem:(id)arg1 animated:(char)arg2 options:(id)arg3 ;
-(void)_dismissMarkedUpComposeFromOnTopOfQuickLook:(id)arg1 options:(id)arg2 ;
-(void)_removeActorItem:(id)arg1 ;
-(void)_purgeActorItem:(id)arg1 ;
-(id)_allSnapshotIdentifiers;
-(char)automaticallyPurgesInactiveActors;
-(id)_actorItemAtIndex:(unsigned)arg1 ;
-(id)_currentlyVisibleActorItems;
-(CGRect)_engagementRect;
-(void)_withdrawActiveActorItemKeyCommandInvoked:(id)arg1 ;
-(void)_makeTopActorItemActiveCommandInvoked:(id)arg1 ;
-(id)_actorItemForSnapshotIdentifier:(id)arg1 ;
-(id<MFApplicationSceneDelegate>)sceneDelegate;
-(id)_generateSnapshotImageForActorView:(id)arg1 ;
-(void)tiltedTabViewWillPresent:(id)arg1 ;
-(void)tiltedTabViewDidPresent:(id)arg1 ;
-(void)tiltedTabViewWillDismiss:(id)arg1 ;
-(void)tiltedTabViewDidDismiss:(id)arg1 ;
-(void)tiltedTabViewDidScroll:(id)arg1 ;
-(int)numberOfItemsInTiltedTabView:(id)arg1 ;
-(id)tiltedTabView:(id)arg1 contentViewForItemAtIndex:(unsigned)arg2 ;
-(id)tiltedTabView:(id)arg1 snapshotViewForItemAtIndex:(unsigned)arg2 ;
-(void)tiltedTabView:(id)arg1 relinquishContentView:(id)arg2 forItemAtIndex:(unsigned)arg3 ;
-(void)tiltedTabView:(id)arg1 relinquishSnapshotView:(id)arg2 forItemAtIndex:(unsigned)arg3 ;
-(void)tiltedTabView:(id)arg1 didSelectItemAtIndex:(unsigned)arg2 ;
-(char)tiltedTabView:(id)arg1 canCloseItemAtIndex:(unsigned)arg2 ;
-(void)tiltedTabView:(id)arg1 closeItemAtIndex:(unsigned)arg2 ;
-(void)tiltedTabView:(id)arg1 didMoveItemAtIndex:(unsigned)arg2 toIndex:(unsigned)arg3 ;
-(float)tiltedTabView:(id)arg1 headerHeightForItemAtIndex:(unsigned)arg2 ;
-(CGRect)tiltedTabView:(id)arg1 frameForItemAtIndex:(unsigned)arg2 ;
-(CATransform3D)tiltedTabView:(id)arg1 expanded:(char)arg2 layerTransformForItemAtIndex:(unsigned)arg3 ;
-(UIEdgeInsets)tiltedTabView:(id)arg1 expanded:(char)arg2 edgeInsetsForItemAtIndex:(unsigned)arg3 ;
-(float)tiltedTabView:(id)arg1 alphaValueForItemAtIndex:(unsigned)arg2 ;
-(id)snapshotCache:(id)arg1 updatedSnapshotForItemWithIdentifier:(id)arg2 ;
-(void)snapshotCache:(id)arg1 didCacheSnapshotForItemWithIdentifier:(id)arg2 ;
-(void)snapshotCache:(id)arg1 didEvictSnapshotForItemWithIdentifier:(id)arg2 ;
-(char)snapshotCache:(id)arg1 shouldEvictSnapshotForItemWithIdentifier:(id)arg2 ;
-(void)setExposeModeActivated:(char)arg1 ;
-(id)actorViewControllersOfKind:(Class)arg1 ;
-(char)_withdrawActiveActorItemKeyCommandIsAvailable;
-(void)_invalidatePurgingDecayForActorItem:(id)arg1 ;
-(id)allActorDescriptions;
-(void)dealloc;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(char)shouldAutorotate;
-(id)keyCommands;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)animationDidStop:(id)arg1 finished:(char)arg2 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLoad;
-(void)presentModalViewController:(UIViewController*)arg1 animated:(char)arg2 ;
-(id)_additionalViewControllersToCheckForUserActivity;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(UIViewController*)activeViewController;
-(UIViewController*<MFApplicationSceneActor>)primaryViewController;
-(void)setPrimaryViewController:(UIViewController*<MFApplicationSceneActor>)arg1 ;
@end
