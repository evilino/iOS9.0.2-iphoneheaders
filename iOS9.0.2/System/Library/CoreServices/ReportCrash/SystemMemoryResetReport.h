/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:25 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/ReportCrash
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ReportCrash/JetsamReport.h>

@interface SystemMemoryResetReport : JetsamReport
-(void)acquireJetsamData;
-(id)initWithEvent:(id)arg1 code:(unsigned long long)arg2 ;
-(id)appleCareCSVFieldsWithCount:(unsigned)arg1 ;
-(id)reportIdAtDate:(id)arg1 ;
-(id)problemType;
-(char)isActionable;
@end

