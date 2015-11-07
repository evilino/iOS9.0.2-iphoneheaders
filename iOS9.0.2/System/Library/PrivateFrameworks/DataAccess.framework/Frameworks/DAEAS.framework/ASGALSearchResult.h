/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:34 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>

@class NSString, NSArray, NSData, NSDictionary, NSMutableArray;

@interface ASGALSearchResult : ASItem {

	NSString* _longID;
	NSArray* _classes;
	NSArray* _collectionIDs;
	NSString* _phone;
	NSString* _office;
	NSString* _title;
	NSString* _company;
	NSString* _alias;
	NSString* _firstName;
	NSString* _lastName;
	NSString* _homePhone;
	NSString* _mobilePhone;
	NSString* _emailAddress;
	NSData* _photoData;
	NSDictionary* _applicationData;
	NSMutableArray* _mClasses;
	NSMutableArray* _mCollectionIDs;

}

@property (nonatomic,retain) NSString * longID;                            //@synthesize longID=_longID - In the implementation block
@property (nonatomic,retain) NSArray * classes;                            //@synthesize classes=_classes - In the implementation block
@property (nonatomic,retain) NSArray * collectionIDs;                      //@synthesize collectionIDs=_collectionIDs - In the implementation block
@property (nonatomic,copy) NSString * phone;                               //@synthesize phone=_phone - In the implementation block
@property (nonatomic,copy) NSString * office;                              //@synthesize office=_office - In the implementation block
@property (nonatomic,copy) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * company;                             //@synthesize company=_company - In the implementation block
@property (nonatomic,copy) NSString * alias;                               //@synthesize alias=_alias - In the implementation block
@property (nonatomic,copy) NSString * firstName;                           //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,copy) NSString * lastName;                            //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,copy) NSString * homePhone;                           //@synthesize homePhone=_homePhone - In the implementation block
@property (nonatomic,copy) NSString * mobilePhone;                         //@synthesize mobilePhone=_mobilePhone - In the implementation block
@property (nonatomic,copy) NSString * emailAddress;                        //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,copy) NSData * photoData;                             //@synthesize photoData=_photoData - In the implementation block
@property (nonatomic,retain) NSDictionary * applicationData;               //@synthesize applicationData=_applicationData - In the implementation block
@property (nonatomic,retain) NSMutableArray * mClasses;                    //@synthesize mClasses=_mClasses - In the implementation block
@property (nonatomic,retain) NSMutableArray * mCollectionIDs;              //@synthesize mCollectionIDs=_mCollectionIDs - In the implementation block
+(char)acceptsTopLevelLeaves;
+(char)parsingLeafNode;
+(char)parsingWithSubItems;
+(char)frontingBasicTypes;
+(char)notifyOfUnknownTokens;
+(id)asParseRules;
-(void)addClass:(id)arg1 ;
-(NSString *)company;
-(NSDictionary *)applicationData;
-(NSString *)firstName;
-(NSString *)lastName;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(NSString *)title;
-(NSString *)phone;
-(NSArray *)classes;
-(void)setClasses:(NSArray *)arg1 ;
-(void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6 ;
-(void)postProcessApplicationData;
-(void)setLongID:(NSString *)arg1 ;
-(void)addCollectionID:(id)arg1 ;
-(NSMutableArray *)mClasses;
-(NSMutableArray *)mCollectionIDs;
-(void)setMClasses:(NSMutableArray *)arg1 ;
-(void)setMCollectionIDs:(NSMutableArray *)arg1 ;
-(NSArray *)collectionIDs;
-(void)setOffice:(NSString *)arg1 ;
-(void)setHomePhone:(NSString *)arg1 ;
-(void)setMobilePhone:(NSString *)arg1 ;
-(void)setPhotoData:(NSData *)arg1 ;
-(NSString *)office;
-(NSString *)homePhone;
-(NSString *)mobilePhone;
-(NSData *)photoData;
-(id)convertToDAContactSearchResultElement;
-(void)setCollectionIDs:(NSArray *)arg1 ;
-(NSString *)alias;
-(void)setAlias:(NSString *)arg1 ;
-(NSString *)longID;
-(void)setApplicationData:(NSDictionary *)arg1 ;
-(void)setCompany:(NSString *)arg1 ;
-(void)setPhone:(NSString *)arg1 ;
-(NSString *)emailAddress;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(void)setEmailAddress:(NSString *)arg1 ;
@end
