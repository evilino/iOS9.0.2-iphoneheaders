/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:16 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/SUManagerClientInterface.h>

@protocol SUManagerClientDelegate;
@class NSXPCConnection, SUDescriptor, NSMutableDictionary;

@interface SUManagerClient : NSObject <SUManagerClientInterface> {

	NSXPCConnection* _serverConnection;
	id<SUManagerClientDelegate> _delegate;
	char _connected;
	char _serverIsExiting;
	int _clientType;
	char _installing;
	SUDescriptor* _installDescriptor;
	SUDescriptor* _scanDescriptor;
	NSMutableDictionary* _installOperationIDsToOperationHandler;

}

@property (assign,nonatomic) id<SUManagerClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int clientType;                                    //@synthesize clientType=_clientType - In the implementation block
@property (nonatomic,retain) SUDescriptor * installDescriptor;                  //@synthesize installDescriptor=_installDescriptor - In the implementation block
@property (nonatomic,retain) SUDescriptor * scanDescriptor;                     //@synthesize scanDescriptor=_scanDescriptor - In the implementation block
+(char)_shouldDisallowAvailabilityNotifications;
-(id)_remoteInterface;
-(void)setDelegate:(id<SUManagerClientDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<SUManagerClientDelegate>)delegate;
-(void)invalidate;
-(id)initWithDelegate:(id)arg1 ;
-(void)startDownload:(/*^block*/id)arg1 ;
-(void)cancelDownload:(/*^block*/id)arg1 ;
-(void)updateDownloadMetadata:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(char)isInstallationKeybagRequired;
-(void)installUpdate:(/*^block*/id)arg1 ;
-(char)createInstallationKeybag:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 clientType:(int)arg2 ;
-(void)isUpdateReadyForInstallation:(/*^block*/id)arg1 ;
-(void)isScanning:(/*^block*/id)arg1 ;
-(void)startDownloadWithMetadata:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(void)currentAutoInstallOperation:(char)arg1 withResult:(/*^block*/id)arg2 ;
-(void)scanForUpdates:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(void)deviceHasSufficientSpaceForDownload:(/*^block*/id)arg1 ;
-(void)_consentAutoInstallOperation:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(void)autoInstallOperationDidConsent:(id)arg1 ;
-(void)_cancelAutoInstallOperation:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(void)autoInstallOperationWasCancelled:(id)arg1 ;
-(void)autoInstallOperationDidExpire:(id)arg1 ;
-(void)setClientType:(int)arg1 ;
-(void)connectToServerIfNecessary;
-(void)_invalidateConnection;
-(id)_remoteInterfaceWithErrorHandler:(/*^block*/id)arg1 connectIfNecessary:(char)arg2 ;
-(void)_setClientType;
-(id)_remoteInterfaceWithErrorHandler:(/*^block*/id)arg1 ;
-(void)isDownloading:(/*^block*/id)arg1 ;
-(void)pauseDownload:(/*^block*/id)arg1 ;
-(void)purgeDownload:(/*^block*/id)arg1 ;
-(void)_registerAutoInstallOperationClientHandler:(id)arg1 ;
-(char)createInstallationKeybag:(id)arg1 forUnattendedInstall:(char)arg2 ;
-(void)scanRequestDidStartForOptions:(id)arg1 ;
-(void)scanRequestDidFinishForOptions:(id)arg1 update:(id)arg2 error:(id)arg3 ;
-(void)scanDidCompleteWithNewUpdateAvailable:(id)arg1 error:(id)arg2 ;
-(void)automaticDownloadDidFailToStartForNewUpdateAvailable:(id)arg1 withError:(id)arg2 ;
-(void)downloadWasInvalidatedForNewUpdateAvailable:(id)arg1 ;
-(void)downloadDidStart:(id)arg1 ;
-(void)downloadProgressDidChange:(id)arg1 ;
-(void)downloadDidFail:(id)arg1 withError:(id)arg2 ;
-(void)installDidStart:(id)arg1 ;
-(void)installDidFail:(id)arg1 withError:(id)arg2 ;
-(void)installDidFinish:(id)arg1 ;
-(void)autoInstallOperationIsReadyToInstall:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(void)noteConnectionDropped;
-(void)setInstallDescriptor:(SUDescriptor *)arg1 ;
-(void)_unregisterAutoInstallOperationClientHandler:(id)arg1 ;
-(unsigned long long)totalPurgeableSpace;
-(void)noteServerExiting;
-(int)clientType;
-(SUDescriptor *)installDescriptor;
-(SUDescriptor *)scanDescriptor;
-(void)setScanDescriptor:(SUDescriptor *)arg1 ;
-(void)download:(/*^block*/id)arg1 ;
-(void)downloadDidFinish:(id)arg1 ;
-(void)resumeDownload:(/*^block*/id)arg1 ;
@end

