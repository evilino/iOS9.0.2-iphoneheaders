/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:21 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CBUUID;

@interface CBAttribute : NSObject {

	CBUUID* _UUID;

}

@property (nonatomic,readonly) CBUUID * UUID;              //@synthesize UUID=_UUID - In the implementation block
-(void)dealloc;
-(CBUUID *)UUID;
-(id)initWithUUID:(id)arg1 ;
@end
