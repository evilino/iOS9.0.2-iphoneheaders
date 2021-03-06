/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:57 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <PassKit/PKPaymentSetupFieldCell.h>

@interface PKPaymentSetupBuiltInCardOnFilePrimaryAccountNumberFieldCell : PKPaymentSetupFieldCell {

	char _hasDarkAppearance;
	int _paymentCredentialType;

}

@property (assign,nonatomic) int paymentCredentialType;              //@synthesize paymentCredentialType=_paymentCredentialType - In the implementation block
@property (assign,nonatomic) char hasDarkAppearance;                 //@synthesize hasDarkAppearance=_hasDarkAppearance - In the implementation block
-(void)pk_applyAppearance:(PKAppearanceSpecifier*)arg1 ;
-(void)setHasDarkAppearance:(char)arg1 ;
-(void)setPaymentCredentialType:(int)arg1 ;
-(void)setPaymentSetupField:(id)arg1 ;
-(int)paymentCredentialType;
-(id)_imageForPaymentCredentialType:(int)arg1 ;
-(char)hasDarkAppearance;
-(void)dealloc;
-(id)init;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(char)textFieldShouldBeginEditing:(id)arg1 ;
-(char)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(char)textFieldShouldClear:(id)arg1 ;
@end

