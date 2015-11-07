/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:18 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/distill
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary;

@interface ProgressParameterWrapper : NSObject {

	unsigned progressTotalCount;
	double progressIncrement;
	double progressTotal;
	unsigned progressUpdatePeriod;
	NSDictionary* progressInfo;

}
-(id)initForTotalCount:(unsigned)arg1 numberOfLoops:(unsigned)arg2 ;
-(void)notifyProgress;
-(void)notifyFinishProgress;
-(unsigned)progressUpdatePeriod;
-(void)dealloc;
@end
