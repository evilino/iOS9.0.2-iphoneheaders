/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSMutableSet, CBUUID, NSObject;

@interface _HDHealthServiceDiscoveryInfo : NSObject {

	NSMutableSet* _peripheralsUUIDs;
	unsigned _discoveryIdentifier;
	/*^block*/id _discoveryHandler;
	CBUUID* _serviceUUID;
	NSObject*<OS_dispatch_source> _timeoutTimer;

}

@property (assign,nonatomic) unsigned discoveryIdentifier;                            //@synthesize discoveryIdentifier=_discoveryIdentifier - In the implementation block
@property (nonatomic,readonly) id discoveryHandler;                                   //@synthesize discoveryHandler=_discoveryHandler - In the implementation block
@property (nonatomic,readonly) CBUUID * serviceUUID;                                  //@synthesize serviceUUID=_serviceUUID - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> timeoutTimer;              //@synthesize timeoutTimer=_timeoutTimer - In the implementation block
-(id)initWithHandler:(/*^block*/id)arg1 serviceUUID:(id)arg2 ;
-(void)setDiscoveryIdentifier:(unsigned)arg1 ;
-(void)setTimeoutTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(id)discoveryHandler;
-(NSObject*<OS_dispatch_source>)timeoutTimer;
-(unsigned)discoveryIdentifier;
-(char)_addPeripheralUUID:(id)arg1 ;
-(CBUUID *)serviceUUID;
@end

