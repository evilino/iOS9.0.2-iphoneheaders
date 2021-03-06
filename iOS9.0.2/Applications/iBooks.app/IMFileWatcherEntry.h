/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:16 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSOperationQueue;

@interface IMFileWatcherEntry : NSObject {

	NSString* _filePath;
	NSOperationQueue* _queue;
	/*^block*/id _block;

}

@property (nonatomic,copy) NSString * filePath;                       //@synthesize filePath=_filePath - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) id block;                              //@synthesize block=_block - In the implementation block
-(id)block;
-(NSOperationQueue *)queue;
-(unsigned)hash;
-(void)invalidate;
-(void)setFilePath:(NSString *)arg1 ;
-(NSString *)filePath;
-(id)initWithQueue:(id)arg1 andBlock:(/*^block*/id)arg2 ;
@end

