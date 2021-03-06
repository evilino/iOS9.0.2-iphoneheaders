/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:56 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CacheDelete.framework/CacheDelete
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CacheDelete/CacheDeleteListener.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <CacheDelete/CacheDeleteServiceProtocol.h>

@class NSXPCListenerEndpoint, NSString;

@interface CacheDeleteServiceListener : CacheDeleteListener <NSXPCListenerDelegate, CacheDeleteServiceProtocol> {

	NSXPCListenerEndpoint* _endpoint;
	/*^block*/id _purgeable;
	/*^block*/id _purge;
	/*^block*/id _periodic;
	/*^block*/id _cancel;
	/*^block*/id _notify;
	/*^block*/id _callback;

}

@property (readonly) NSXPCListenerEndpoint * endpoint;              //@synthesize endpoint=_endpoint - In the implementation block
@property (nonatomic,copy) id purgeable;                            //@synthesize purgeable=_purgeable - In the implementation block
@property (nonatomic,copy) id purge;                                //@synthesize purge=_purge - In the implementation block
@property (nonatomic,copy) id periodic;                             //@synthesize periodic=_periodic - In the implementation block
@property (nonatomic,copy) id cancel;                               //@synthesize cancel=_cancel - In the implementation block
@property (nonatomic,copy) id notify;                               //@synthesize notify=_notify - In the implementation block
@property (nonatomic,copy) id callback;                             //@synthesize callback=_callback - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)purgeable;
-(id)cancel;
-(id)purge;
-(NSXPCListenerEndpoint *)endpoint;
-(void)setCancel:(id)arg1 ;
-(void)servicePurgeable:(int)arg1 info:(id)arg2 replyBlock:(/*^block*/id)arg3 ;
-(void)servicePurge:(int)arg1 info:(id)arg2 replyBlock:(/*^block*/id)arg3 ;
-(void)servicePeriodic:(int)arg1 info:(id)arg2 replyBlock:(/*^block*/id)arg3 ;
-(void)serviceCancelPurge:(/*^block*/id)arg1 ;
-(void)servicePing:(/*^block*/id)arg1 ;
-(void)serviceNotify:(id)arg1 replyBlock:(/*^block*/id)arg2 ;
-(void)serviceCallback:(id)arg1 replyBlock:(/*^block*/id)arg2 ;
-(id)initWithName:(id)arg1 anonymous:(char)arg2 ;
-(void)setNotifyCallback:(/*^block*/id)arg1 ;
-(void)setPurgeable:(id)arg1 ;
-(void)setPurge:(id)arg1 ;
-(id)periodic;
-(void)setPeriodic:(id)arg1 ;
-(void)setNotify:(id)arg1 ;
-(id)callback;
-(void)setCallback:(id)arg1 ;
-(id)notify;
@end

