/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:37:14 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/PlugIns/com.apple.UIKit.screenpicker.appex/com.apple.UIKit.screenpicker
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class AVOutputDevice, NSString;

@interface _UIScreenRoute : NSObject {

	char _selected;
	AVOutputDevice* _device;

}

@property (assign,getter=isSelected,nonatomic) char selected;               //@synthesize selected=_selected - In the implementation block
@property (nonatomic,retain,readonly) AVOutputDevice * device;              //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) NSString * sortTitle; 
-(id)displayTitleForTraits:(id)arg1 ;
-(id)imageForTraits:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(char)isSelected;
-(void)setSelected:(char)arg1 ;
-(AVOutputDevice *)device;
-(id)initWithDevice:(id)arg1 ;
-(id)ID;
-(NSString *)sortTitle;
@end
