/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:11:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@protocol OS_dispatch_semaphore;
@class NSSManager, NRDevice, NSObject, NSNumber;

@interface COSAboutController : PSListController {

	char _hasFetchedAboutInfo;
	char _errorHasOccurred;
	NSSManager* _nssManager;
	NRDevice* _device;
	NSObject*<OS_dispatch_semaphore> _registrySemaphore;
	NSNumber* _numberOfApps;
	NSNumber* _numberOfSongs;
	NSNumber* _numberOfPhotos;
	unsigned long long _storageAvailable;

}

@property (nonatomic,retain) NSSManager * nssManager;                                         //@synthesize nssManager=_nssManager - In the implementation block
@property (nonatomic,retain) NRDevice * device;                                               //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> registrySemaphore;              //@synthesize registrySemaphore=_registrySemaphore - In the implementation block
@property (assign,nonatomic) char hasFetchedAboutInfo;                                        //@synthesize hasFetchedAboutInfo=_hasFetchedAboutInfo - In the implementation block
@property (assign,nonatomic) char errorHasOccurred;                                           //@synthesize errorHasOccurred=_errorHasOccurred - In the implementation block
@property (nonatomic,retain) NSNumber * numberOfApps;                                         //@synthesize numberOfApps=_numberOfApps - In the implementation block
@property (nonatomic,retain) NSNumber * numberOfSongs;                                        //@synthesize numberOfSongs=_numberOfSongs - In the implementation block
@property (nonatomic,retain) NSNumber * numberOfPhotos;                                       //@synthesize numberOfPhotos=_numberOfPhotos - In the implementation block
@property (assign,nonatomic) unsigned long long storageAvailable;                             //@synthesize storageAvailable=_storageAvailable - In the implementation block
-(char)errorHasOccurred;
-(void)setErrorHasOccurred:(char)arg1 ;
-(void)setHasFetchedAboutInfo:(char)arg1 ;
-(void)setNumberOfApps:(NSNumber *)arg1 ;
-(void)setNumberOfSongs:(NSNumber *)arg1 ;
-(void)setStorageAvailable:(unsigned long long)arg1 ;
-(id)guardedUint64StringValue:(unsigned long long)arg1 ;
-(id)getNumberOfSongs:(id)arg1 ;
-(id)getNumberOfPhotos:(id)arg1 ;
-(id)getNumberOfApps:(id)arg1 ;
-(id)getStorageAvailable:(id)arg1 ;
-(id)getDeviceName:(id)arg1 ;
-(id)getStorageCapacity:(id)arg1 ;
-(id)getSystemVersion:(id)arg1 ;
-(id)getDeviceModel:(id)arg1 ;
-(id)getWiFiAddress:(id)arg1 ;
-(id)getBTAddress:(id)arg1 ;
-(void)tappedAppleLegalLink;
-(void)showUserManual:(id)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)registrySemaphore;
-(void)setRegistrySemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(char)hasFetchedAboutInfo;
-(NSNumber *)numberOfApps;
-(NSNumber *)numberOfSongs;
-(unsigned long long)storageAvailable;
-(id)specifiers;
-(NSNumber *)numberOfPhotos;
-(void)setNumberOfPhotos:(NSNumber *)arg1 ;
-(id)init;
-(void)viewWillDisappear:(char)arg1 ;
-(NSSManager *)nssManager;
-(void)setNssManager:(NSSManager *)arg1 ;
-(NRDevice *)device;
-(id)getSerialNumber:(id)arg1 ;
-(id)dash;
-(void)setDeviceName:(id)arg1 specifier:(id)arg2 ;
-(void)setDevice:(NRDevice *)arg1 ;
@end

