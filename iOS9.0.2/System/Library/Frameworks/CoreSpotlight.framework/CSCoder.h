/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:29 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreSpotlight/CoreSpotlight-Structs.h>
#import <libobjc.A.dylib/CSCoderData.h>

@class NSData;

@interface CSCoder : NSObject <CSCoderData> {

	char _finalized;
	NSData* _data;
	MDPlistContainerRef _container;

}

@property (nonatomic,readonly) NSData * data;                              //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) MDPlistContainerRef container;              //@synthesize container=_container - In the implementation block
@property (nonatomic,readonly) char finalized;                             //@synthesize finalized=_finalized - In the implementation block
-(void)beginType:(const char*)arg1 ;
-(void)encodeInt32:(int)arg1 ;
-(void)beginDictionary;
-(void)encodeString:(const char*)arg1 length:(int)arg2 ;
-(void)encodeMDPlistObject:(SCD_Struct_CS3)arg1 ;
-(void)endDictionary;
-(void)endType;
-(void)encodeInt64:(long long)arg1 ;
-(void)encodeData:(const void*)arg1 length:(int)arg2 ;
-(void)encodeObject:(id)arg1 forKey:(const char*)arg2 keyLength:(int)arg3 ;
-(void)encodeString:(const char*)arg1 stringLength:(int)arg2 forKey:(const char*)arg3 keyLength:(int)arg4 ;
-(void)encodeNSString:(id)arg1 ;
-(void)beginArray;
-(void)endArray;
-(char)finalized;
-(void)dealloc;
-(id)init;
-(NSData *)data;
-(MDPlistContainerRef)container;
-(void)encodeObject:(id)arg1 ;
-(void)encodeBool:(char)arg1 ;
-(void)encodeString:(const char*)arg1 ;
@end
