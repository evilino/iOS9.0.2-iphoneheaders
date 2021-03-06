/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:04 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@interface CAMBlinkAndSmileDetectionCommand : CAMCaptureCommand {

	char __blinkDetectionEnabled;
	char __smileDetectionEnabled;

}

@property (getter=_isBlinkDetectionEnabled,nonatomic,readonly) char _blinkDetectionEnabled;              //@synthesize _blinkDetectionEnabled=__blinkDetectionEnabled - In the implementation block
@property (getter=_isSmileDetectionEnabled,nonatomic,readonly) char _smileDetectionEnabled;              //@synthesize _smileDetectionEnabled=__smileDetectionEnabled - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)executeWithContext:(id)arg1 ;
-(id)initWithBlinkDetection:(char)arg1 smileDetection:(char)arg2 ;
-(char)_isBlinkDetectionEnabled;
-(char)_isSmileDetectionEnabled;
@end

