/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:29 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface SBSetupManager : NSObject {

	char _inSetupMode;

}

@property (getter=isInSetupMode,nonatomic,readonly) char inSetupMode; 
+(id)sharedInstance;
-(char)isInSetupMode;
-(char)updateInSetupMode;
-(char)_setInSetupMode:(char)arg1 ;
-(char)setupHasFinishedRestoringFromBackup;
-(char)setupIsRunningForUpdateInstall;
@end

