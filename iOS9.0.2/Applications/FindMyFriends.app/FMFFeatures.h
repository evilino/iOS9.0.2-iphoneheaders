/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:05 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FindMyFriends/FMFEntity.h>

@class NSNumber, FMFAccount;

@interface FMFFeatures : FMFEntity

@property (nonatomic,retain) NSNumber * canRemoveFollowers; 
@property (nonatomic,retain) NSNumber * canViewFollowers; 
@property (nonatomic,retain) NSNumber * canRemoveFriends; 
@property (nonatomic,retain) NSNumber * canViewFriends; 
@property (nonatomic,retain) NSNumber * canSendRequests; 
@property (nonatomic,retain) NSNumber * canOfferLocation; 
@property (nonatomic,retain) NSNumber * canActOnRequests; 
@property (nonatomic,retain) NSNumber * canChangeAllowFriendRequests; 
@property (nonatomic,retain) NSNumber * canChangeHideLocation; 
@property (nonatomic,retain) NSNumber * canChangeMyLabel; 
@property (nonatomic,retain) NSNumber * canChangeMeDevice; 
@property (nonatomic,retain) NSNumber * canRemoveDevice; 
@property (nonatomic,retain) NSNumber * canCreateEvent; 
@property (nonatomic,retain) NSNumber * canActOnEventRequests; 
@property (nonatomic,retain) NSNumber * canAddEventFriends; 
@property (nonatomic,retain) NSNumber * canEditEvent; 
@property (nonatomic,retain) NSNumber * canDeleteEvent; 
@property (nonatomic,retain) NSNumber * canLeaveEvent; 
@property (nonatomic,retain) NSNumber * canRemoveEventFriends; 
@property (nonatomic,retain) NSNumber * canNotifyMe; 
@property (nonatomic,retain) NSNumber * canNotifyOthers; 
@property (nonatomic,retain) NSNumber * canDiscoverContacts; 
@property (nonatomic,retain) NSNumber * canChangeGeoFenceAlerts; 
@property (nonatomic,retain) NSNumber * canAirDropOffer; 
@property (nonatomic,retain) FMFAccount * account; 
-(void)prepareForDeletion;
@end

