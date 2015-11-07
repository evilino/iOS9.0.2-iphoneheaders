/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:00 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Diagnostics.app/Diagnostics
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class UINavigationController;


@protocol DADisplayProtocol <NSObject>
@property (nonatomic,retain) UINavigationController * primaryNavigationController; 
@required
-(void)setPrimaryNavigationController:(id)arg1;
-(void)displayFailure:(id)arg1;
-(void)displayWaiting;
-(void)displayProgress:(id)arg1;
-(void)displayUIUpdate:(id)arg1 progress:(id)arg2;
-(void)displayArchived;
-(void)displayUnenroll;
-(void)displayExit;
-(UINavigationController *)primaryNavigationController;

@end
