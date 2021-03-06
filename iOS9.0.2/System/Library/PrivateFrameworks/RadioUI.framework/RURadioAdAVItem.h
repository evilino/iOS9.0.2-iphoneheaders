/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:58 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MPAVAdItem.h>

@class RURadioAdTrack, RadioStation, NSString;

@interface RURadioAdAVItem : MPAVAdItem {

	RURadioAdTrack* _adTrack;
	RadioStation* _station;
	NSString* _stationHash;
	NSString* _stationName;
	NSString* _stationStringID;
	long long _stationID;

}

@property (nonatomic,retain) RadioStation * station;                    //@synthesize station=_station - In the implementation block
@property (nonatomic,readonly) NSString * stationHash;                  //@synthesize stationHash=_stationHash - In the implementation block
@property (nonatomic,readonly) long long stationID;                     //@synthesize stationID=_stationID - In the implementation block
@property (nonatomic,readonly) NSString * stationName;                  //@synthesize stationName=_stationName - In the implementation block
@property (nonatomic,readonly) NSString * stationStringID;              //@synthesize stationStringID=_stationStringID - In the implementation block
-(void)loadAssetAndPlayerItem;
-(char)isValidPlayerSubstituteForItem:(id)arg1 ;
-(char)isStreamable;
-(id)mainTitle;
-(char)supportsSkip;
-(id)titlesForTime:(double)arg1 ;
-(void)_loadMediaItemWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)reevaluateType;
-(char)isLikedStateEnabled;
-(char)supportsLikedState;
-(id)artworkCatalogForPlaybackTime:(double)arg1 ;
-(char)usesSubscriptionLease;
-(NSString *)stationStringID;
-(void)_applyLoudnessInfo;
-(id)album;
-(unsigned)type;
-(id)title;
-(id)adTrack;
-(void)setStation:(RadioStation *)arg1 ;
-(long long)stationID;
-(id)mpuReporting_externalID;
-(unsigned)mpuReporting_itemType;
-(char)mpuReporting_shouldReportPlayEventsToStore;
-(NSString *)stationName;
-(id)initWithAdTrack:(id)arg1 ;
-(NSString *)stationHash;
-(RadioStation *)station;
@end

