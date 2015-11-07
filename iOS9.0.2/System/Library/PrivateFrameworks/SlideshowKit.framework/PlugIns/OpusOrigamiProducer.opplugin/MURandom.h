/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:23 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <OpusOrigamiProducer/MUPoolObject.h>

@interface MURandom : MUPoolObject {

	long _state[31];
	long* _frontPtr;
	long* _rearPtr;
	long* _endPtr;

}
+(id)randomGeneratorWithSeed:(unsigned long)arg1 ;
+(SCD_Struct_MU3*)poolInfo;
+(char)clearVars;
-(float)randomFloatInRange:(float)arg1 :(float)arg2 ;
-(void)_seed:(unsigned long)arg1 ;
-(long)randomInt;
@end
