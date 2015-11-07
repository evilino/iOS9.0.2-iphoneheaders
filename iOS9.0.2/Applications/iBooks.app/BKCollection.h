/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:14 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>
#import <iBooks/BKLibraryCollection.h>

@class NSString, NSNumber, NSDate, NSSet;

@interface BKCollection : NSManagedObject <BKLibraryCollection>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSNumber * deletedFlag; 
@property (nonatomic,retain) NSNumber * sortKey; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * serverSyncUniqueId; 
@property (nonatomic,retain) NSDate * lastModification; 
@property (nonatomic,retain) NSSet * members; 
@property (nonatomic,retain) NSNumber * ubiquitous; 
+(id)uniqueIdForDefaultCollection:(int)arg1 ;
+(id)collectionBeforeCollection:(id)arg1 withManagedObjectContext:(id)arg2 ;
+(id)collectionAfterCollection:(id)arg1 withManagedObjectContext:(id)arg2 ;
+(id)titleForDefaultCollection:(int)arg1 ;
+(id)collectionProperties:(id)arg1 matchingPredicate:(id)arg2 inMoc:(id)arg3 ;
+(char)isValidForDeserialization:(id)arg1 ;
+(int)defaultCollectionIDForContentType:(int)arg1 ;
+(int)defaultCollectionIDForServerSyncUniqueId:(id)arg1 ;
+(id)ubiquityForDefaultCollection:(int)arg1 ;
+(id)sortKeyForDefaultCollection:(int)arg1 ;
+(id)summariesForBackup:(id)arg1 ;
+(void)insertWithBackupSummary:(id)arg1 moc:(id)arg2 ;
+(id)allOrderedCollectionsWithManagedObjectContext:(id)arg1 ;
+(id)_collectionFromCollection:(id)arg1 withManagedObjectConext:(id)arg2 newIndexBlock:(/*^block*/id)arg3 ;
-(id)libraryList_collectionID;
-(char)libraryList_isSeriesCollection;
-(char)libraryList_deletedFlag;
-(char)libraryList_isEqualToCollection:(id)arg1 ;
-(id)libraryList_seriesID;
-(id)libraryList_booksPredicate;
-(id)libraryList_title;
-(char)canAcceptContentTypes:(id)arg1 ;
-(void)updateLastModification;
-(id)booksPredicate;
-(char)isValidForSerialization;
-(void)addMembers:(id)arg1 ;
-(void)addCollectionMemberDictionaries:(id)arg1 touchDirtyFlag:(char)arg2 ;
-(void)prefetchMembers;
-(id)contentTypePredicate;
-(char)isDefaultCollection;
-(void)deserializeFromBackupSummary:(id)arg1 ;
-(void)evictNonMatchingDatabaseKeys:(id)arg1 ;
-(void)deserializeFromDictionary:(id)arg1 ;
-(void)mergeWithBackupSummary:(id)arg1 ;
-(void)addCollectionMemberDictionaries:(id)arg1 ;
-(void)mergeWithDictionaryRepresentation:(id)arg1 ;
-(int)compareWithCollection:(id)arg1 ;
-(id)membersMatchingContentType:(int)arg1 ;
-(int)libraryList_compareToCollection:(id)arg1 ;
-(void)destroy;
-(id)dictionaryRepresentation;
-(id)localizedTitle;
-(char)isEqualToCollection:(id)arg1 ;
-(void)awakeFromInsert;
-(void)willAccessValueForKey:(id)arg1 ;
@end
