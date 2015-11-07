/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:26 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class SKUIClientContext, NSURL;

@interface SKUILoadTrendingSearchPageOperation : NSOperation {

	SKUIClientContext* _clientContext;
	/*^block*/id _outputBlock;
	NSURL* _url;

}

@property (nonatomic,retain) SKUIClientContext * clientContext;              //@synthesize clientContext=_clientContext - In the implementation block
@property (copy) id outputBlock;                                             //@synthesize outputBlock=_outputBlock - In the implementation block
@property (nonatomic,copy) NSURL * URL;                                      //@synthesize url=_url - In the implementation block
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(void)main;
-(void)setOutputBlock:(id)arg1 ;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(id)outputBlock;
@end
