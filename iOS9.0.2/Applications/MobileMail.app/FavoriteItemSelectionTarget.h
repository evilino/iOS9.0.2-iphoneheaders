/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:38 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol FavoriteItemSelectionTarget <NSObject>
@required
-(void)setSelectedSourceType:(unsigned)arg1;
-(void)selectCombinedMailboxWithType:(int)arg1 animated:(char)arg2;
-(void)selectMailbox:(id)arg1 animated:(char)arg2;
-(void)selectAccount:(id)arg1 animated:(char)arg2;
-(void)selectCombinedInboxWithSourceType:(unsigned)arg1 animated:(char)arg2;
-(void)selectMailbox:(id)arg1 andPopToMailboxController:(char)arg2 animated:(char)arg3;
-(void)showVIPSettingsAnimated:(char)arg1;

@end

