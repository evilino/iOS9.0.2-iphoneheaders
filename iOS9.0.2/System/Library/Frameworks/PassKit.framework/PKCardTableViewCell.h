/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:58 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKit/PKCardOnFileTableViewCell.h>

@class PKPaymentCredential;

@interface PKCardTableViewCell : PKCardOnFileTableViewCell {

	PKPaymentCredential* _paymentCredential;

}

@property (nonatomic,retain) PKPaymentCredential * paymentCredential;              //@synthesize paymentCredential=_paymentCredential - In the implementation block
-(PKPaymentCredential *)paymentCredential;
-(void)setPaymentCredential:(PKPaymentCredential *)arg1 ;
-(void)dealloc;
@end

