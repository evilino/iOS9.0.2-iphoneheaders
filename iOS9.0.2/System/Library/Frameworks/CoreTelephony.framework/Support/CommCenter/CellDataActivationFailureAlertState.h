/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:55 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/Support/CommCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CommCenter/CommCenter-Structs.h>
@class NSLock;

@interface CellDataActivationFailureAlertState : NSObject {

	NSLock* fLockMain;
	int fAction;
	CFSharedRef<const __CFString>* fDataPlanUrl;
	CFSharedRef<const __CFString>* fDataPlanIccid;
	char _scheduled;

}

@property (assign) char scheduled;              //@synthesize scheduled=_scheduled - In the implementation block
@property (assign) int action; 
+(id)sharedInstance;
-(void)appInit;
-(char)trylockMain;
-(void)unlockMain;
-(void)lockScheduled;
-(void)unlockScheduled;
-(void)setDataPlanUrl:(CFSharedRef<const __CFString>*)arg1 ;
-(void)setDataPlanIccid:(CFSharedRef<const __CFString>*)arg1 ;
-(void)handleActionResponse;
-(void)dealloc;
-(id)init;
-(int)action;
-(void)setAction:(int)arg1 ;
-(char)scheduled;
-(void)setScheduled:(char)arg1 ;
@end
