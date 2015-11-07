/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:49 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOCompanionManeuverStep.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface GEOCompanionWalkStep : PBCodable <GEOCompanionManeuverStep, NSCopying> {

	SCD_Struct_GE68* _junctionElements;
	unsigned _junctionElementsCount;
	unsigned _junctionElementsSpace;
	int _junctionType;
	NSMutableArray* _maneuverNames;
	int _maneuverType;
	NSMutableArray* _signposts;
	SCD_Struct_GE7 _has;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) char hasManeuverType; 
@property (assign,nonatomic) int maneuverType; 
@property (nonatomic,retain) NSMutableArray * maneuverNames; 
@property (nonatomic,retain) NSMutableArray * signposts; 
@property (assign,nonatomic) char hasJunctionType; 
@property (assign,nonatomic) int junctionType; 
@property (nonatomic,readonly) unsigned junctionElementsCount; 
@property (nonatomic,readonly) SCD_Struct_GE68* junctionElements; 
@property (nonatomic,readonly) int transportType; 
@property (assign,nonatomic) int maneuverType;                                 //@synthesize maneuverType=_maneuverType - In the implementation block
@property (nonatomic,retain) NSMutableArray * maneuverNames;                   //@synthesize maneuverNames=_maneuverNames - In the implementation block
@property (nonatomic,retain) NSMutableArray * signposts;                       //@synthesize signposts=_signposts - In the implementation block
@property (assign,nonatomic) int junctionType;                                 //@synthesize junctionType=_junctionType - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)transportType;
-(void)setManeuverNames:(NSMutableArray *)arg1 ;
-(void)setHasJunctionType:(char)arg1 ;
-(char)hasManeuverType;
-(void)addManeuverName:(id)arg1 ;
-(void)setJunctionType:(int)arg1 ;
-(NSMutableArray *)signposts;
-(NSMutableArray *)maneuverNames;
-(id)signpostAtIndex:(unsigned)arg1 ;
-(int)junctionType;
-(unsigned)signpostsCount;
-(void)addSignpost:(id)arg1 ;
-(SCD_Struct_GE68*)junctionElements;
-(char)hasJunctionType;
-(void)setJunctionElements:(SCD_Struct_GE68*)arg1 count:(unsigned)arg2 ;
-(id)maneuverNameAtIndex:(unsigned)arg1 ;
-(unsigned)maneuverNamesCount;
-(void)addJunctionElement:(SCD_Struct_GE68)arg1 ;
-(void)clearJunctionElements;
-(void)setHasManeuverType:(char)arg1 ;
-(void)clearManeuverNames;
-(void)setSignposts:(NSMutableArray *)arg1 ;
-(int)maneuverType;
-(void)clearSignposts;
-(SCD_Struct_GE68)junctionElementAtIndex:(unsigned)arg1 ;
-(unsigned)junctionElementsCount;
-(void)setManeuverType:(int)arg1 ;
-(char)readFrom:(id)arg1 ;
@end
