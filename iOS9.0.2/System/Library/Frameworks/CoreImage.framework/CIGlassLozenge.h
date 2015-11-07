/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:26 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface CIGlassLozenge : CIFilter {

	CIImage* inputImage;
	CIVector* inputPoint0;
	CIVector* inputPoint1;
	NSNumber* inputRadius;
	NSNumber* inputRefraction;

}
+(id)customAttributes;
-(id)_CILozengeRefraction;
-(id)outputImage;
@end
