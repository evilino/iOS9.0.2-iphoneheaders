/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:06 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FindMyFriends/FMFBaseCmd.h>

@class NSString, NSNumber;

@interface FMFUpdateLabelCommand : FMFBaseCmd {

	char _isDefaultLabel;
	NSString* _labelUid;
	NSString* _label;
	NSString* _friendId;
	NSNumber* _latitude;
	NSNumber* _longitude;
	NSString* _serverLabelInfo;

}

@property (nonatomic,copy) NSString * labelUid;                     //@synthesize labelUid=_labelUid - In the implementation block
@property (nonatomic,copy) NSString * label;                        //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) char isDefaultLabel;                   //@synthesize isDefaultLabel=_isDefaultLabel - In the implementation block
@property (nonatomic,copy) NSString * friendId;                     //@synthesize friendId=_friendId - In the implementation block
@property (nonatomic,copy) NSNumber * latitude;                     //@synthesize latitude=_latitude - In the implementation block
@property (nonatomic,copy) NSNumber * longitude;                    //@synthesize longitude=_longitude - In the implementation block
@property (nonatomic,copy) NSString * serverLabelInfo;              //@synthesize serverLabelInfo=_serverLabelInfo - In the implementation block
-(id)willSucceedNotification;
-(id)willFailNotification;
-(id)customCommandNotification;
-(id)didSucceedNotification;
-(id)didFailNotification;
-(id)pathSuffix;
-(NSString *)serverLabelInfo;
-(id)initWithLabelStr:(id)arg1 uid:(id)arg2 typeDefault:(char)arg3 forFriend:(id)arg4 withLatitude:(id)arg5 longitude:(id)arg6 svrLabelInfo:(id)arg7 ;
-(char)maxLabelsReached;
-(void)setServerLabelInfo:(NSString *)arg1 ;
-(void)setLabelUid:(NSString *)arg1 ;
-(void)setIsDefaultLabel:(char)arg1 ;
-(void)setFriendId:(NSString *)arg1 ;
-(NSString *)labelUid;
-(char)isDefaultLabel;
-(NSString *)friendId;
-(NSNumber *)latitude;
-(NSNumber *)longitude;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(id)jsonBodyDictionary;
-(void)setLatitude:(NSNumber *)arg1 ;
-(void)setLongitude:(NSNumber *)arg1 ;
@end

