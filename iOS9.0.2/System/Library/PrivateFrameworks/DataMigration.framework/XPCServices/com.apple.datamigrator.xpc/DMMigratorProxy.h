/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:20 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataMigration.framework/XPCServices/com.apple.datamigrator.xpc/com.apple.datamigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataMigration/DMXPCConnection.h>
#import <com.apple.datamigrator/DMMigratorProgressHandler.h>

@protocol OS_xpc_object;
@class DMMigrator, NSObject, NSString;

@interface DMMigratorProxy : DMXPCConnection <DMMigratorProgressHandler> {

	DMMigrator* _migrator;
	NSObject*<OS_xpc_object> _currentEvent;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)migrationCompletedWithSuccess:(char)arg1 ;
-(void)migrationRunningPlugin:(id)arg1 ;
-(void)handleMessage:(id)arg1 ;
-(id)initWithConnection:(id)arg1 ;
@end

