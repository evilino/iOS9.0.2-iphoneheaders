/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:49 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AppLaunchStats.framework/AppLaunchStats
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppLaunchStats/AppLaunchStats-Structs.h>
#import <libobjc.A.dylib/DuetLoggerProtocol.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSDate, NSString;

@interface ReservationStationObject : NSObject <DuetLoggerProtocol> {

	NSObject*<OS_dispatch_queue> rsDispatchQueue;
	long long lockTime;
	long long seqNum;
	int appType;
	/*^block*/id forceEndHandler;
	NSDate* timeStamp;
	NSString* bundleID;
	NSObject*<OS_dispatch_source> theTimer;
	unsigned long long startMachAbsoluteTime;

}
-(id)init:(id)arg1 ;
-(void)logAll:(asl_object_sRef)arg1 withMsg:(asl_object_sRef)arg2 withLevel:(int)arg3 ;
-(void)logLight:(asl_object_sRef)arg1 withMsg:(asl_object_sRef)arg2 withLevel:(int)arg3 ;
-(void)onTick;
-(void)createTimer;
-(BOOL)isFree;
-(void)releaseStationWithAppID:(id)arg1 seqNum:(long long)arg2 withReleaseState:(BOOL*)arg3 ;
-(void)setStation:(id)arg1 didSet:(BOOL*)arg2 ;
-(void)setStationState:(id)arg1 seq:(long long)arg2 type:(int)arg3 didset:(BOOL*)arg4 release:(/*^block*/id)arg5 ;
@end
