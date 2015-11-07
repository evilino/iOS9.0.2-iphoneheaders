/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:54 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface GEOABExperimentResponse : PBCodable <NSCopying> {

	unsigned long long _refreshIntervalSeconds;
	double _timestamp;
	NSMutableArray* _assignments;
	NSString* _requestGuid;
	NSString* _sourceURL;
	char _invalidatePoiCache;
	char _invalidateTileCache;
	SCD_Struct_GE6 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) double timestamp; 
@property (nonatomic,readonly) char hasSourceURL; 
@property (nonatomic,retain) NSString * sourceURL; 
@property (nonatomic,readonly) char hasRequestGuid; 
@property (nonatomic,retain) NSString * requestGuid;                                 //@synthesize requestGuid=_requestGuid - In the implementation block
@property (nonatomic,retain) NSMutableArray * assignments;                           //@synthesize assignments=_assignments - In the implementation block
@property (assign,nonatomic) char hasInvalidateTileCache; 
@property (assign,nonatomic) char invalidateTileCache;                               //@synthesize invalidateTileCache=_invalidateTileCache - In the implementation block
@property (assign,nonatomic) char hasInvalidatePoiCache; 
@property (assign,nonatomic) char invalidatePoiCache;                                //@synthesize invalidatePoiCache=_invalidatePoiCache - In the implementation block
@property (assign,nonatomic) char hasRefreshIntervalSeconds; 
@property (assign,nonatomic) unsigned long long refreshIntervalSeconds;              //@synthesize refreshIntervalSeconds=_refreshIntervalSeconds - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)hasTimestamp;
-(void)setHasTimestamp:(char)arg1 ;
-(char)invalidateTileCache;
-(void)setHasInvalidateTileCache:(char)arg1 ;
-(void)setHasRefreshIntervalSeconds:(char)arg1 ;
-(unsigned)assignmentsCount;
-(id)assignmentAtIndex:(unsigned)arg1 ;
-(char)hasInvalidateTileCache;
-(void)setRequestGuid:(NSString *)arg1 ;
-(char)hasRefreshIntervalSeconds;
-(void)setInvalidatePoiCache:(char)arg1 ;
-(char)invalidatePoiCache;
-(void)setHasInvalidatePoiCache:(char)arg1 ;
-(void)setSourceURL:(NSString *)arg1 ;
-(char)hasSourceURL;
-(NSString *)requestGuid;
-(NSString *)sourceURL;
-(void)clearAssignments;
-(unsigned long long)refreshIntervalSeconds;
-(void)setInvalidateTileCache:(char)arg1 ;
-(char)hasInvalidatePoiCache;
-(void)addAssignment:(id)arg1 ;
-(NSMutableArray *)assignments;
-(void)setRefreshIntervalSeconds:(unsigned long long)arg1 ;
-(char)hasRequestGuid;
-(void)setAssignments:(NSMutableArray *)arg1 ;
-(id)_experimentAssignmentForServiceType:(int)arg1 placeRequestType:(int)arg2 ;
-(id)_querySubstringForServiceType:(int)arg1 placeRequestType:(int)arg2 ;
-(char)readFrom:(id)arg1 ;
@end
