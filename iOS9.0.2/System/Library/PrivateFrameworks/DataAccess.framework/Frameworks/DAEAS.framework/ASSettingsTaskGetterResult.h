/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:34 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface ASSettingsTaskGetterResult : NSObject {

	int _key;
	int _status;
	id _result;

}

@property (assign,nonatomic) int key;                 //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) int status;              //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) id result;               //@synthesize result=_result - In the implementation block
-(int)key;
-(void)setKey:(int)arg1 ;
-(id)result;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(id)initWithKey:(int)arg1 status:(int)arg2 result:(id)arg3 ;
-(void)setResult:(id)arg1 ;
@end
