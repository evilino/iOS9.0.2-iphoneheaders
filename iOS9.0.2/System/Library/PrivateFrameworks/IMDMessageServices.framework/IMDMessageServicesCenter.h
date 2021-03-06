/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:09 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IMDMessageServices.framework/IMDMessageServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject;

@interface IMDMessageServicesCenter : NSObject {

	NSObject*<OS_xpc_object> _connection;

}
+(id)sharedInstance;
-(char)_disconnect;
-(void)dealloc;
-(id)init;
-(void)_requestRoutingWithGUID:(id)arg1 chatGUID:(id)arg2 error:(unsigned)arg3 handler:(/*^block*/id)arg4 ;
-(void)_requestExpireStateWithGUID:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_requestWatchdogWithGUID:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)requestRoutingForMessageGuid:(id)arg1 inChat:(id)arg2 error:(unsigned)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)requestRoutingWithCompletion:(/*^block*/id)arg1 ;
-(void)requestExpireStateForMessageGuid:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)requestExpireStateWithCompletion:(/*^block*/id)arg1 ;
-(void)requestWatchdogForMessageGuid:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)requestWatchdogWithCompletion:(/*^block*/id)arg1 ;
-(void)_disconnected;
-(char)_connect;
@end

