/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:24 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/DumpPanic
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface SymbolInfo : NSObject {

	unsigned char _uuid[16];
	unsigned long long _start;
	unsigned long long _size;

}

@property (assign) unsigned long long start;              //@synthesize start=_start - In the implementation block
@property (assign) unsigned long long size;               //@synthesize size=_size - In the implementation block
-(id)initWithAddress:(unsigned long long)arg1 size:(unsigned long long)arg2 for:(unsigned char)arg3 ;
-(id)get_uuid;
-(unsigned long long)size;
-(void)setSize:(unsigned long long)arg1 ;
-(unsigned long long)start;
-(void)setStart:(unsigned long long)arg1 ;
@end

