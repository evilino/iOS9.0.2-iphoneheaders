/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:09 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface ABTCC : NSObject {

	char _calledExternalChangeCallbacks;
	int _simulateType;
	char _simulateAccessPrompt;
	char _simulateAccessPromptGranted;
	unsigned _simulateAccessPromptDelay;

}
+(id)sharedInstance;
-(void)callExternalChangeCallbacks:(char)arg1 ;
-(id)_simulateQueue;
-(int)accessPreflight;
-(unsigned char)isAccessRestricted;
-(void)accessRequestWithCompletion:(/*^block*/id)arg1 ;
-(void)simulate:(int)arg1 ;
-(void)simulateIfAccessPromptDisplayedThenUserGrantedAccess:(char)arg1 withDelay:(unsigned)arg2 ;
-(void)dealloc;
-(id)init;
@end

