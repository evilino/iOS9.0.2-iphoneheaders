/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:07:51 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/NanoPreferenceBundles/Applications/ETSettings.bundle/ETSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIImage;

@interface ETPhotoCacheEntryStyleData : NSObject {

	unsigned _state;
	UIImage* _photo;

}

@property (assign,nonatomic) unsigned state;               //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) UIImage * photo;              //@synthesize photo=_photo - In the implementation block
-(void)evictPhoto;
-(UIImage *)photo;
-(unsigned)state;
-(void)setState:(unsigned)arg1 ;
-(void)setPhoto:(UIImage *)arg1 ;
@end

