/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:37:15 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/WatchKit.framework/Support/companionappd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <companionappd/companionappd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface SPProtoSockPuppetIDSObject : PBCodable <NSCopying> {

	NSData* _objectData;
	NSString* _receiver;
	int _type;

}

@property (assign,nonatomic) int type;                         //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSData * objectData;              //@synthesize objectData=_objectData - In the implementation block
@property (nonatomic,readonly) char hasReceiver; 
@property (nonatomic,retain) NSString * receiver;              //@synthesize receiver=_receiver - In the implementation block
-(NSData *)objectData;
-(void)setObjectData:(NSData *)arg1 ;
-(char)hasReceiver;
-(void)setReceiver:(NSString *)arg1 ;
-(NSString *)receiver;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
@end

