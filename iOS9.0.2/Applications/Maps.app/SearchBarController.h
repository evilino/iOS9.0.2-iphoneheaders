/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/MapDimmingViewDelegate.h>
#import <Maps/CollectionsViewControllerDelegate.h>
#import <Maps/SearchBarVariantRegularViewControllerProvider.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <Maps/BrowseManagerObserver.h>
#import <Maps/SearchCompletionsTableViewControllerDelegate.h>
#import <UIKit/UITextFieldDelegate.h>
#import <UIKit/UIKeyboardInput.h>
#import <Maps/MainChromeTopBarContentProvider.h>

@protocol SearchBarControllerDelegate;
@class SearchFieldItem, SearchBarVariantCompact, SearchBarVariantRegular, SearchCompletionsTableViewController, MapDimmingView, SearchBarEditSession, CollectionsViewController, BlurView, NSString, MainChromeViewController, SearchBar, SearchResult, MKSearchCompletion, GEOSearchCategory;

@interface SearchBarController : NSObject <MapDimmingViewDelegate, CollectionsViewControllerDelegate, SearchBarVariantRegularViewControllerProvider, UIPopoverPresentationControllerDelegate, BrowseManagerObserver, SearchCompletionsTableViewControllerDelegate, UITextFieldDelegate, UIKeyboardInput, MainChromeTopBarContentProvider> {

	id<SearchBarControllerDelegate> _delegate;
	SearchFieldItem* _searchItem;
	SearchBarVariantCompact* _searchBarCompressed;
	SearchBarVariantRegular* _searchBarRegular;
	SearchCompletionsTableViewController* _searchCompletionsController;
	char _explicitlyResigningFirstResponder;
	float _leftEdgeOfTextForHorizontalScroll;
	char _isShowingDimmingView;
	MapDimmingView* _mapDimmingView;
	SearchBarEditSession* _editSession;
	char _fullscreenCompletionsEnabled;
	char _searchBarWasActiveBeforeContentChange;
	char _hadCompletionsBeforeContentChange;
	char _forceUpdate;
	CollectionsViewController* _collectionsViewController;
	BlurView* _blurView;
	NSString* _lastQuery;
	MainChromeViewController* _chromeViewController;

}

