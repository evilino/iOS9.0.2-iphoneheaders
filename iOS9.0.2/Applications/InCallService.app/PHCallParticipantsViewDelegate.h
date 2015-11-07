/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:24 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/InCallService.app/InCallService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PHCallParticipantsViewDelegate <NSObject>
@optional
-(void)participantTappedAtIndex:(unsigned)arg1 inParticipantsView:(id)arg2;
-(void)participantViewInfoButtonTappedAtIndex:(unsigned)arg1 inParticipantsView:(id)arg2;
-(id)compactLabelTextForParticipantAtIndex:(unsigned)arg1 inParticipantsView:(id)arg2;
-(void)fieldModeSendButtonTappedInParticipantsView:(id)arg1;

@required
-(unsigned)numberOfParticipantsForParticipantsView:(id)arg1;
-(id)overrideStringForParticipantsView:(id)arg1;
-(char)shouldShowSingleDurationLabelInParticipantsView:(id)arg1;
-(id)nameForParticipantAtIndex:(unsigned)arg1 inParticipantsView:(id)arg2;
-(id)labelForParticipantAtIndex:(unsigned)arg1 inParticipantsView:(id)arg2;
-(id)supplementalParticipantLabelFormatStringAtIndex:(unsigned)arg1 inParticipantsView:(id)arg2;
-(id)contactForParticipantAtIndex:(unsigned)arg1 inParticipantsView:(id)arg2;
-(unsigned short)activityStateForParticipantAtIndex:(unsigned)arg1 inParticipantsView:(id)arg2;
-(char)shouldShowInfoButtonForParticipantAtIndex:(unsigned)arg1 inParticipantsView:(id)arg2;

@end
