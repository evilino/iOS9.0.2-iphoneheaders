/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:54 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PINView.h>
#import <UIKit/UITableViewDataSource.h>

@class UITextField, AlphanumericPINTableViewCell, UITableView, NSString;

@interface PSTextFieldPINView : PINView <UITableViewDataSource> {

	UITextField* _passcodeField;
	AlphanumericPINTableViewCell* _cell;
	UITableView* _table;
	char _usesNumericKeyboard;

}

@property (assign,nonatomic) char usesNumericKeyboard;              //@synthesize usesNumericKeyboard=_usesNumericKeyboard - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(char)resignFirstResponder;
-(char)becomeFirstResponder;
-(void)appendString:(id)arg1 ;
-(char)canBecomeFirstResponder;
-(char)isFirstResponder;
-(char)keyboardInputChanged:(id)arg1 ;
-(char)textFieldShouldReturn:(id)arg1 ;
-(id)stringValue;
-(void)setStringValue:(id)arg1 ;
-(void)deleteLastCharacter;
-(void)setBlocked:(char)arg1 ;
-(void)setTextFieldKeyboardType:(int)arg1 ;
-(void)setTextFieldKeyboardAppearance:(int)arg1 ;
-(void)showError:(id)arg1 animate:(char)arg2 ;
-(void)hidePasscodeField:(char)arg1 ;
-(void)okButtonPressed:(id)arg1 ;
-(void)setUsesNumericKeyboard:(char)arg1 ;
-(char)usesNumericKeyboard;
@end