@property (assign,nonatomic,__weak) id<SearchBarControllerDelegate> delegate;                                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) SearchBar * searchBar; 
@property (nonatomic,readonly) SearchCompletionsTableViewController * completionsViewController; 
@property (nonatomic,readonly) SearchCompletionsTableViewController * completionsViewControllerIfExists; 
@property (nonatomic,retain) NSString * searchString; 
@property (nonatomic,retain) SearchResult * searchResult; 
@property (nonatomic,retain) MKSearchCompletion * searchCompletion; 
@property (nonatomic,retain) GEOSearchCategory * searchCategory; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) MainChromeViewController * chromeViewController;                                         //@synthesize chromeViewController=_chromeViewController - In the implementation block
-(id)collectionsViewController;
-(int)collectionsMode;
-(int)searchMode;
-(void)chromeViewController:(id)arg1 topBarWillMoveFromContent:(id)arg2 toContent:(id)arg3 ;
-(MainChromeViewController *)chromeViewController;
-(void)chromeViewController:(id)arg1 topBarDidMoveFromContent:(id)arg2 toContent:(id)arg3 ;
-(void)setChromeViewController:(MainChromeViewController *)arg1 ;
-(id)topBarContentForVariant:(int)arg1 ;
-(void)browseManagerStateUpdated;
-(id)_popoverPresentationView;
-(CGRect)_popoverPresentationRect;
-(id)presentationSourceForDirectionsSearch;
-(char)isShowingCollections;
-(id)presentationSourceForShareSheet;
-(void)layoutForUnobscuredBoundsChange;
-(void)closeCollectionsViewController:(id)arg1 ;
-(void)collectionsViewController:(id)arg1 didShowCategory:(id)arg2 ;
-(void)collectionsViewController:(id)arg1 choseCategory:(id)arg2 ;
-(void)collectionsViewController:(id)arg1 choseHistoryItem:(id)arg2 ;
-(void)collectionsViewController:(id)arg1 choseAddress:(id)arg2 ;
-(void)collectionsViewController:(id)arg1 choseBookmark:(id)arg2 ;
-(void)searchCompletionsTableViewController:(id)arg1 scrollViewDidScroll:(id)arg2 ;
-(void)searchCompletionsTableViewController:(id)arg1 hasCompletionsForQuery:(id)arg2 ;
-(void)searchCompletionsTableViewController:(id)arg1 receivedNoCompletionsForQuery:(id)arg2 ;
-(void)searchCompletionsTableViewController:(id)arg1 didSelectCategoryResult:(id)arg2 ;
-(void)searchCompletionsTableViewController:(id)arg1 didSelectPopularNearbyResult:(id)arg2 ;
-(void)searchCompletionsTableViewController:(id)arg1 didShowCategory:(id)arg2 ;
-(void)searchCompletionsTableViewController:(id)arg1 didSelectCategory:(id)arg2 ;
-(void)searchCompletionsTableViewControllerDidSelectCollectionsButton:(id)arg1 ;
-(void)searchCompletionsTableViewController:(id)arg1 didSelectSearchCompletion:(id)arg2 forQuery:(id)arg3 ;
-(void)searchCompletionsTableViewController:(id)arg1 didSelectQueryCompletion:(id)arg2 forQuery:(id)arg3 ;
-(id)quickActionMenuHandlerForSearchCompletionsController:(id)arg1 ;
-(void)searchCompletionsTableViewController:(id)arg1 didSelectHistoryItem:(id)arg2 forQuery:(id)arg3 ;
-(void)_updateSearchFieldView;
-(void)_restoreOriginalSearchString;
-(void)showCollections;
-(void)cancelButtonWasTapped;
-(char)isCompletionsPopoverVisible;
-(char)_endEditingAnimated:(char)arg1 ;
-(SearchCompletionsTableViewController *)completionsViewController;
-(id)_currentSearchBar;
-(void)dismissCollectionsAnimated:(char)arg1 ;
-(SearchCompletionsTableViewController *)completionsViewControllerIfExists;
-(void)_setSearchString:(id)arg1 forCompletedQuery:(id)arg2 ;
-(void)showFullscreenCompletions:(char)arg1 animated:(char)arg2 ;
-(id)currentCategory;
-(char)textFieldShouldReturn;
-(id)_mapDimmingView;
-(void)clearBrowseCategory;
-(void)clearCategory;
-(void)showCollectionsWithMode:(int)arg1 ;
-(void)showDimmingView:(char)arg1 ;
-(void)_fadeMapDimmingViewAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(void)_performWithEachSearchBar:(/*^block*/id)arg1 ;
-(void)_clearMapResults;
-(char)resignFirstResponderAnimated:(char)arg1 ;
-(void)_setPopularNearbyResult:(id)arg1 ;
-(id)searchCompletionsControllerCreatingIfNeeded:(char)arg1 ;
-(void)mapDimmingViewWasTapped:(id)arg1 ;
-(id)collectionsViewControllerCreatingIfNeeded:(char)arg1 ;
-(void)searchCompletionsTableViewController:(id)arg1 didCommitPreviewForSearchResult:(id)arg2 withCenterCoordinate:(SCD_Struct_RA7)arg3 zoomLevel:(float)arg4 ;
-(void)searchCompletionsTableViewControllerDismissImmediately:(id)arg1 ;
-(void)clearSearchField;
-(void)setDelegate:(id<SearchBarControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<SearchBarControllerDelegate>)delegate;
-(char)resignFirstResponder;
-(id)initWithDelegate:(id)arg1 ;
-(char)keyboardInputShouldDelete:(id)arg1 ;
-(char)textFieldShouldBeginEditing:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(char)textFieldShouldEndEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(char)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(char)textFieldShouldClear:(id)arg1 ;
-(char)textFieldShouldReturn:(id)arg1 ;
-(SearchBar *)searchBar;
-(NSString *)searchString;
-(void)prepareForPopoverPresentation:(id)arg1 ;
-(void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(inout CGRect*)arg2 inView:(inout id*)arg3 ;
-(void)setSearchString:(NSString *)arg1 ;
-(void)setSearchCompletion:(MKSearchCompletion *)arg1 ;
-(MKSearchCompletion *)searchCompletion;
-(char)_endEditing;
-(void)setSearchResult:(SearchResult *)arg1 ;
-(SearchResult *)searchResult;
-(GEOSearchCategory *)searchCategory;
-(char)hasCategory;
-(void)setSearchCategory:(GEOSearchCategory *)arg1 ;
-(void)_textFieldDidChange:(id)arg1 ;
@end
