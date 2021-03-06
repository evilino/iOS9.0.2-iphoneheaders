/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:56 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <PassKit/PKPassFaceView.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITextViewDelegate.h>

@class UIRefreshControl, UILabel, UIButton, PKLinkedAppView, UIView, UITableView, PKSettingTableCell, NSArray, NSMutableDictionary, NSTimer, BluetoothManager, NSString;

@interface PKPassBackFaceView : PKPassFaceView <UITableViewDataSource, UITableViewDelegate, UITextViewDelegate> {

	UIRefreshControl* _refreshControl;
	char _tall;
	UILabel* _updateDateLabel;
	UIButton* _doneButton;
	PKLinkedAppView* _linkedApp;
	UIView* _locationHelpView;
	UITableView* _bodyTable;
	PKSettingTableCell* _automaticUpdates;
	PKSettingTableCell* _showInLockScreen;
	PKSettingTableCell* _automaticSelection;
	NSArray* _rowCountBySection;
	unsigned _settingsSection;
	unsigned _automaticSelectionSection;
	unsigned _linkedAppSection;
	unsigned _fieldsSection;
	NSMutableDictionary* _fieldCellsByIndexPath;
	NSTimer* _refreshTimeoutTimer;
	BluetoothManager* _btManager;
	char _isBluetoothEnabled;
	char _isLocationEnabled;
	char _isWifiEnabled;
	char _showsDelete;
	char _showsLinkedApp;
	char _showsSettings;
	char _showsLinks;

}

@property (assign,nonatomic) char showsSettings;                       //@synthesize showsSettings=_showsSettings - In the implementation block
@property (assign,nonatomic) char showsDelete;                         //@synthesize showsDelete=_showsDelete - In the implementation block
@property (assign,nonatomic) char showsLinks;                          //@synthesize showsLinks=_showsLinks - In the implementation block
@property (assign,nonatomic) char showsLinkedApp;                      //@synthesize showsLinkedApp=_showsLinkedApp - In the implementation block
@property (assign,nonatomic) PKLinkedAppView * linkedApp;              //@synthesize linkedApp=_linkedApp - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)isWifiEnabled;
+(id)_linkColor;
+(id)_linkTextAttributes;
-(void)_passSettingsChanged:(id)arg1 ;
-(id)initTall:(char)arg1 ;
-(char)isFrontFace;
-(id)_relevantBuckets;
-(void)createBodyInvariantViews;
-(void)_wifiChanged:(id)arg1 ;
-(void)_bluetoothPowerChanged:(id)arg1 ;
-(char)showsLinks;
-(id)_locationRelevancyHelpText;
-(PKLinkedAppView *)linkedApp;
-(id)_settingsCellForRow:(unsigned)arg1 ;
-(id)_automaticSelectionCell;
-(id)_fieldCellForIndexPath:(id)arg1 ;
-(id)_locationHelpViewForTableView:(id)arg1 ;
-(id)_fieldForIndexPath:(id)arg1 ;
-(void)pushSettingsFromViewToModel;
-(void)_refreshTimeoutFired;
-(id)_updateLabelAttributedStringWithDate:(id)arg1 ;
-(id)_updateLabelAttributedStringWithString:(id)arg1 ;
-(char)shouldAllowRefresh;
-(void)refreshControlValueChanged:(id)arg1 ;
-(char)showsDelete;
-(void)_deleteButtonPressed:(id)arg1 ;
-(char)deleteEnabled;
-(char)showUpdateDateLabel;
-(char)_linkedAppAvailable;
-(char)_settingsAvailable;
-(void)setupRefreshControl:(id)arg1 ;
-(void)setShowsLinks:(char)arg1 ;
-(char)_isBluetoothEnabled;
-(char)showBackgroundMatte;
-(void)setShowsDelete:(char)arg1 ;
-(char)showsLinkedApp;
-(void)setShowsLinkedApp:(char)arg1 ;
-(char)showsSettings;
-(void)setShowsSettings:(char)arg1 ;
-(void)setLinkedApp:(PKLinkedAppView *)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(float)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
-(CGSize)contentSize;
-(void)willMoveToSuperview:(id)arg1 ;
-(char)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 ;
-(void)_doneButtonPressed:(id)arg1 ;
@end

