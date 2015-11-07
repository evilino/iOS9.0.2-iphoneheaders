/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:20 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ContactsUI/CNPropertySimpleTransportCell.h>

@class UIImageView;

@interface CNPropertyPostalAddressCell : CNPropertySimpleTransportCell {

	char _shouldUseMapTiles;
	UIImageView* _mapImageView;
	float _oldMapWidth;

}

@property (assign,nonatomic) char shouldUseMapTiles;                  //@synthesize shouldUseMapTiles=_shouldUseMapTiles - In the implementation block
@property (nonatomic,retain) UIImageView * mapImageView;              //@synthesize mapImageView=_mapImageView - In the implementation block
@property (assign,nonatomic) float oldMapWidth;                       //@synthesize oldMapWidth=_oldMapWidth - In the implementation block
+(float)mapWidth;
+(id)defaultMapImage;
-(id)variableConstraints;
-(char)shouldUseMapTiles;
-(void)setMapImageView:(UIImageView *)arg1 ;
-(float)oldMapWidth;
-(void)setOldMapWidth:(float)arg1 ;
-(void)setMapImage:(id)arg1 ;
-(void)mapSnapshotWithPlacemark:(id)arg1 ;
-(UIImageView *)mapImageView;
-(void)tapGesture:(id)arg1 ;
-(void)setShouldUseMapTiles:(char)arg1 ;
-(void)setProperty:(id)arg1 ;
-(void)dealloc;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
@end
