/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:08:13 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/CoreRoutineSettings.bundle/CoreRoutineSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MKCircle.h>
#import <CoreRoutineSettings/RTMapAndTableRowItem.h>

@class RTLocationOfInterest, NSArray, NSString;

@interface RTPrivacyLOI : MKCircle <RTMapAndTableRowItem> {

	int state;
	RTLocationOfInterest* loi;
	NSArray* destinations;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) int state; 
@property (nonatomic,retain) RTLocationOfInterest * loi; 
@property (nonatomic,retain) NSArray * destinations; 
-(void)setLoi:(RTLocationOfInterest *)arg1 ;
-(RTLocationOfInterest *)loi;
-(void)populateSubtitleStyleCell:(id)arg1 ;
-(void)setDestinations:(NSArray *)arg1 ;
-(NSString *)description;
-(int)state;
-(void)setState:(int)arg1 ;
-(NSArray *)destinations;
-(int)recentCompare:(id)arg1 ;
-(int)frequencyCompare:(id)arg1 ;
@end
