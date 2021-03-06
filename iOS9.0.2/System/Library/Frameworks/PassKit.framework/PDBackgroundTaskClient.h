/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:37:06 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface PDBackgroundTaskClient : NSObject {

	NSObject*<OS_dispatch_queue> _clientQueue;
	/*^block*/id _taskHandler;

}
-(id)initWithQueue:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)deliverTask:(id)arg1 taskName:(id)arg2 ;
-(void)dealloc;
@end

