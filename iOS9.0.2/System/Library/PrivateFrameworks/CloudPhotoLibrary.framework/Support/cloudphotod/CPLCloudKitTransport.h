/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:13 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLPlatformObject.h>
#import <libobjc.A.dylib/APSConnectionDelegate.h>
#import <cloudphotod/CPLEngineTransportImplementation.h>

@protocol OS_dispatch_queue;
@class NSObject, APSConnection, NSMapTable, NSMutableSet, NSMutableDictionary, CDSession, CKContainer, CKDatabase, CKRecord, CKRecordZone, CPLEngineLibrary, NSString;

@interface CPLCloudKitTransport : CPLPlatformObject <APSConnectionDelegate, CPLEngineTransportImplementation> {

	NSObject*<OS_dispatch_queue> _workQueue;
	APSConnection* _pushConnection;
	NSObject*<OS_dispatch_queue> _pushQueue;
	NSObject*<OS_dispatch_queue> _pendingOperationQueue;
	NSMapTable* _pendingOperations;
	NSMapTable* _progressPerOperations;
	NSMutableSet* _cancelledOperations;
	char _registeredPushSubscription;
	double _lastPushRegistrationTime;
	NSMutableDictionary* _duetTicketProvidersPerClientID;
	CDSession* _coreDuetSession;
	CKContainer* _container;
	char _stoppedWaitingForPush;
	CKDatabase* _database;
	CKRecord* _userRecord;
	CKRecordZone* _primaryZone;

}

