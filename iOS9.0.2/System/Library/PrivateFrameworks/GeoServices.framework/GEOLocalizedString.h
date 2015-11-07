/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:49 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOLocalizedString : PBCodable <NSCopying> {

	NSString* _locale;
	NSString* _stringValue;

}

@property (nonatomic,readonly) char hasLocale; 
@property (nonatomic,retain) NSString * locale;                   //@synthesize locale=_locale - In the implementation block
@property (nonatomic,readonly) char hasStringValue; 
@property (nonatomic,retain) NSString * stringValue;              //@synthesize stringValue=_stringValue - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLocale:(NSString *)arg1 ;
-(NSString *)stringValue;
-(void)setStringValue:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)locale;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)hasStringValue;
-(char)hasLocale;
-(char)readFrom:(id)arg1 ;
@end
