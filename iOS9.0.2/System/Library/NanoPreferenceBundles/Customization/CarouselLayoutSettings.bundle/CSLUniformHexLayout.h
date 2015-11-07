/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:07:56 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/NanoPreferenceBundles/Customization/CarouselLayoutSettings.bundle/CarouselLayoutSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CarouselLayoutSettings/CarouselLayoutSettings-Structs.h>
#import <CarouselLayoutSettings/CSLHexLayout.h>

@interface CSLUniformHexLayout : CSLHexLayout {

	float _diameter;
	float _hexSideSize;

}

@property (assign,nonatomic) float hexSideSize;              //@synthesize hexSideSize=_hexSideSize - In the implementation block
-(float)hexSideSize;
-(id)initWithDefaultPixelDiameter:(float)arg1 ;
-(SCD_Struct_CS1)layoutAttributesForItemAtHex:(Hex)arg1 ;
-(float)hexSideSizeWithCenterDiameter:(float)arg1 ;
-(Hex)hexAtPoint:(CGPoint)arg1 ;
-(void)setHexSideSize:(float)arg1 ;
@end
