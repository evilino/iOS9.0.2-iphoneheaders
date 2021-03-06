/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:12 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ABPersonLinkingUIDelegate
@required
-(char)shouldAllowLinkingAnotherContact;
-(int)numberOfLinkedCardRows;
-(id)sourceNameForCardAtRow:(int)arg1;
-(id)personNameForCardAtRow:(int)arg1;
-(char)manuallyUnlinkCardAtRow:(int)arg1;
-(char)canUnlinkCardAtRow:(int)arg1;
-(char)manuallyLinkPerson:(id)arg1;
-(char)shouldAllowLinkingPersonWithRecordID:(int)arg1;
-(id)newPersonViewControllerForLinkedCardAtRow:(int)arg1;
-(id)newPeoplePickerForLinking;

@end

