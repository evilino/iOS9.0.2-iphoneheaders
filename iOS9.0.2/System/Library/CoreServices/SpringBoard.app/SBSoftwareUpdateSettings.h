/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:33 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UISettings.h>

@interface SBSoftwareUpdateSettings : _UISettings {

	unsigned _defaultRepopDuration;
	unsigned _repopStrategyTest;

}

@property (assign,nonatomic) unsigned defaultRepopDuration;              //@synthesize defaultRepopDuration=_defaultRepopDuration - In the implementation block
@property (assign,nonatomic) unsigned repopStrategyTest;                 //@synthesize repopStrategyTest=_repopStrategyTest - In the implementation block
+(id)settingsControllerModule;
-(unsigned)repopStrategyTest;
-(unsigned)defaultRepopDuration;
-(void)setDefaultRepopDuration:(unsigned)arg1 ;
-(void)setRepopStrategyTest:(unsigned)arg1 ;
-(void)setDefaultValues;
@end
