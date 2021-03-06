/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:19 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray;

@interface MFMessageTransferResult : NSObject {

	unsigned _resultCode;
	NSArray* _failedMessages;
	NSArray* _transferedMessages;

}

@property (nonatomic,readonly) unsigned resultCode;                       //@synthesize resultCode=_resultCode - In the implementation block
@property (nonatomic,readonly) NSArray * failedMessages;                  //@synthesize failedMessages=_failedMessages - In the implementation block
@property (nonatomic,readonly) NSArray * transferedMessages;              //@synthesize transferedMessages=_transferedMessages - In the implementation block
-(void)dealloc;
-(id)init;
-(id)debugDescription;
-(NSArray *)transferedMessages;
-(NSArray *)failedMessages;
-(id)initWithResultCode:(unsigned)arg1 failedMessages:(id)arg2 transferedMessage:(id)arg3 ;
-(unsigned)resultCode;
@end

