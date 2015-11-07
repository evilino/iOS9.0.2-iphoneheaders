/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:03 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Feedback Assistant iOS/FBAManagedFeedbackObject.h>

@class NSString, NSDate, FBAFeedbackFollowup, NSNumber;

@interface FBAFeedbackFollowupResponse : FBAManagedFeedbackObject

@property (assign) unsigned type; 
@property (retain) NSString * text; 
@property (retain) NSDate * createdAt; 
@property (retain) NSString * role; 
@property (retain) FBAFeedbackFollowup * followup; 
@property (nonatomic,retain) NSNumber * primitiveType; 
+(int)sortValueOfFollowupResponseRole:(id)arg1 ;
+(unsigned)followupResponseTypeFromString:(id)arg1 ;
+(id)entityName;
-(void)setPropertiesFromJSONObject:(id)arg1 ;
-(char)isValidationResponse;
-(char)isValidated;
-(void)setType:(unsigned)arg1 ;
-(unsigned)type;
@end
