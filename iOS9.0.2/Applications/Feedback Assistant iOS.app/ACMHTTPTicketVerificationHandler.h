/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:04 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Feedback Assistant iOS/ACMHTTPHandler.h>

@class ACMTicketVerificationRequestImpl;

@interface ACMHTTPTicketVerificationHandler : ACMHTTPHandler {

	ACMTicketVerificationRequestImpl* _request;

}

@property (retain) ACMTicketVerificationRequestImpl * request;              //@synthesize request=_request - In the implementation block
+(id)handlerWithRequest:(id)arg1 ;
-(void)dealloc;
-(ACMTicketVerificationRequestImpl *)request;
-(id)requestBody;
-(void)setRequest:(ACMTicketVerificationRequestImpl *)arg1 ;
@end

