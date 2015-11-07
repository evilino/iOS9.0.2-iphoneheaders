/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:50 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEORPWatchAuxiliaryControl : PBCodable <NSCopying> {

	NSString* _hardwareIdentifier;
	NSString* _osBuild;
	NSString* _osVersion;

}

@property (nonatomic,readonly) char hasHardwareIdentifier; 
@property (nonatomic,retain) NSString * hardwareIdentifier;              //@synthesize hardwareIdentifier=_hardwareIdentifier - In the implementation block
@property (nonatomic,readonly) char hasOsVersion; 
@property (nonatomic,retain) NSString * osVersion;                       //@synthesize osVersion=_osVersion - In the implementation block
@property (nonatomic,readonly) char hasOsBuild; 
@property (nonatomic,retain) NSString * osBuild;                         //@synthesize osBuild=_osBuild - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)hardwareIdentifier;
-(NSString *)osBuild;
-(char)hasOsBuild;
-(void)setOsBuild:(NSString *)arg1 ;
-(void)setOsVersion:(NSString *)arg1 ;
-(void)setHardwareIdentifier:(NSString *)arg1 ;
-(NSString *)osVersion;
-(char)hasOsVersion;
-(char)hasHardwareIdentifier;
-(char)readFrom:(id)arg1 ;
@end