@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) CKDatabase * database;                                        //@synthesize database=_database - In the implementation block
@property (nonatomic,retain) CKRecord * userRecord;                                        //@synthesize userRecord=_userRecord - In the implementation block
@property (nonatomic,retain) CKRecordZone * primaryZone;                                   //@synthesize primaryZone=_primaryZone - In the implementation block
@property (nonatomic,retain,readonly) CPLEngineLibrary * engineLibrary; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_betterErrorForRecordId:(id)arg1 recordError:(id)arg2 ;
+(char)_isCKErrorForRejectedRecord:(id)arg1 ;
+(id)_bestErrorForUnderlyingError:(id)arg1 ;
+(id)CloudKitKeyForResourceType:(unsigned)arg1 suffix:(id)arg2 ;
+(id)_errorsByTaskForTasksByRecordId:(id)arg1 fromUnderlyingError:(id)arg2 ;
+(void)_AddMappingsForResourceType:(unsigned)arg1 prefix:(id)arg2 ;
+(void)_AddMappingsForResourceTypes;
+(unsigned)ResourceTypeForCloudKitKey:(id)arg1 outSuffix:(id*)arg2 ;
+(char)HasCloudKitKeyForResourceType:(unsigned)arg1 ;
-(CKRecordZone *)primaryZone;
-(void)setupCloudWithCancelState:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setupPushWithCancelState:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchPrimaryZoneCreateIfNecessary:(char)arg1 proposedZoneName:(id)arg2 cancelState:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)downloadResourceForTask:(id)arg1 ;
-(void)uploadChangeBatch:(id)arg1 forSyncAnchor:(id)arg2 foreground:(char)arg3 cancelState:(id)arg4 progressHandler:(/*^block*/id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)getAssetCountsForeground:(char)arg1 cancelState:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)downloadNextChangeBatchForSyncAnchor:(id)arg1 foreground:(char)arg2 cancelState:(id)arg3 progressHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)uploadResource:(id)arg1 ofRecord:(id)arg2 foreground:(char)arg3 cancelState:(id)arg4 didStartHandler:(/*^block*/id)arg5 progressHandler:(/*^block*/id)arg6 completionHandler:(/*^block*/id)arg7 ;
-(void)publishResource:(id)arg1 foreground:(char)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_didCancelCKOperation:(id)arg1 ;
-(void)startWaitingForPushNotifications;
-(void)_resetPushSubscriptionState;
-(void)stopWaitingForPushNotificationsAndDeactivate:(char)arg1 ;
-(void)_cancelAllCKOperationsWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)CPLErrorForCloudKitError:(id)arg1 description:(id)arg2 arguments:(void*)arg3 ;
-(void)_setZoneStateEnabled:(char)arg1 withDisabledTime:(id)arg2 deleteTime:(id)arg3 ;
-(void)_didStartCKOperation:(id)arg1 ;
-(void)_didFinishCKOperation:(id)arg1 ;
-(void)processCPLErrorIfNeeded:(id)arg1 ;
-(int)_zoneIndexFromZoneName:(id)arg1 ;
-(id)CPLErrorForCloudKitError:(id)arg1 description:(id)arg2 ;
-(void)setPrimaryZone:(CKRecordZone *)arg1 ;
-(id)_CloudKitBaseChangeForRecordType:(id)arg1 fromCPLRecordChange:(id)arg2 ;
-(id)_CloudKitMasterFromCPLMasterChange:(id)arg1 clearMissingResources:(char)arg2 outError:(id*)arg3 ;
-(id)_CloudKitAssetFromCPLAssetChange:(id)arg1 clearMissingResources:(char)arg2 outError:(id*)arg3 ;
-(id)_CloudKitContainerFromFromCPLAlbumChange:(id)arg1 ;
-(id)_CloudKitContainerRelationChangeFromCPLContainerRelationChange:(id)arg1 ;
-(id)_CloudKitPersonChangeFromCPLPersonChange:(id)arg1 ;
-(int)_qualityOfServiceForForegroundState:(char)arg1 ;
-(id)_duetTicketForOperation:(id)arg1 clientBundleID:(id)arg2 foreground:(char)arg3 ;
-(void)_CKOperation:(id)arg1 didProgress:(double)arg2 ;
-(void)_updateDownloadOperation:(id)arg1 withCellularAccessForResource:(id)arg2 isForeground:(char)arg3 isHighPriority:(char)arg4 ;
-(id)_assetCountsFromCKRecord:(id)arg1 ;
-(void)_downloadNextChangeBatchForSyncAnchor:(id)arg1 foreground:(char)arg2 cancelState:(id)arg3 progressHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)_createChangeBatchFromUpdates:(id)arg1 deletions:(id)arg2 ;
-(id)_CPLMasterChangeFromCloudKitMaster:(id)arg1 withChangeType:(unsigned)arg2 ;
-(id)_CPLAssetChangeFromCloudKitAsset:(id)arg1 withChangeType:(unsigned)arg2 ;
-(id)_CPLAlbumChangeFromCloudKitAlbum:(id)arg1 withChangeType:(unsigned)arg2 ;
-(id)_CPLPersonChangeFromCloudKitPerson:(id)arg1 withChangeType:(unsigned)arg2 ;
-(id)_CPLContainerRelationChangeFromCloudKitContainerRelation:(id)arg1 withChangeType:(unsigned)arg2 ;
-(void)_updateLocalZoneStateFromCloudKitZoneState:(id)arg1 ;
-(void)_updateLibraryInfoFromCKRecord:(id)arg1 ;
-(void)_updateFingerPrint:(id)arg1 inResourceIdentity:(id)arg2 incoherentErrorDescription:(id*)arg3 ;
-(void)_updatePropertyInResourceIdentity:(id)arg1 forSuffix:(id)arg2 withValue:(id)arg3 incoherentErrorDescription:(id*)arg4 ;
-(void)_updateBaseCPLRecordChange:(id)arg1 fromCloudKitRecord:(id)arg2 ;
-(void)_addResourcesFromCloudKitRecord:(id)arg1 toFinalResources:(id)arg2 withIdentifier:(id)arg3 isCoherent:(char*)arg4 ;
-(void)_updateRemapInfoInCPLRecordChange:(id)arg1 withCloudKitRecord:(id)arg2 ;
-(id)_validatedObjectForKey:(id)arg1 fromDict:(id)arg2 validateClass:(Class)arg3 ;
-(id)_CLLocationFromCPLLocationDict:(id)arg1 ;
-(id)_CPLPlaceAnnotationFromDictionary:(id)arg1 ;
-(void)_addResourceValuesForResourceType:(unsigned)arg1 imageWidth:(id)arg2 imageHeight:(id)arg3 fileSize:(id)arg4 fileUTI:(id)arg5 fingerPrint:(id)arg6 resourceFileURL:(id)arg7 setResource:(char)arg8 toCloudKitRecord:(id)arg9 ;
-(void)_clearResourceWithType:(unsigned)arg1 inCloudKitRecord:(id)arg2 ;
-(id)_addResourcesFromCPLResources:(id)arg1 clearMissing:(char)arg2 clearResourceIfNecessary:(char)arg3 toCloudKitRecord:(id)arg4 ;
-(id)_CPLLocationFromCLLocation:(id)arg1 ;
-(id)_dictionaryFromCPLPlaceAnnotation:(id)arg1 ;
-(id)newCKRecordFromCPLRecordChange:(id)arg1 withRecordType:(id)arg2 recordID:(id)arg3 ;
-(void)_updateBaseCloudKitRecord:(id)arg1 fromCPLRecordChange:(id)arg2 ;
-(char)_operationUsesBackgroundSession:(id)arg1 ;
-(id)_pendingOperationsStatus;
-(void)_emitLogForCurrentOperations;
-(id)_budgetDescriptionForDuetTicketProvider:(id)arg1 ;
-(id)_imagePrefixForresourceType:(unsigned)arg1 ;
-(id)componentName;
-(void)openWithCompletionHandler:(/*^block*/id)arg1 ;
-(CKRecord *)userRecord;
-(void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4 ;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2 ;
-(void)setUserRecord:(CKRecord *)arg1 ;
-(CPLEngineLibrary *)engineLibrary;
-(void)closeAndDeactivate:(char)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getStatusWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getStatusDictionaryWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)setupTaskCreateLibraryIfNecessary:(char)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)uploadBatchTaskForBatch:(id)arg1 progressHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)downloadBatchTaskForSyncAnchor:(id)arg1 progressHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)getAssetCountsTaskWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)resourceDownloadTaskForResource:(id)arg1 clientBundleID:(id)arg2 didStartHandler:(/*^block*/id)arg3 progressHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(char)canBatchResourceDownloadTasks:(id)arg1 :(id)arg2 ;
-(void)runResourceDownloadTasks:(id)arg1 ;
-(id)resourcePublishTaskForResource:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)removeLibraryTaskWithCompletionHandler:(/*^block*/id)arg1 ;
-(char)supportsDelayedUploads;
-(id)resourceUploadTaskForResource:(id)arg1 ofRecord:(id)arg2 didStartHandler:(/*^block*/id)arg3 progressHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)bestErrorForUnderlyingError:(id)arg1 ;
-(id)simpleDataForSyncAnchor:(id)arg1 ;
-(id)initWithAbstractObject:(id)arg1 ;
-(void)setDatabase:(CKDatabase *)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)noteClientIsInForeground;
-(void)noteClientIsInBackground;
-(id)preferredFileExtensionForType:(id)arg1 ;
-(void)removeCloudLibraryWithCompletionHandler:(/*^block*/id)arg1 ;
-(CKDatabase *)database;
@end

