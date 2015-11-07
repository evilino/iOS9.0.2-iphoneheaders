/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:13:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Videos.app/Videos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MPStoreAVItem.h>
#import <libobjc.A.dylib/AVAssetResourceLoaderDelegate.h>

@class IKAssetElement, NSString;

@interface VideosExtrasAVItem : MPStoreAVItem <AVAssetResourceLoaderDelegate> {

	char _background;
	IKAssetElement* _assetElement;
	unsigned _mediaType;

}

@property (nonatomic,readonly) IKAssetElement * assetElement;                    //@synthesize assetElement=_assetElement - In the implementation block
@property (getter=isBackground,nonatomic,readonly) char background;              //@synthesize background=_background - In the implementation block
@property (nonatomic,readonly) unsigned mediaType;                               //@synthesize mediaType=_mediaType - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IKAssetElement *)assetElement;
-(id)initWithAssetElement:(id)arg1 mediaType:(unsigned)arg2 isBackground:(char)arg3 ;
-(int)_expectedPlaybackMode;
-(void)loadAssetAndPlayerItem;
-(void)setPlaybackStoppedTime:(double)arg1 ;
-(char)isValidPlayerSubstituteForItem:(id)arg1 ;
-(char)isAssetURLValid;
-(unsigned)mediaType;
-(unsigned)type;
-(char)isBackground;
-(char)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2 ;
@end
