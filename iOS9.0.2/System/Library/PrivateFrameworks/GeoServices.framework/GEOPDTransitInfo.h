/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:51 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface GEOPDTransitInfo : PBCodable <NSCopying> {

	NSMutableArray* _labels;
	NSMutableArray* _lines;
	NSString* _searchDisplayName;
	NSMutableArray* _systems;
	NSMutableArray* _transitConnections;

}

@property (nonatomic,retain) NSMutableArray * lines;                           //@synthesize lines=_lines - In the implementation block
@property (nonatomic,retain) NSMutableArray * systems;                         //@synthesize systems=_systems - In the implementation block
@property (nonatomic,retain) NSMutableArray * labels;                          //@synthesize labels=_labels - In the implementation block
@property (nonatomic,retain) NSMutableArray * transitConnections;              //@synthesize transitConnections=_transitConnections - In the implementation block
@property (nonatomic,readonly) char hasSearchDisplayName; 
@property (nonatomic,retain) NSString * searchDisplayName;                     //@synthesize searchDisplayName=_searchDisplayName - In the implementation block
+(id)transitInfoForPlaceData:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)linesCount;
-(NSMutableArray *)lines;
-(NSMutableArray *)systems;
-(unsigned)systemsCount;
-(void)setTransitConnections:(NSMutableArray *)arg1 ;
-(void)clearLabels;
-(char)hasSearchDisplayName;
-(void)setSystems:(NSMutableArray *)arg1 ;
-(void)addLabel:(id)arg1 ;
-(NSMutableArray *)transitConnections;
-(void)clearTransitConnections;
-(void)addTransitConnection:(id)arg1 ;
-(id)lineAtIndex:(unsigned)arg1 ;
-(void)addSystem:(id)arg1 ;
-(id)labelAtIndex:(unsigned)arg1 ;
-(unsigned)labelsCount;
-(void)setLabels:(NSMutableArray *)arg1 ;
-(void)setSearchDisplayName:(NSString *)arg1 ;
-(id)systemAtIndex:(unsigned)arg1 ;
-(id)transitConnectionAtIndex:(unsigned)arg1 ;
-(void)addLine:(id)arg1 ;
-(void)setLines:(NSMutableArray *)arg1 ;
-(unsigned)transitConnectionsCount;
-(void)clearLines;
-(NSString *)searchDisplayName;
-(void)clearSystems;
-(NSMutableArray *)labels;
-(char)readFrom:(id)arg1 ;
@end

