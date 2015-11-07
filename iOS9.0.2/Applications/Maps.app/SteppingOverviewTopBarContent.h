/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:29 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/OverviewTopBarContent.h>

@class NSString, NSDate;

@interface SteppingOverviewTopBarContent : OverviewTopBarContent {

	NSString* _routeName;
	int _transportType;
	NSDate* _departTime;
	NSDate* _arrivalTime;

}

@property (nonatomic,copy) NSString * routeName;              //@synthesize routeName=_routeName - In the implementation block
@property (nonatomic,copy) NSDate * departTime;               //@synthesize departTime=_departTime - In the implementation block
@property (nonatomic,copy) NSDate * arrivalTime;              //@synthesize arrivalTime=_arrivalTime - In the implementation block
-(NSDate *)departTime;
-(void)setDepartTime:(NSDate *)arg1 ;
-(void)_updateSecondaryTextForTransit;
-(void)_updateSecondaryTextForNonTransit;
-(void)_updateSecondaryText;
-(void)setSelectedRoute:(id)arg1 withIndex:(unsigned)arg2 destinationName:(id)arg3 ;
-(NSString *)routeName;
-(void)setRouteName:(NSString *)arg1 ;
-(NSDate *)arrivalTime;
-(void)setArrivalTime:(NSDate *)arg1 ;
@end
