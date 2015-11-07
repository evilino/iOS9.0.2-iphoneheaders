/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:40 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface CityPersistenceConversions : NSObject
+(id)cityFromDictionary:(id)arg1 ;
+(id)dictionaryRepresentationOfCity:(id)arg1 ;
+(id)cloudDictionaryRepresentationOfCity:(id)arg1 ;
+(id)cloudDictionaryRepresentationOfALCity:(id)arg1 ;
+(id)cityFromCloudDictionary:(id)arg1 ;
+(void)populateCity:(id)arg1 withDayForecastDictionaries:(id)arg2 ;
+(void)populateCity:(id)arg1 withHourlyForecastDictionaries:(id)arg2 ;
+(char)isCityValid:(id)arg1 ;
+(id)weatherDetailsDictionaryFromCity:(id)arg1 ;
+(id)dayForecastDictionariesFromCity:(id)arg1 ;
+(id)hourlyForecastDictionariesFromCity:(id)arg1 ;
+(id)cityFromALCity:(id)arg1 ;
@end
