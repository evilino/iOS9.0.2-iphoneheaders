/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:28 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <Maps/MapsDebugViewController.h>

@protocol MapsDebugViewControllerDelegate, MapsDebugViewControllerNavigationDelegate;
@class NSString;

@interface AuxiliaryDebugViewController : UITableViewController <MapsDebugViewController> {

	id<MapsDebugViewControllerDelegate> _delegate;
	id<MapsDebugViewControllerNavigationDelegate> _navigationDelegate;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MapsDebugViewControllerDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<MapsDebugViewControllerNavigationDelegate> navigationDelegate;              //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
+(id)navigationDestinationTitle;
-(void)segueToViewController:(id)arg1 ;
-(void)willNavigateToSubsequentController:(id)arg1 ;
-(void)setDelegate:(id<MapsDebugViewControllerDelegate>)arg1 ;
-(id)init;
-(id<MapsDebugViewControllerDelegate>)delegate;
-(unsigned)supportedInterfaceOrientations;
-(char)shouldAutorotate;
-(void)_done;
-(id<MapsDebugViewControllerNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id<MapsDebugViewControllerNavigationDelegate>)arg1 ;
@end
