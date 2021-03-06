/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:26 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NanoMailKitServer/NanoMailKitServer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSMutableArray;

@interface NNMKProtoMessageDeletions : PBCodable <NSCopying> {

	NSData* _dateSynced;
	unsigned _fullSyncVersion;
	NSMutableArray* _messageDeletions;
	SCD_Struct_NN1 _has;

}

@property (assign,nonatomic) char hasFullSyncVersion; 
@property (assign,nonatomic) unsigned fullSyncVersion;                       //@synthesize fullSyncVersion=_fullSyncVersion - In the implementation block
@property (nonatomic,readonly) char hasDateSynced; 
@property (nonatomic,retain) NSData * dateSynced;                            //@synthesize dateSynced=_dateSynced - In the implementation block
@property (nonatomic,retain) NSMutableArray * messageDeletions;              //@synthesize messageDeletions=_messageDeletions - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setFullSyncVersion:(unsigned)arg1 ;
-(void)setHasFullSyncVersion:(char)arg1 ;
-(char)hasFullSyncVersion;
-(unsigned)fullSyncVersion;
-(void)setDateSynced:(NSData *)arg1 ;
-(char)hasDateSynced;
-(NSData *)dateSynced;
-(void)addMessageDeletion:(id)arg1 ;
-(unsigned)messageDeletionsCount;
-(void)clearMessageDeletions;
-(id)messageDeletionAtIndex:(unsigned)arg1 ;
-(NSMutableArray *)messageDeletions;
-(void)setMessageDeletions:(NSMutableArray *)arg1 ;
-(char)readFrom:(id)arg1 ;
@end

