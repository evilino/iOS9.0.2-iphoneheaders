/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:20 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSConditionLock, NSMutableArray;

@interface MFRequestQueue : NSObject {

	NSConditionLock* _condition;
	NSMutableArray* _requests;
	NSMutableArray* _consumers;
	unsigned _waitingOutside;
	unsigned _waitingInside;

}
-(void)dealloc;
-(id)init;
-(void)addRequests:(id)arg1 consumers:(id)arg2 ;
-(void)processRequests:(id)arg1 consumers:(id)arg2 ;
-(void)willAddRequests:(id)arg1 consumers:(id)arg2 ;
-(void)_processRequests:(id)arg1 consumers:(id)arg2 ;
-(void)processRequest:(id)arg1 consumer:(id)arg2 ;
-(void)addRequest:(id)arg1 consumer:(id)arg2 ;
@end

