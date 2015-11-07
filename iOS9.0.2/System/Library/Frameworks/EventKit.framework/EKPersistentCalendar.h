/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EKPersistentObject.h>

@class EKPersistentSource, NSString, NSURL, NSSet;

@interface EKPersistentCalendar : EKPersistentObject

@property (nonatomic,retain) EKPersistentSource * source; 
@property (nonatomic,readonly) NSString * UUID; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * externalID; 
@property (nonatomic,copy) NSString * externalModificationTag; 
@property (assign,nonatomic) int displayOrder; 
@property (nonatomic,copy) NSString * colorString; 
@property (assign,getter=isColorDisplayOnly,nonatomic) char colorDisplayOnly; 
@property (nonatomic,copy) NSString * symbolicColorName; 
@property (assign,nonatomic) unsigned allowedEntityTypes; 
@property (assign,nonatomic) char allowsContentModifications; 
@property (assign,nonatomic) char prohibitsScheduling; 
@property (assign,getter=isSubscribed,nonatomic) char subscribed; 
@property (assign,getter=isHidden,nonatomic) char hidden; 
@property (assign,getter=isImmutable,nonatomic) char immutable; 
@property (assign,getter=isSharingInvitation,nonatomic) char sharingInvitation; 
@property (assign,nonatomic) char canBePublished; 
@property (assign,nonatomic) char canBeShared; 
@property (assign,nonatomic) char schedulingProhibited; 
@property (assign,nonatomic) char isFacebookBirthdayCalendar; 
@property (assign,nonatomic) char isHolidaySubscribedCalendar; 
@property (assign,nonatomic) char isFamilyCalendar; 
@property (assign,nonatomic) char isMarkedUndeletable; 
@property (assign,nonatomic) char isMarkedImmutableSharees; 
@property (assign,nonatomic) char isIgnoringEventAlerts; 
@property (assign,nonatomic) char isIgnoringSharedCalendarNotifications; 
@property (nonatomic,readonly) char isSuggestionsCalendar; 
@property (nonatomic,readonly) char isMutableSuggestionsCalendar; 
@property (nonatomic,readonly) char isDefaultCalendarForSource; 
@property (assign,nonatomic) unsigned sharingStatus; 
@property (assign,nonatomic) unsigned invitationStatus; 
@property (nonatomic,copy) NSString * sharedOwnerName; 
@property (nonatomic,copy) NSURL * sharedOwnerAddress; 
@property (assign,nonatomic) unsigned sharingInvitationResponse; 
@property (nonatomic,copy) NSSet * sharees; 
@property (nonatomic,copy) NSString * publishedURL; 
@property (assign,getter=isPublished,nonatomic) char published; 
@property (nonatomic,copy) NSString * selfIdentityDisplayName; 
@property (nonatomic,copy) NSString * selfIdentityEmail; 
@property (nonatomic,copy) NSURL * selfIdentityAddress; 
@property (nonatomic,copy) NSString * selfIdentityFirstName; 
@property (nonatomic,copy) NSString * selfIdentityLastName; 
@property (nonatomic,copy) NSString * ownerIdentityDisplayName; 
@property (nonatomic,copy) NSString * ownerIdentityEmail; 
@property (nonatomic,copy) NSURL * ownerIdentityAddress; 
@property (nonatomic,copy) NSString * ownerIdentityFirstName; 
@property (nonatomic,copy) NSString * ownerIdentityLastName; 
@property (nonatomic,copy) NSString * bulkRequests; 
@property (nonatomic,copy) NSString * subcalAccountID; 
@property (nonatomic,copy) NSString * pushKey; 
+(id)defaultPropertiesToLoad;
+(id)relations;
+(id)calendar;
-(NSString *)externalModificationTag;
-(void)setExternalModificationTag:(NSString *)arg1 ;
-(char)isColorDisplayOnly;
-(void)setColorDisplayOnly:(char)arg1 ;
-(NSString *)symbolicColorName;
-(void)setColorString:(NSString *)arg1 ;
-(void)setAllowsContentModifications:(char)arg1 ;
-(char)prohibitsScheduling;
-(void)setProhibitsScheduling:(char)arg1 ;
-(void)setImmutable:(char)arg1 ;
-(void)setSharingInvitation:(char)arg1 ;
-(void)setCanBePublished:(char)arg1 ;
-(void)setCanBeShared:(char)arg1 ;
-(void)setSchedulingProhibited:(char)arg1 ;
-(void)setIsFacebookBirthdayCalendar:(char)arg1 ;
-(void)setIsHolidaySubscribedCalendar:(char)arg1 ;
-(void)setIsFamilyCalendar:(char)arg1 ;
-(void)setIsMarkedUndeletable:(char)arg1 ;
-(void)setIsMarkedImmutableSharees:(char)arg1 ;
-(char)isMutableSuggestionsCalendar;
-(void)setSharedOwnerName:(NSString *)arg1 ;
-(void)setSharedOwnerAddress:(NSURL *)arg1 ;
-(unsigned)sharingInvitationResponse;
-(void)setSharingInvitationResponse:(unsigned)arg1 ;
-(void)setPublishedURL:(NSString *)arg1 ;
-(unsigned)invitationStatus;
-(void)setAllowedEntityTypes:(unsigned)arg1 ;
-(NSString *)selfIdentityDisplayName;
-(void)setSelfIdentityDisplayName:(NSString *)arg1 ;
-(void)setSelfIdentityEmail:(NSString *)arg1 ;
-(NSURL *)selfIdentityAddress;
-(void)setSelfIdentityAddress:(NSURL *)arg1 ;
-(NSString *)selfIdentityFirstName;
-(void)setSelfIdentityFirstName:(NSString *)arg1 ;
-(NSString *)selfIdentityLastName;
-(void)setSelfIdentityLastName:(NSString *)arg1 ;
-(NSString *)ownerIdentityDisplayName;
-(void)setOwnerIdentityDisplayName:(NSString *)arg1 ;
-(NSString *)ownerIdentityEmail;
-(void)setOwnerIdentityEmail:(NSString *)arg1 ;
-(NSURL *)ownerIdentityAddress;
-(void)setOwnerIdentityAddress:(NSURL *)arg1 ;
-(NSString *)ownerIdentityFirstName;
-(void)setOwnerIdentityFirstName:(NSString *)arg1 ;
-(NSString *)ownerIdentityLastName;
-(void)setOwnerIdentityLastName:(NSString *)arg1 ;
-(NSString *)bulkRequests;
-(void)setBulkRequests:(NSString *)arg1 ;
-(NSString *)subcalAccountID;
-(void)setSubcalAccountID:(NSString *)arg1 ;
-(NSString *)pushKey;
-(void)setPushKey:(NSString *)arg1 ;
-(id)digest;
-(void)setDigest:(id)arg1 ;
-(char)hasAlarms;
-(NSString *)externalID;
-(id)alarms;
-(char)isIgnoringEventAlerts;
-(void)setAlarms:(id)arg1 ;
-(void)addAlarm:(id)arg1 ;
-(char)isFamilyCalendar;
-(unsigned)sharingStatus;
-(NSString *)sharedOwnerName;
-(NSSet *)sharees;
-(char)canBeShared;
-(void)setSharees:(NSSet *)arg1 ;
-(char)isMarkedImmutableSharees;
-(void)removeSharee:(id)arg1 ;
-(void)setSharingStatus:(unsigned)arg1 ;
-(void)addSharee:(id)arg1 ;
-(unsigned)allowedEntityTypes;
-(char)isHolidaySubscribedCalendar;
-(char)isMarkedUndeletable;
-(char)isSubscribed;
-(void)setDisplayOrder:(int)arg1 ;
-(char)schedulingProhibited;
-(char)isDefaultCalendarForSource;
-(NSURL *)sharedOwnerAddress;
-(char)isSuggestionsCalendar;
-(char)isFacebookBirthdayCalendar;
-(char)isSharingInvitation;
-(int)displayOrder;
-(void)setSymbolicColorName:(NSString *)arg1 ;
-(void)removeAlarm:(id)arg1 ;
-(char)allowsContentModifications;
-(void)setIsIgnoringSharedCalendarNotifications:(char)arg1 ;
-(char)isIgnoringSharedCalendarNotifications;
-(void)setIsIgnoringEventAlerts:(char)arg1 ;
-(void)setInvitationStatus:(unsigned)arg1 ;
-(NSString *)selfIdentityEmail;
-(char)isPublished;
-(NSString *)publishedURL;
-(void)setPublished:(char)arg1 ;
-(char)canBePublished;
-(void)setIsPublished:(char)arg1 ;
-(char)isImmutable;
-(char)isHidden;
-(void)setHidden:(char)arg1 ;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(NSString *)title;
-(NSString *)UUID;
-(EKPersistentSource *)source;
-(void)setSource:(EKPersistentSource *)arg1 ;
-(char)validate:(id*)arg1 ;
-(int)entityType;
-(void)setExternalID:(NSString *)arg1 ;
-(NSString *)colorString;
-(void)setUUID:(NSString *)arg1 ;
-(void)setSubscribed:(char)arg1 ;
@end
