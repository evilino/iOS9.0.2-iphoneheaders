/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:08:14 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/FlickrSettings.bundle/FlickrSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccountsUI/ACUIViewController.h>

@class ACAccount;

@interface SLFlickrAccountEditViewController : ACUIViewController {

	ACAccount* _account;
	char _isPasswordDirty;

}
-(void)_deleteButtonTapped:(id)arg1 ;
-(id)_passwordWithSpecifier:(id)arg1 ;
-(id)_usernameWithSpecifier:(id)arg1 ;
-(void)_handlePasswordChangeWithResult:(char)arg1 error:(id)arg2 ;
-(void)_showAlertForError:(id)arg1 ;
-(void)_updatePasswordWithValueFromTextField;
-(void)setPassword:(id)arg1 ;
-(id)specifiers;
-(void)_doneButtonTapped:(id)arg1 ;
-(void)cancelButtonTapped:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)_updateDoneButton;
-(void)setSpecifier:(id)arg1 ;
-(void)_setPassword:(id)arg1 withSpecifier:(id)arg2 ;
-(void)_textFieldValueDidChange:(id)arg1 ;
@end

