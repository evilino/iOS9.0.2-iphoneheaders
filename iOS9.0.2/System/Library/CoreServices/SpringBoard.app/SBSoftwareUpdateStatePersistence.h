/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:27 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDate;

@interface SBSoftwareUpdateStatePersistence : NSObject {

	unsigned _alertFlow;
	NSDate* _nextAlertDate;
	char _downloadWasQueuedRemotely;

}

@property (assign,nonatomic) char downloadWasQueuedRemotely;              //@synthesize downloadWasQueuedRemotely=_downloadWasQueuedRemotely - In the implementation block
@property (assign,nonatomic) unsigned alertFlow;                          //@synthesize alertFlow=_alertFlow - In the implementation block
@property (nonatomic,retain) NSDate * nextAlertDate;                      //@synthesize nextAlertDate=_nextAlertDate - In the implementation block
-(void)setAlertFlow:(unsigned)arg1 ;
-(void)setNextAlertDate:(NSDate *)arg1 ;
-(void)setDownloadWasQueuedRemotely:(char)arg1 ;
-(unsigned)alertFlow;
-(NSDate *)nextAlertDate;
-(char)downloadWasQueuedRemotely;
-(void)save;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)_load;
@end

