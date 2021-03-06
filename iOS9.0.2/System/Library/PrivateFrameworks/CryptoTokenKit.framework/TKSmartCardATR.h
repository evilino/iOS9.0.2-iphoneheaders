/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSData, NSArray;

@interface TKSmartCardATR : NSObject {

	NSMutableArray* _interfaces;
	NSData* _bytes;
	NSData* _historicalBytes;

}

@property (nonatomic,readonly) NSData * bytes;                        //@synthesize bytes=_bytes - In the implementation block
@property (nonatomic,readonly) NSArray * protocols; 
@property (nonatomic,readonly) NSData * historicalBytes;              //@synthesize historicalBytes=_historicalBytes - In the implementation block
-(id)initWithSource:(/*^block*/id)arg1 ;
-(id)description;
-(NSData *)bytes;
-(NSArray *)protocols;
-(id)historicalRecords;
-(id)parseFromSource:(/*^block*/id)arg1 ;
-(id)interfaceGroupAtIndex:(int)arg1 ;
-(id)_formatHexData:(id)arg1 to:(id)arg2 ;
-(id)interfaceGroupForProtocol:(unsigned)arg1 ;
-(NSData *)historicalBytes;
-(id)initWithBytes:(id)arg1 ;
@end

