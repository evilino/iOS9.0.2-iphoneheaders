/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:24 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/InCallService.app/InCallService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <InCallService/InCallService-Structs.h>
#import <InCallService/PHHandsetDialerLCDView.h>

@class PHTextCycleLabel;

@interface PHEmergencyHandsetDialerLCDView : PHHandsetDialerLCDView {

	PHTextCycleLabel* _emergencyTitleLabel;

}

@property (readonly) PHTextCycleLabel * emergencyTitleLabel;              //@synthesize emergencyTitleLabel=_emergencyTitleLabel - In the implementation block
-(id)lcdColor;
-(id)newDeleteButton;
-(id)newNameAndLabelView;
-(id)newAddContactButton;
-(void)applyLayoutConstraints;
-(void)updateNumberLabelHorizontalConstraints;
-(void)setText:(id)arg1 needsFormat:(char)arg2 name:(id)arg3 label:(id)arg4 ;
-(void)setText:(id)arg1 needsFormat:(char)arg2 ;
-(void)deleteCharacter;
-(id)initWithFrame:(CGRect)arg1 forDialerType:(int)arg2 ;
-(PHTextCycleLabel *)emergencyTitleLabel;
-(float)_emergencyDialerFontSize;
-(void)_applyLayoutConstraints;
-(float)_numberLabelTopSpacing;
-(float)_deleteButtonRightPadding;
-(char)shrinkLabelWhenNumbersEntered;
-(void)_updateEmergencyLabel;
@end

