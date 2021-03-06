/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:54 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CKRecordID, NSDate, NSError, NSMutableArray;

@interface MBCKFetchInfo : NSObject {

	CKRecordID* _recordID;
	unsigned _state;
	unsigned _saveAttempts;
	NSDate* _retryDate;
	NSError* _error;
	NSMutableArray* _callbacks;

}

@property (nonatomic,retain) CKRecordID * recordID;                   //@synthesize recordID=_recordID - In the implementation block
@property (assign) unsigned state;                                    //@synthesize state=_state - In the implementation block
@property (assign) unsigned saveAttempts;                             //@synthesize saveAttempts=_saveAttempts - In the implementation block
@property (nonatomic,retain) NSDate * retryDate;                      //@synthesize retryDate=_retryDate - In the implementation block
@property (nonatomic,retain) NSError * error;                         //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSMutableArray * callbacks;              //@synthesize callbacks=_callbacks - In the implementation block
-(NSDate *)retryDate;
-(void)setRetryDate:(NSDate *)arg1 ;
-(NSMutableArray *)callbacks;
-(NSError *)error;
-(id)init;
-(unsigned)state;
-(void)setState:(unsigned)arg1 ;
-(void)setCallbacks:(NSMutableArray *)arg1 ;
-(unsigned)saveAttempts;
-(void)setSaveAttempts:(unsigned)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(void)setRecordID:(CKRecordID *)arg1 ;
-(CKRecordID *)recordID;
@end

