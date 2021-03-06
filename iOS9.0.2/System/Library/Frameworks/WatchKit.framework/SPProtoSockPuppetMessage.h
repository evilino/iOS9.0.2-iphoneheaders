/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:36 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WatchKit/WatchKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SPProtoAudioFilePlayerMessage, SPProtoSockPuppetPlist;

@interface SPProtoSockPuppetMessage : PBCodable <NSCopying> {

	SPProtoAudioFilePlayerMessage* _audioFilePlayerMessage;
	SPProtoSockPuppetPlist* _plist;

}

@property (nonatomic,readonly) char hasPlist; 
@property (nonatomic,retain) SPProtoSockPuppetPlist * plist;                                      //@synthesize plist=_plist - In the implementation block
@property (nonatomic,readonly) char hasAudioFilePlayerMessage; 
@property (nonatomic,retain) SPProtoAudioFilePlayerMessage * audioFilePlayerMessage;              //@synthesize audioFilePlayerMessage=_audioFilePlayerMessage - In the implementation block
+(id)sockPuppetMessageWithSubMessage:(id)arg1 setterSelector:(SEL)arg2 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setAudioFilePlayerMessage:(SPProtoAudioFilePlayerMessage *)arg1 ;
-(char)hasPlist;
-(char)hasAudioFilePlayerMessage;
-(SPProtoAudioFilePlayerMessage *)audioFilePlayerMessage;
-(SPProtoSockPuppetPlist *)plist;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)setPlist:(SPProtoSockPuppetPlist *)arg1 ;
@end

