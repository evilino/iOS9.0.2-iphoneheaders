/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/TwoPartTopBarLabel.h>
#import <Maps/StarkDistanceLabel.h>

@class NSString;

@interface TwoPartDistanceLabel : TwoPartTopBarLabel <StarkDistanceLabel> {

	int _detail;
	double _remainingDistance;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double remainingDistance;              //@synthesize remainingDistance=_remainingDistance - In the implementation block
@property (assign,nonatomic) int detail;                            //@synthesize detail=_detail - In the implementation block
-(double)remainingDistance;
-(void)setRemainingDistance:(double)arg1 ;
-(int)detail;
-(void)setDetail:(int)arg1 ;
-(void)updateContent;
@end
