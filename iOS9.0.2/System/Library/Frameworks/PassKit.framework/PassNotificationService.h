/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:37:06 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <passd/SQLiteEntity.h>

@interface PassNotificationService : SQLiteEntity
+(id)insertPassNotificationServiceWithNotificationService:(id)arg1 inDatabase:(id)arg2 ;
+(id)_predicateForNotificationServicePID:(id)arg1 ;
+(id)queryWithDatabase:(id)arg1 transactionServicePID:(unsigned long long)arg2 ;
+(id)databaseTable;
+(id)associationPropertyForEntityClass:(Class)arg1 ;
-(id)notificationService;
-(void)updateWithNotificationService:(id)arg1 ;
-(id)lastUpdatedTagDate;
-(void)updateWithLastUpdatedDate:(id)arg1 ;
-(void)updateWithLastUpdatedTag:(id)arg1 ;
-(void)updateWithRegistrationStatus:(unsigned)arg1 ;
-(id)initWithNotificationServicePID:(unsigned long long)arg1 inDatabase:(id)arg2 ;
-(id)lastUpdatedTag;
-(unsigned)registrationStatus;
-(id)lastUpdatedDate;
@end

