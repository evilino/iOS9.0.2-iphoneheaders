/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:38 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VideoUpload.framework/VideoUpload
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSData;

@interface VUFileUpload : NSObject {

	NSString* _name;
	NSData* _data;

}

@property (nonatomic,retain) NSString * name;              //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSData * data;                //@synthesize data=_data - In the implementation block
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(id)initWithPath:(id)arg1 ;
@end
