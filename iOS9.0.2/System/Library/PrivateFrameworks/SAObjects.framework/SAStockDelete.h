/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSArray;

@interface SAStockDelete : SADomainCommand

@property (nonatomic,copy) NSArray * stocks; 
+(id)delete;
+(id)deleteWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(char)requiresResponse;
-(NSArray *)stocks;
-(void)setStocks:(NSArray *)arg1 ;
@end

