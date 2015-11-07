/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:26 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NanoMediaRemote/NanoMediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface _NMRMediaRemoteGetStateMessageProfobuf : PBCodable <NSCopying> {

	double _timestamp;
	NSData* _applicationInfoDigest;
	NSData* _knownDigest;
	NSData* _nowPlayingInfoDigest;
	int _state;
	NSData* _supportedCommandsDigest;
	SCD_Struct_NM2 _has;

}

@property (assign,nonatomic) char hasState; 
@property (assign,nonatomic) int state;                                      //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) char hasKnownDigest; 
@property (nonatomic,retain) NSData * knownDigest;                           //@synthesize knownDigest=_knownDigest - In the implementation block
@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) double timestamp;                               //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) char hasNowPlayingInfoDigest; 
@property (nonatomic,retain) NSData * nowPlayingInfoDigest;                  //@synthesize nowPlayingInfoDigest=_nowPlayingInfoDigest - In the implementation block
@property (nonatomic,readonly) char hasApplicationInfoDigest; 
@property (nonatomic,retain) NSData * applicationInfoDigest;                 //@synthesize applicationInfoDigest=_applicationInfoDigest - In the implementation block
@property (nonatomic,readonly) char hasSupportedCommandsDigest; 
@property (nonatomic,retain) NSData * supportedCommandsDigest;               //@synthesize supportedCommandsDigest=_supportedCommandsDigest - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(double)timestamp;
-(int)state;
-(void)setState:(int)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setHasState:(char)arg1 ;
-(char)hasState;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)hasTimestamp;
-(void)setHasTimestamp:(char)arg1 ;
-(void)setNowPlayingInfoDigest:(NSData *)arg1 ;
-(void)setApplicationInfoDigest:(NSData *)arg1 ;
-(void)setSupportedCommandsDigest:(NSData *)arg1 ;
-(NSData *)nowPlayingInfoDigest;
-(NSData *)applicationInfoDigest;
-(NSData *)supportedCommandsDigest;
-(void)setKnownDigest:(NSData *)arg1 ;
-(char)hasKnownDigest;
-(char)hasNowPlayingInfoDigest;
-(char)hasApplicationInfoDigest;
-(char)hasSupportedCommandsDigest;
-(NSData *)knownDigest;
-(char)readFrom:(id)arg1 ;
@end
