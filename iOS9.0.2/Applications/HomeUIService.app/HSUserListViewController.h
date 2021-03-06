/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:11 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/HomeUIService.app/HomeUIService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <HomeUIService/HSUserListManagerTableDelegate.h>
#import <HomeUIService/HSUserManagementDelegate.h>

@protocol HSUserListViewControllerDelegate;
@class HSUserListTableManager, HMHome, NSString;

@interface HSUserListViewController : UITableViewController <HSUserListManagerTableDelegate, HSUserManagementDelegate> {

	id<HSUserListViewControllerDelegate> _delegate;
	HSUserListTableManager* _tableViewManager;

}

@property (nonatomic,retain) HMHome * home; 
@property (assign,nonatomic,__weak) id<HSUserListViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) HSUserListTableManager * tableViewManager;                         //@synthesize tableViewManager=_tableViewManager - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateHome:(id)arg1 ;
-(HSUserListTableManager *)tableViewManager;
-(char)_isUserListEmpty;
-(void)managerDidDismissWithError:(id)arg1 ;
-(void)managerDidSendInvitations:(id)arg1 ;
-(void)managerDidRemoveUser:(id)arg1 error:(id)arg2 ;
-(void)managerDidCancelInvite:(id)arg1 error:(id)arg2 ;
-(void)managerDidUpdateUserList;
-(void)setTableViewManager:(HSUserListTableManager *)arg1 ;
-(void)setDelegate:(id<HSUserListViewControllerDelegate>)arg1 ;
-(id)init;
-(id<HSUserListViewControllerDelegate>)delegate;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(void)viewDidLoad;
-(void)_updateEditButton;
-(void)_doneTapped;
-(HMHome *)home;
-(void)setHome:(HMHome *)arg1 ;
@end

