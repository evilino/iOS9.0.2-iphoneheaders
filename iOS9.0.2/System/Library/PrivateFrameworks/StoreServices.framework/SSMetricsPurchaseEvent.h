/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/SSMetricsBaseEvent.h>

@class NSString;

@interface SSMetricsPurchaseEvent : SSMetricsBaseEvent

@property (assign,nonatomic) double requestStartTime; 
@property (assign,nonatomic) double responseEndTime; 
@property (assign,nonatomic) double responseStartTime; 
@property (nonatomic,retain) NSString * transactionIdentifier; 
-(NSString *)transactionIdentifier;
-(id)init;
-(double)requestStartTime;
-(double)responseStartTime;
-(double)responseEndTime;
-(void)addFieldsFromPurchaseResponse:(id)arg1 ;
-(void)setTransactionIdentifier:(NSString *)arg1 ;
-(void)setResponseStartTime:(double)arg1 ;
-(void)setResponseEndTime:(double)arg1 ;
-(void)setRequestStartTime:(double)arg1 ;
@end

