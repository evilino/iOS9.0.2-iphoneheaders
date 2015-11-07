/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:17 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSArray, NSMutableDictionary;

@interface CKDModifyShareTokenURLRequest : CKDURLRequest {

	/*^block*/id _shareTokenModifiedBlock;
	NSArray* _shareTokenInfos;
	NSMutableDictionary* _shareTokenInfosByRequestID;

}

@property (nonatomic,copy) id shareTokenModifiedBlock;                                      //@synthesize shareTokenModifiedBlock=_shareTokenModifiedBlock - In the implementation block
@property (nonatomic,retain) NSArray * shareTokenInfos;                                     //@synthesize shareTokenInfos=_shareTokenInfos - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * shareTokenInfosByRequestID;              //@synthesize shareTokenInfosByRequestID=_shareTokenInfosByRequestID - In the implementation block
-(id)requestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(id)requestOperationClasses;
-(NSArray *)shareTokenInfos;
-(NSMutableDictionary *)shareTokenInfosByRequestID;
-(id)shareTokenModifiedBlock;
-(id)initWithShareTokenInfos:(id)arg1 ;
-(void)setShareTokenModifiedBlock:(id)arg1 ;
-(void)setShareTokenInfos:(NSArray *)arg1 ;
-(void)setShareTokenInfosByRequestID:(NSMutableDictionary *)arg1 ;
-(int)operationType;
@end
