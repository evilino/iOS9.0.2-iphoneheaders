/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:37:07 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <passd/SQLiteEntity.h>

@interface SQLiteMetaEntity : SQLiteEntity
+(id)anyInDatabase:(id)arg1 withType:(id)arg2 name:(id)arg3 ;
+(id)queryWithDatabase:(id)arg1 types:(id)arg2 tableName:(id)arg3 ;
+(id)databaseTable;
+(id)_typePredicate:(id)arg1 ;
+(id)_namePredicate:(id)arg1 ;
+(id)_tableNamePredicate:(id)arg1 ;
+(id)anyInDatabase:(id)arg1 withType:(id)arg2 tableName:(id)arg3 ;
+(id)queryWithDatabase:(id)arg1 type:(id)arg2 ;
+(id)queryWithDatabase:(id)arg1 type:(id)arg2 tableName:(id)arg3 ;
-(id)name;
-(id)type;
-(id)SQL;
-(id)tableName;
@end

