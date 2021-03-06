/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:05:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/DataClassMigrators/MapsDataClassMigrator.migrator/MapsDataClassMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapsDataClassMigrator/MapsDataClassMigrator-Structs.h>
#import <MapsDataClassMigrator/SyncingHistoryItem.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <MapsDataClassMigrator/HistoryItem.h>

@class MSPHistoryEntryStorage, NSString, NSData;

@interface SearchRequestHistoryItem : NSObject <SyncingHistoryItem, NSCopying, HistoryItem> {

	MSPHistoryEntryStorage* _storage;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * syncIdentifier; 
@property (nonatomic,readonly) NSData * syncData; 
@property (assign,nonatomic) double position; 
@property (nonatomic,readonly) char isValid; 
@property (nonatomic,readonly) NSString * displayQuery; 
@property (nonatomic,retain) NSString * locationDisplayString; 
@property (nonatomic,retain) NSString * syncIdentifier; 
@property (assign,nonatomic) double timestamp; 
@property (nonatomic,readonly) MSPHistoryEntryStorage * storage; 
@property (nonatomic,readonly) NSData * data; 
-(id)ticketForSource:(int)arg1 ;
-(NSString *)displayQuery;
-(NSString *)syncIdentifier;
-(void)setSyncIdentifier:(NSString *)arg1 ;
-(void)updateWithStorage:(id)arg1 ;
-(char)updateFromSyncData:(id)arg1 ;
-(id)initWithSearchRequestStorage:(id)arg1 ;
-(id)initWithDisplayQuery:(id)arg1 locationDisplayString:(id)arg2 timestamp:(double)arg3 mapRegion:(id)arg4 ;
-(MSPHistoryEntryStorage *)storage;
-(id)initWithTicket:(id)arg1 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(double)timestamp;
-(char)isValid;
-(void)setTimestamp:(double)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)data;
-(void)setPosition:(double)arg1 ;
-(double)position;
-(NSData *)syncData;
-(void)setLocationDisplayString:(NSString *)arg1 ;
-(NSString *)locationDisplayString;
@end

