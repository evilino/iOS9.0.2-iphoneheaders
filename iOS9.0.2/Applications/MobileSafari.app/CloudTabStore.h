/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SafariShared/WBSCloudTabStore.h>

@protocol CloudTabStoreDelegate;
@class WBSEncryptedCloudKeyValueStore, NSTimer;

@interface CloudTabStore : WBSCloudTabStore {

	WBSEncryptedCloudKeyValueStore* _syncedDevicesStore;
	WBSEncryptedCloudKeyValueStore* _userRequestsStore;
	NSTimer* _refreshTimer;
	int _periodicUpdateRequestCount;
	id<CloudTabStoreDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CloudTabStoreDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)cloudTabForTabDocument:(id)arg1 ;
-(char)cloudTabsAreEnabled;
-(void)_syncedDevicesStoreDidUpdate:(id)arg1 ;
-(void)_userRequestsStoreDidUpdate:(id)arg1 ;
-(void)clearTabsForCurrentDeviceWithCompletion:(/*^block*/id)arg1 ;
-(void)saveCurrentDeviceCloudTabs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(char)canSaveCloudTabsForCurrentDevice;
-(void)_removeConflictingDevice;
-(void)saveCurrentDeviceCloudTabs:(id)arg1 ;
-(void)_requestUpdateFromServer;
-(void)_refreshTimerDidFire:(id)arg1 ;
-(id)_storeForIdentifier:(int)arg1 ;
-(void)_cloudTabsEnabledDidChange;
-(void)_clearAllDevices;
-(void)saveCurrentDeviceTabsFromSuspendState;
-(void)startPerformingPeriodicUpdates;
-(void)stopPerformingPeriodicUpdates;
-(void)saveCurrentDeviceTabDocuments:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)currentDevice;
-(void)setDelegate:(id<CloudTabStoreDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<CloudTabStoreDelegate>)delegate;
-(void)clearTabsForCurrentDevice;
-(id)_keyValueStoreDictionaryRepresentation:(int)arg1 ;
-(void)_removeObjectFromKeyValueStore:(int)arg1 forKey:(id)arg2 ;
-(id)_currentDeviceUUID;
-(void)_closeRequestedTabIfPossible:(id)arg1 ;
-(void)_setDictionaryInKeyValueStore:(int)arg1 dictionary:(id)arg2 forKey:(id)arg3 ;
-(id)syncedCloudTabDevices;
@end
