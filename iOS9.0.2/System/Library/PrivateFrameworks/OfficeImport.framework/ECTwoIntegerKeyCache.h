/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:37 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class OITSUIntegerKeyDictionary;

@interface ECTwoIntegerKeyCache : NSObject {

	OITSUIntegerKeyDictionary* mCache;
	char _assertForCollisions;

}

@property (assign,nonatomic) char assertForCollisions;              //@synthesize assertForCollisions=_assertForCollisions - In the implementation block
-(void)dealloc;
-(id)init;
-(id)objectForKey1:(int)arg1 key2:(int)arg2 ;
-(void)setObject:(id)arg1 forKey1:(int)arg2 key2:(int)arg3 ;
-(char)assertForCollisions;
-(void)setAssertForCollisions:(char)arg1 ;
@end

