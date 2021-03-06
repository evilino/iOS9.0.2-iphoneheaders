/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:35:25 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class _GAXSettingsFastStorage, NSArray, NSDictionary, NSString, NSDate;

@interface GAXSettings : NSObject {

	_GAXSettingsFastStorage* _fastStorage;

}

@property (nonatomic,retain) NSArray * userConfiguredAppIDs; 
@property (nonatomic,retain) NSDictionary * savedAccessibilityFeatures; 
@property (nonatomic,retain) NSArray * savedAccessibilityTripleClickOptions; 
@property (assign,nonatomic) int activeAppOrientation; 
@property (nonatomic,copy) NSString * activeAppID; 
@property (assign,nonatomic) char timeRestrictionHasExpired; 
@property (assign,getter=isActiveAppSelfLocked,nonatomic) char activeAppSelfLocked; 
@property (assign,nonatomic) char systemDidRestartDueToLowBattery; 
@property (nonatomic,copy) NSString * deviceID; 
@property (nonatomic,copy) NSString * productBuildVersion; 
@property (nonatomic,retain) NSDate * lastActivationDate; 
@property (nonatomic,retain) NSDate * lastPasscodeSetDate; 
@property (nonatomic,retain) NSDictionary * userAppProfile; 
@property (nonatomic,retain) NSDictionary * userGlobalProfile; 
@property (nonatomic,retain) _GAXSettingsFastStorage * fastStorage;                              //@synthesize fastStorage=_fastStorage - In the implementation block
+(id)sharedInstance;
-(_GAXSettingsFastStorage *)fastStorage;
-(void)setFastStorage:(_GAXSettingsFastStorage *)arg1 ;
-(void)setActiveAppSelfLocked:(char)arg1 ;
-(id)mutableUserAppProfile;
-(id)mutableUserGlobalProfile;
-(void)setUserGlobalProfile:(NSDictionary *)arg1 ;
-(void)setUserAppProfile:(NSDictionary *)arg1 ;
-(void)setSystemDidRestartDueToLowBattery:(char)arg1 ;
-(void)setLastActivationDate:(NSDate *)arg1 ;
-(void)setUserConfiguredAppIDs:(NSArray *)arg1 ;
-(void)setLastPasscodeSetDate:(NSDate *)arg1 ;
-(void)setTimeRestrictionHasExpired:(char)arg1 ;
-(void)setActiveAppOrientation:(int)arg1 ;
-(void)setActiveAppID:(NSString *)arg1 ;
-(NSDictionary *)userAppProfile;
-(NSString *)activeAppID;
-(NSDictionary *)savedAccessibilityFeatures;
-(void)setSavedAccessibilityFeatures:(NSDictionary *)arg1 ;
-(void)setSavedAccessibilityTripleClickOptions:(NSArray *)arg1 ;
-(NSArray *)savedAccessibilityTripleClickOptions;
-(int)activeAppOrientation;
-(char)isActiveAppSelfLocked;
-(char)systemDidRestartDueToLowBattery;
-(NSDate *)lastActivationDate;
-(NSDate *)lastPasscodeSetDate;
-(char)timeRestrictionHasExpired;
-(NSDictionary *)userGlobalProfile;
-(NSArray *)userConfiguredAppIDs;
-(id)init;
-(id)description;
-(void)setDeviceID:(NSString *)arg1 ;
-(NSString *)deviceID;
-(NSString *)productBuildVersion;
-(void)setProductBuildVersion:(NSString *)arg1 ;
@end

