/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:37:06 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PDDatabaseManagerDelegate, PDDatabaseManagerWebServicesDelegate, PDDatabaseManagerPaymentServicesDelegate, PDDatabaseManagerNotificationServicesDelegate;
@class NSURL, PKSecureElement, SQLiteDatabase, PDObjectSettingsManager;

@interface PDDatabaseManager : NSObject {

	NSURL* _databaseURL;
	PKSecureElement* _secureElement;
	SQLiteDatabase* _database;
	id<PDDatabaseManagerDelegate> _delegate;
	id<PDDatabaseManagerWebServicesDelegate> _webServicesDelegate;
	PDObjectSettingsManager* _objectSettingsManager;
	id<PDDatabaseManagerPaymentServicesDelegate> _paymentServicesDelegate;
	id<PDDatabaseManagerNotificationServicesDelegate> _notificationServicesDelegate;

}

@property (nonatomic,retain,readonly) SQLiteDatabase * database;                                                          //@synthesize database=_database - In the implementation block
@property (nonatomic,retain) PDObjectSettingsManager * objectSettingsManager;                                             //@synthesize objectSettingsManager=_objectSettingsManager - In the implementation block
@property (assign,nonatomic) id<PDDatabaseManagerDelegate> delegate;                                                      //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) id<PDDatabaseManagerWebServicesDelegate> webServicesDelegate;                                //@synthesize webServicesDelegate=_webServicesDelegate - In the implementation block
@property (assign,nonatomic) id<PDDatabaseManagerPaymentServicesDelegate> paymentServicesDelegate;                        //@synthesize paymentServicesDelegate=_paymentServicesDelegate - In the implementation block
@property (assign,nonatomic) id<PDDatabaseManagerNotificationServicesDelegate> notificationServicesDelegate;              //@synthesize notificationServicesDelegate=_notificationServicesDelegate - In the implementation block
+(char)databaseExistsAtURL:(id)arg1 ;
-(char)verifyIntegrity;
-(id)paymentApplicationWithDPANIdentifier:(id)arg1 ;
-(char)passExistsWithUniqueID:(id)arg1 ;
-(void)updatePass:(id)arg1 source:(int)arg2 ;
-(id)passWithUniqueIdentifier:(id)arg1 ;
-(void)insertPass:(id)arg1 source:(int)arg2 ;
-(char)hasAnyTransactionsForPassWithUniqueIdentifier:(id)arg1 ;
-(char)hasAnyMessagesForPassWithUniqueIdentifier:(id)arg1 ;
-(id)insertOrUpdatePaymentMessage:(id)arg1 forPassUniqueIdentifier:(id)arg2 paymentApplication:(id)arg3 ;
-(void)prepareToDeletePassWithUniqueIdentifier:(id)arg1 ;
-(void)deletePassWithUniqueIdentifier:(id)arg1 ;
-(char)uniqueIDIsRevoked:(id)arg1 ;
-(void)updateRevocationStatus:(char)arg1 forUniqueID:(id)arg2 ;
-(id)uniqueIDForPassWithPassTypeID:(id)arg1 serialNumber:(id)arg2 ;
-(void)updateModifiedSource:(int)arg1 forUniqueID:(id)arg2 ;
-(unsigned)numberOfRealPasses;
-(void)introduceMissingUniqueID;
-(void)introduceExtraneousUniqueID;
-(void)introduceDuplicateUniqueID;
-(id)allPaymentApplications;
-(id)insertOrUpdatePaymentTransaction:(id)arg1 forPassUniqueIdentifier:(id)arg2 paymentApplication:(id)arg3 ;
-(id)effectiveCatalog;
-(id)latestVisibleTransactionForPassWithUniqueIdentifier:(id)arg1 includingSources:(unsigned)arg2 ;
-(void)applyCatalogOfRecord:(id)arg1 ;
-(void)computeExtraneousUniqueIDs:(id*)arg1 missingUniqueIDs:(id*)arg2 ;
-(char)passExistsWithPassType:(unsigned)arg1 ;
-(id)deviceSpecificPaymentApplications;
-(void)setPaymentServicesDelegate:(id<PDDatabaseManagerPaymentServicesDelegate>)arg1 ;
-(id)valueAddedServiceTransactionWithIdentifier:(id)arg1 ;
-(void)valueAddedMerchantWasPresented:(id)arg1 ;
-(void)getCatalog:(id*)arg1 passes:(id*)arg2 ofPassTypes:(unsigned)arg3 limitResults:(char)arg4 ;
-(id)passesForInAppPaymentOnNetworks:(id)arg1 ;
-(id)passUniqueIdentifiersForFieldProperties:(id)arg1 ;
-(id)passesEnabledForValuedAddedServicesWithAutomaticSelection:(char)arg1 ;
-(unsigned)countPassesOfType:(unsigned)arg1 ;
-(id)passWithPassTypeID:(id)arg1 serialNumber:(id)arg2 ;
-(id)candidatePassesOfStyle:(int)arg1 activatingBetweenStart:(id)arg2 end:(id)arg3 ;
-(unsigned)settingsForPass:(id)arg1 ;
-(char)passExistsWithPassTypeID:(id)arg1 serialNumber:(id)arg2 ;
-(void)updateSettings:(unsigned)arg1 forObjectWithUniqueIdentifier:(id)arg2 ;
-(char)hasCandidatePasses;
-(char)getPassTypeID:(id*)arg1 teamID:(id*)arg2 forUniqueID:(id)arg3 ;
-(void)updateSettings:(unsigned)arg1 forPassWithUniqueIdentifier:(id)arg2 ;
-(void)nukeDatabase;
-(void)setNotificationServicesDelegate:(id<PDDatabaseManagerNotificationServicesDelegate>)arg1 ;
-(id)notificationServices;
-(id)passesForNotificationService:(id)arg1 ;
-(void)updateNotificationService:(id)arg1 ;
-(id)notificationServicesForPushTopic:(id)arg1 ;
-(char)notificationServiceIsEnabledForAnyPasses:(id)arg1 ;
-(id)primaryPaymentApplicationForPassUniqueIdentifier:(id)arg1 ;
-(unsigned)registrationStatusForNotificationServiceType:(unsigned)arg1 passUniqueIdentifier:(id)arg2 ;
-(id)lastUpdatedDateForNotificationServiceType:(unsigned)arg1 passUniqueIdentifier:(id)arg2 ;
-(id)lastUpdatedTagForNotificationServiceType:(unsigned)arg1 passUniqueIdentifier:(id)arg2 ;
-(char)settingEnabled:(unsigned)arg1 forPass:(id)arg2 ;
-(void)updateRegistrationStatus:(unsigned)arg1 forNotificationServiceType:(unsigned)arg2 passUniqueIdentifier:(id)arg3 ;
-(void)updateLastUpdatedDate:(id)arg1 forNotificationServiceType:(unsigned)arg2 passUniqueIdentifier:(id)arg3 ;
-(void)updateLastUpdatedTag:(id)arg1 forNotificationServiceType:(unsigned)arg2 passUniqueIdentifier:(id)arg3 ;
-(void)updateLastUpdatedDate:(id)arg1 forNotificationService:(id)arg2 ;
-(void)updateLastUpdatedTag:(id)arg1 forNotificationService:(id)arg2 ;
-(void)deleteAllTransactionsFromPaymentPassWithUniqueIdentifier:(id)arg1 ;
-(void)deleteAllMessagesFromPaymentPassWithUniqueIdentifier:(id)arg1 ;
-(id)paymentApplicationsForNotificationService:(id)arg1 ;
-(id)passWithPaymentApplication:(id)arg1 ;
-(id)passUniqueIdentifierWithPaymentApplication:(id)arg1 ;
-(void)updateAuthenticationToken:(id)arg1 forNotificationService:(id)arg2 ;
-(void)updateAppLaunchToken:(id)arg1 forNotificationService:(id)arg2 ;
-(id)passUniqueIdentifierWithPrimaryAccountIdentifier:(id)arg1 ;
-(char)settingEnabled:(unsigned)arg1 forPassWithUniqueIdentifier:(id)arg2 ;
-(void)truncateTransactionsFromPaymentPassWithUniqueIdentifier:(id)arg1 toCount:(unsigned)arg2 ;
-(void)truncateMessagesFromPaymentPassWithUniqueIdentifier:(id)arg1 toCount:(unsigned)arg2 ;
-(id)insertOrUpdatePaymentTransaction:(id)arg1 forPassUniqueIdentifier:(id)arg2 paymentApplication:(id)arg3 withInsertionMode:(unsigned)arg4 ;
-(char)hasLocationsForPassWithUniqueID:(id)arg1 ;
-(char)hasCandidatePassesOfStyle:(int)arg1 ;
-(id)unlocatedCandidatePassesOfStyle:(int)arg1 activatingBetweenStart:(id)arg2 end:(id)arg3 ;
-(id)locatedCandidatePassesOfStyle:(int)arg1 activatingBetweenStart:(id)arg2 end:(id)arg3 ;
-(id)locatedDatelessCandidatePassesOfStyle:(int)arg1 ;
-(id)locationsByUniqueIDInBoundingBoxOfRegion:(id)arg1 ;
-(void)_createDatabaseAtURL:(id)arg1 ;
-(id)_registeredPasses:(id)arg1 ;
-(id)_validPassPredicate;
-(id)_passesFilteredByAutomaticallyPresentPassEnabled:(id)arg1 ;
-(id)_predicateForStyle:(int)arg1 ;
-(id)_locatedPredicate;
-(id)_candidatePassesOfStyle:(int)arg1 activatingBetweenStart:(id)arg2 end:(id)arg3 furtherPredicate:(id)arg4 ;
-(id)_unlocatedPredicate;
-(id)_locatedCandidatePassesOfStyle:(int)arg1 matchingFurtherPredicate:(id)arg2 ;
-(id)_databaseWebService:(id)arg1 ;
-(id)_registeredPass:(id)arg1 ;
-(id)_paymentNetworkIdentifiersForPaymentNetworks:(id)arg1 ;
-(id)_passWithApplicationIdentifier:(id)arg1 secureElementIdentifier:(id)arg2 ;
-(id)_passWithPaymentApplication:(id)arg1 ;
-(void)_trimCatalog:(id)arg1 andBuildPassPredicate:(id*)arg2 ;
-(id)_predicateForPassTypes:(unsigned)arg1 ;
-(id)_passTypeForPass:(id)arg1 ;
-(id)_webServiceForPass:(id)arg1 passType:(id)arg2 ;
-(id)_transactionServiceForPass:(id)arg1 ;
-(id)_messageServiceForPass:(id)arg1 ;
-(void)_applyDemoPaymentApplicationToPass:(id)arg1 ;
-(id)setDefaultPaymentApplication:(id)arg1 forPassUniqueIdentifier:(id)arg2 ;
-(void)_applyDemoPaymentTransactionsToPass:(id)arg1 ;
-(void)adjustGroupsAfterAddingPass:(id)arg1 ;
-(void)_deleteNotificationServiceIfOrphaned:(id)arg1 ;
-(void)adjustGroupsAfterUpdatingPass:(id)arg1 oldGroupingProfile:(id)arg2 ;
-(void)_deleteWebServiceIfOrphaned:(id)arg1 ;
-(void)adjustGroupsBeforeRemovingPass:(id)arg1 ;
-(void)_deletePassTypeIfOrphaned:(id)arg1 ;
-(id)_predicateMatchingPassesForWebService:(id)arg1 ;
-(id)_databaseNotificationService:(id)arg1 ;
-(void)insertOrUpdateValueAddedMerchant:(id)arg1 ;
-(id)transactionsForPassWithUniqueIdentifier:(id)arg1 includingSources:(unsigned)arg2 limit:(int)arg3 ;
-(void)createGroupsIfNecessary;
-(void)_registerPass:(id)arg1 ;
-(id)_deviceIdentifierForExistingServiceURL:(id)arg1 ;
-(char)hasAnyPasses;
-(unsigned)numberOfPassesOfType:(id)arg1 ;
-(id)passesWithPassTypeID:(id)arg1 ;
-(id)passesWithPassTypeIdentifierHash:(id)arg1 requiresCertificate:(char)arg2 ;
-(id)passesWithPassTypeIdentifierHashes:(id)arg1 automaticSelectionOnly:(char)arg2 requiresCertificate:(char)arg3 ;
-(id)passesWithPassTypeIdentifierHash:(id)arg1 andAssociatedPassTypeIdentifierHash:(id)arg2 ;
-(id)locatedCandidatePassesOfStyle:(int)arg1 ;
-(id)locatedCandidatePassesOfStyle:(int)arg1 filteringOutPasses:(id)arg2 ;
-(id)passesForWebService:(id)arg1 ;
-(id)paymentPassesWithAssociatedPassTypeIdentifierHashes:(id)arg1 automaticSelectionOnly:(char)arg2 ;
-(void)updateSettings:(unsigned)arg1 forPass:(id)arg2 ;
-(char)getRegistrationStatus:(unsigned*)arg1 date:(id*)arg2 forSerialNumber:(id)arg3 webService:(id)arg4 ;
-(void)updateRegistrationStatus:(unsigned)arg1 date:(id)arg2 forSerialNumber:(id)arg3 webService:(id)arg4 ;
-(void)updateLastModifiedTag:(id)arg1 forSerialNumber:(id)arg2 webService:(id)arg3 ;
-(void)updateWebService:(id)arg1 ;
-(id)lastDeletionDateForWebService:(id)arg1 ;
-(id)lastUpdatedTagForWebService:(id)arg1 ;
-(id)tagLastUpdateDateForWebService:(id)arg1 ;
-(void)updateLastDeletionDate:(id)arg1 forWebService:(id)arg2 ;
-(void)updateLastUpdatedTag:(id)arg1 forWebService:(id)arg2 ;
-(id)webServices;
-(id)webServicesForPassTypeID:(id)arg1 ;
-(id)pushEnabledPassTypeIDs;
-(char)hasPushEnabledPassesForWebService:(id)arg1 ;
-(char)getWebService:(id*)arg1 updateContext:(id*)arg2 forPassWithUniqueID:(id)arg3 ;
-(id)passUpdateContextForSerialNumber:(id)arg1 webService:(id)arg2 ;
-(id)webServiceForPass:(id)arg1 ;
-(char)getLastPushDate:(id*)arg1 lastUpdateDate:(id*)arg2 frequencyScore:(double*)arg3 forPassTypeID:(id)arg4 ;
-(void)updateLastPushDate:(id)arg1 frequencyScore:(double)arg2 forPassTypeID:(id)arg3 ;
-(void)updateLastUpdateDate:(id)arg1 forPassTypeID:(id)arg2 ;
-(void)enumeratePassUpdateContextsForWebService:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)enumerateOrganizationNamesForPassTypeID:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(id)transactionServiceForPaymentApplication:(id)arg1 ;
-(id)messageServiceForPaymentApplication:(id)arg1 ;
-(id)notificationServiceOfType:(unsigned)arg1 forPassWithUniqueIdentifier:(id)arg2 ;
-(id)updateMerchant:(id)arg1 forTransaction:(id)arg2 passUniqueIdentifier:(id)arg3 ;
-(void)insertOrUpdateValueAddedServiceTransaction:(id)arg1 forPassUniqueIdentifier:(id)arg2 paymentTransaction:(id)arg3 ;
-(id)valueAddedServiceTransactionsForPassWithUniqueIdentifier:(id)arg1 limit:(int)arg2 ;
-(id)valueAddedServiceTransactionsForPaymentTransaction:(id)arg1 ;
-(id)valueAddedMerchantWithIdentifier:(id)arg1 ;
-(id)messagesForPassWithUniqueIdentifier:(id)arg1 ;
-(id<PDDatabaseManagerWebServicesDelegate>)webServicesDelegate;
-(void)setWebServicesDelegate:(id<PDDatabaseManagerWebServicesDelegate>)arg1 ;
-(PDObjectSettingsManager *)objectSettingsManager;
-(void)setObjectSettingsManager:(PDObjectSettingsManager *)arg1 ;
-(id<PDDatabaseManagerPaymentServicesDelegate>)paymentServicesDelegate;
-(id<PDDatabaseManagerNotificationServicesDelegate>)notificationServicesDelegate;
-(char)_migrateDatabase:(id)arg1 fromUserVersion:(int)arg2 ;
-(void)_migratePassSettingsFromDatabase:(id)arg1 ;
-(char)_migrateFrom8075To8076:(id)arg1 context:(id)arg2 ;
-(char)_migrateFrom8076To8300:(id)arg1 context:(id)arg2 ;
-(char)_migrateFrom8300To8301:(id)arg1 context:(id)arg2 ;
-(char)_migrateFrom8301To8302:(id)arg1 context:(id)arg2 ;
-(char)_migrateFrom8302To8303:(id)arg1 context:(id)arg2 ;
-(char)_migrateFrom8303To8304:(id)arg1 context:(id)arg2 ;
-(char)_migrateFrom8304To8305:(id)arg1 context:(id)arg2 ;
-(char)_migrateFrom8305To9000:(id)arg1 context:(id)arg2 ;
-(char)_migrateFrom9000To9001:(id)arg1 context:(id)arg2 ;
-(char)_migrateFrom9001To9002:(id)arg1 context:(id)arg2 ;
-(char)_migrateFrom9002To9003:(id)arg1 context:(id)arg2 ;
-(char)_migrateFrom9003To9004:(id)arg1 context:(id)arg2 ;
-(char)_migrateFrom9004To9005:(id)arg1 context:(id)arg2 ;
-(char)_migrateFrom9005To9006:(id)arg1 context:(id)arg2 ;
-(char)_migrateFrom9006To9007:(id)arg1 context:(id)arg2 ;
-(char)_migrateFrom9007To9008:(id)arg1 context:(id)arg2 ;
-(char)_migrateFrom9008To9009:(id)arg1 context:(id)arg2 ;
-(char)_migrateFrom9009To9010:(id)arg1 context:(id)arg2 ;
-(char)_migrateFrom9010To9011:(id)arg1 context:(id)arg2 ;
-(char)_migrateFrom9011To9012:(id)arg1 context:(id)arg2 ;
-(char)_migrateFrom9012To9013:(id)arg1 context:(id)arg2 ;
-(char)_migrateFrom9013To9014:(id)arg1 context:(id)arg2 ;
-(char)_migrateFrom9014To9015:(id)arg1 context:(id)arg2 ;
-(char)_migrateFrom9015To9016:(id)arg1 context:(id)arg2 ;
-(char)_migrateFrom9016To9017:(id)arg1 context:(id)arg2 ;
-(void)_insertPass:(id)arg1 ;
-(void)_applyCatalog:(id)arg1 ;
-(void)_removePass:(id)arg1 fromGroup:(id)arg2 ;
-(void)_removeGroup:(id)arg1 ;
-(void)_insertPass:(id)arg1 groupingProfile:(id)arg2 ;
-(void)_validateDefaultPaymentPassOrdering;
-(void)_moveGroup:(id)arg1 toIndex:(unsigned)arg2 ;
-(void)moveGroupForPass:(id)arg1 toIndex:(unsigned)arg2 ;
-(id)_groupAtOrAfterIndex:(unsigned)arg1 bestMatchingUniqueIDs:(id)arg2 ;
-(void)_fixDuplicateGroupsAtIndex:(unsigned)arg1 preservingGroupPID:(long long)arg2 maximumNumberOfGroups:(unsigned)arg3 ;
-(void)_insertPass:(id)arg1 groupingProfile:(id)arg2 insertNewGroupAfter:(id)arg3 ;
-(id)_firstGroupMatchingProfile:(id)arg1 ;
-(void)_addPass:(id)arg1 toGroup:(id)arg2 ;
-(id)_predicateForGroupingID:(id)arg1 ;
-(id)_predicateForDate:(id)arg1 leeway:(double)arg2 ;
-(id)_firstGroupMatchingPredicate:(id)arg1 ;
-(id)_groupWithPersistentID:(id)arg1 ;
-(id)_firstGroupMatchingGroup:(id)arg1 ;
-(void)_mergeGroup:(id)arg1 intoGroup:(id)arg2 ;
-(void)_sortPassesInGroup:(id)arg1 ;
-(id)defaultPaymentApplicationForPassUniqueIdentifier:(id)arg1 ;
-(void)deleteMessageWithIdentifier:(id)arg1 ;
-(id)passesOfType:(unsigned)arg1 ;
-(void)setDelegate:(id<PDDatabaseManagerDelegate>)arg1 ;
-(void)dealloc;
-(id<PDDatabaseManagerDelegate>)delegate;
-(id)initWithURL:(id)arg1 ;
-(id)_predicateForType:(unsigned)arg1 ;
-(void)noteObjectSharedWithUniqueID:(id)arg1 ;
-(SQLiteDatabase *)database;
-(char)createSchemaInDatabase:(id)arg1 ;
-(id)initWithURL:(id)arg1 delegate:(id)arg2 ;
-(id)passes;
@end

