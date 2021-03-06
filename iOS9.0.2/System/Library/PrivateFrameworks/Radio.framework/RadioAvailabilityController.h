/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:58 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSNumber;

@interface RadioAvailabilityController : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	char _hasSuccessfullyLoadedURLBag;
	NSNumber* _lastActiveAccountUniqueIdentifier;
	char _radioAvailable;

}

@property (getter=isRadioAvailable,nonatomic,readonly) char radioAvailable; 
-(char)isRadioAvailable;
-(void)_storeFrontDidChangeNotification:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)_currentStoreFrontIdentifier;
-(id)_userDefaultsDomain;
-(void)_networkReachabilityFlagsDidChangeNotification:(id)arg1 ;
-(void)_reloadRadioAvailabilityWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getRadioAvailabilityWithCompletionHandler:(/*^block*/id)arg1 ;
@end

