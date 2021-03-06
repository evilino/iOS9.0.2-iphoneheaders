/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:50 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/mapspushd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MSPMapsPushDaemonProxy
@required
-(void)registerForTopic;
-(void)simulateAnnouncement:(id)arg1;
-(void)clearBulletinWithRecordID:(id)arg1;
-(void)simulateProblemResolution;
-(void)clearCurrentAnnouncement;
-(void)resetShownAnnouncements;
-(void)fetchProblemStatus;
-(void)fetchDevicePushToken:(/*^block*/id)arg1;
-(void)fetchCurrentAnnouncement:(/*^block*/id)arg1;
-(void)checkin;
-(void)showTrafficConditionsBulletinWithTitle:(id)arg1 message:(id)arg2 actionURL:(id)arg3;
-(void)clearTrafficConditionsBulletin;

@end

