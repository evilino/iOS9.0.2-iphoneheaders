/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:05:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/DataClassMigrators/MapsDataClassMigrator.migrator/MapsDataClassMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapsDataClassMigrator/HistoryUIHold.h>

@protocol HistoryUIHold <NSObject>
@required
-(void)endHoldingUIInterferingTasks;

@end


@class NSString;

@interface HistoryUIHold : NSObject <HistoryUIHold> {

	char _ended;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)isHolding;
-(void)endHoldingUIInterferingTasks;
-(void)dealloc;
-(id)init;
@end

