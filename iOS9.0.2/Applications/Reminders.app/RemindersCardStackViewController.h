/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:57 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Reminders.app/Reminders
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Reminders/Reminders-Structs.h>
#import <UIKit/UIViewController.h>
#import <Reminders/RemindersCardStackViewDataSource.h>
#import <Reminders/RemindersCardStackViewDelegate.h>
#import <Reminders/RemindersArchiving.h>
#import <Reminders/RemindersNewListControllerDelegate.h>
#import <Reminders/RemindersListControllerDelegate.h>
#import <Reminders/RemindersSearchControllerDelegate.h>
#import <Reminders/RemindersInvitationControllerDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>

@class RemindersCardStackView, RemindersCategoryListController, UIView, RemindersCardController, EKCalendar, RemindersDetailEditorController, RemindersSearchController, NSString;

@interface RemindersCardStackViewController : UIViewController <RemindersCardStackViewDataSource, RemindersCardStackViewDelegate, RemindersArchiving, RemindersNewListControllerDelegate, RemindersListControllerDelegate, RemindersSearchControllerDelegate, RemindersInvitationControllerDelegate, UIScrollViewDelegate> {

	RemindersCardStackView* _stackView;
	RemindersCategoryListController* _highlightedList;
	UIView* _containerView;
	RemindersCardController* _newListCard;
	CGPoint _scrollOffsetAtDragStart;
	float _originalCardHeight;
	char _isDeleting;
	EKCalendar* _reorderingCalendar;
	EKCalendar* _cachedInvitation;
	RemindersDetailEditorController* _detailController;
	char _needsReload;
	char _hasPerformedInitialLoad;
	char _showingNewListCard;
	RemindersSearchController* _searchController;

}

@property (readonly) RemindersSearchController * searchController;              //@synthesize searchController=_searchController - In the implementation block
@property (assign) char needsReload;                                            //@synthesize needsReload=_needsReload - In the implementation block
@property (assign) char hasPerformedInitialLoad;                                //@synthesize hasPerformedInitialLoad=_hasPerformedInitialLoad - In the implementation block
@property (assign) char showingNewListCard;                                     //@synthesize showingNewListCard=_showingNewListCard - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)_shouldForwardViewWillTransitionToSize;
-(void)invitationControllerDeclined:(id)arg1 ;
-(void)invitationControllerAccepted:(id)arg1 ;
-(void)applyArchive:(id)arg1 ;
-(void)highlightReminder:(id)arg1 withSearchTerm:(id)arg2 ;
-(id)sortedCalendars;
-(id)displayedCard;
-(void)eventStoreChangedWithChangedObjectIDs:(id)arg1 ;
-(void)alarmsFired;
-(void)displayCalendar:(id)arg1 ;
-(void)displayScheduledCard;
-(char)listControllerIsOnTop:(id)arg1 ;
-(void)listControllerBeganEditing:(id)arg1 ;
-(void)listControllerEndedEditing:(id)arg1 ;
-(void)listControllerFinishedLoadingData:(id)arg1 ;
-(void)listControllerDeletedList:(id)arg1 atIndex:(int)arg2 ;
-(void)resizeToSize:(CGSize)arg1 ;
-(void)swapDisplayedCard:(id)arg1 ;
-(void)searchController:(id)arg1 willBecomeActive:(char)arg2 ;
-(void)searchController:(id)arg1 didSelectReminder:(id)arg2 forSearchTerm:(id)arg3 ;
-(void)searchControllerDidTapActionButton:(id)arg1 ;
-(void)newListControllerCreatedList:(id)arg1 ;
-(void)newListControllerCanceledList:(id)arg1 ;
-(id)cardAtIndex:(int)arg1 ;
-(char)cardStackView:(id)arg1 cardShouldSlideBackIntoStackWhenDismissed:(id)arg2 ;
-(float)cardSpacing;
-(void)cardStackViewDidPresentCard:(id)arg1 ;
-(void)cardStackView:(id)arg1 willAddGestureRecognizer:(id)arg2 toCardAtIndex:(int)arg3 ;
-(void)cardStackView:(id)arg1 didDismissCard:(id)arg2 ;
-(int)indexOfCard:(id)arg1 ;
-(int)cardStackView:(id)arg1 targetIndexForMoveFromIndex:(int)arg2 toProposedIndex:(int)arg3 ;
-(void)cardStackView:(id)arg1 cardDidMoveFromIndex:(int)arg2 toIndex:(int)arg3 ;
-(void)cardStackViewDidEndReordering:(id)arg1 ;
-(char)cardStackView:(id)arg1 canReorderCardAtIndex:(int)arg2 ;
-(void)deleteCard:(id)arg1 atIndex:(int)arg2 ;
-(void)_loadInitialList;
-(void)_reloadStack;
-(char)hasPerformedInitialLoad;
-(void)setHasPerformedInitialLoad:(char)arg1 ;
-(char)showingNewListCard;
-(int)numberOfInvitations;
-(void)setShowingNewListCard:(char)arg1 ;
-(void)_loadSecondaryListsIfNeeded;
-(void)createReminder;
-(void)cancelAddReminder;
-(void)showNewListCard;
-(void)unhighlightReminder;
-(void)setNeedsReload:(char)arg1 ;
-(id)archive;
-(id)_stackView;
-(id)searchViewController;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(int)state;
-(void)loadView;
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)endEditing;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(RemindersSearchController *)searchController;
-(int)numberOfCards;
-(char)needsReload;
@end
