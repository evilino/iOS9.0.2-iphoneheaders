/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:13:03 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Weather.app/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol HourlyScrollerBeltDelegate <NSObject>
@required
-(id)currentTemperature;
-(int)currentHourIndex;
-(int)currentCondition;
-(void)didBeginScrolling;
-(void)didEndScrolling;
-(id)hourlyForecasts;
-(char)isCelsius;
-(unsigned)observationTime;
-(unsigned)sunsetTime;
-(unsigned)sunriseTime;
-(char)isDay;

@end
