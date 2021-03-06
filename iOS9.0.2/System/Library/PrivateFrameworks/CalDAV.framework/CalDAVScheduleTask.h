/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:57 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVPostTask.h>

@class NSArray, CalDAVScheduleResponseItem, NSString;

@interface CalDAVScheduleTask : CoreDAVPostTask {

	NSArray* _attendees;
	CalDAVScheduleResponseItem* _scheduleResponse;
	NSString* _originator;

}

@property (nonatomic,retain) NSArray * attendees;                                        //@synthesize attendees=_attendees - In the implementation block
@property (nonatomic,retain) CalDAVScheduleResponseItem * scheduleResponse;              //@synthesize scheduleResponse=_scheduleResponse - In the implementation block
@property (nonatomic,retain) NSString * originator;                                      //@synthesize originator=_originator - In the implementation block
-(NSArray *)attendees;
-(void)setAttendees:(NSArray *)arg1 ;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(id)copyDefaultParserForContentType:(id)arg1 ;
-(id)initWithOriginator:(id)arg1 attendees:(id)arg2 outboxURL:(id)arg3 payload:(id)arg4 ;
-(void)setOriginator:(NSString *)arg1 ;
-(NSString *)originator;
-(void)setScheduleResponse:(CalDAVScheduleResponseItem *)arg1 ;
-(CalDAVScheduleResponseItem *)scheduleResponse;
-(id)additionalHeaderValues;
@end

