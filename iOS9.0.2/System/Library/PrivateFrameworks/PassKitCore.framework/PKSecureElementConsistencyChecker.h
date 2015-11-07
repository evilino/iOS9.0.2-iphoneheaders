/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:41 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, PKSecureElementConsistencyCheckerDelegate;
@class NSObject, PKPaymentWebService;

@interface PKSecureElementConsistencyChecker : NSObject {

	NSObject*<OS_dispatch_queue> _processingQueue;
	id<PKSecureElementConsistencyCheckerDelegate> _delegate;
	PKPaymentWebService* _paymentWebService;

}

@property (assign,nonatomic) id<PKSecureElementConsistencyCheckerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) PKPaymentWebService * paymentWebService;                             //@synthesize paymentWebService=_paymentWebService - In the implementation block
-(PKPaymentWebService *)paymentWebService;
-(void)setPaymentWebService:(PKPaymentWebService *)arg1 ;
-(void)setDelegate:(id<PKSecureElementConsistencyCheckerDelegate>)arg1 ;
-(void)dealloc;
-(id<PKSecureElementConsistencyCheckerDelegate>)delegate;
-(void)queue_startWithCompletion:(/*^block*/id)arg1 ;
-(char)_downloadPasses;
-(void)_rescheduleWithBackoff;
-(void)queue_checkConsistencyWithPaymentApplications:(id)arg1 secureElementApplets:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithPaymentWebService:(id)arg1 delegate:(id)arg2 ;
-(void)startWithCompletion:(/*^block*/id)arg1 ;
-(void)checkConsistencyWithPaymentApplications:(id)arg1 secureElementApplets:(id)arg2 completion:(/*^block*/id)arg3 ;
@end
