/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:04:46 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Assistant/UIPlugins/Maps.siriUIBundle/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol GEOServerFormattedString;
@class NSArray, NSTimeZone;

@interface TransitInstruction : NSObject {

	char _locallyGeneratedInstructions;
	int _context;
	NSArray* _majorFormattedInstruction;
	NSArray* _minorFormattedInstruction;
	NSArray* _tertiaryFormattedInstruction;
	id<GEOServerFormattedString> _departureBarInstruction;
	id<GEOServerFormattedString> _countStopsFormattedString;

}

@property (nonatomic,readonly) int context;                                             //@synthesize context=_context - In the implementation block
@property (copy) NSArray * majorFormattedInstruction;                                   //@synthesize majorFormattedInstruction=_majorFormattedInstruction - In the implementation block
@property (copy) NSArray * minorFormattedInstruction;                                   //@synthesize minorFormattedInstruction=_minorFormattedInstruction - In the implementation block
@property (copy) NSArray * tertiaryFormattedInstruction;                                //@synthesize tertiaryFormattedInstruction=_tertiaryFormattedInstruction - In the implementation block
@property (nonatomic,readonly) NSTimeZone * timeZoneForFormattedString; 
@property (assign,nonatomic) char locallyGeneratedInstructions;                         //@synthesize locallyGeneratedInstructions=_locallyGeneratedInstructions - In the implementation block
@property (retain) id<GEOServerFormattedString> departureBarInstruction;                //@synthesize departureBarInstruction=_departureBarInstruction - In the implementation block
@property (retain) id<GEOServerFormattedString> countStopsFormattedString;              //@synthesize countStopsFormattedString=_countStopsFormattedString - In the implementation block
+(id)instructionForUncertainArrivalToStationStep:(id)arg1 context:(int)arg2 ;
-(void)setDepartureBarInstruction:(id<GEOServerFormattedString>)arg1 ;
-(void)setMinorFormattedInstruction:(NSArray *)arg1 ;
-(void)setTertiaryFormattedInstruction:(NSArray *)arg1 ;
-(NSTimeZone *)timeZoneForFormattedString;
-(void)setLocallyGeneratedInstructions:(char)arg1 ;
-(void)setCountStopsFormattedString:(id<GEOServerFormattedString>)arg1 ;
-(void)setMajorFormattedInstruction:(NSArray *)arg1 ;
-(NSArray *)majorFormattedInstruction;
-(id)instructionStep;
-(id<GEOServerFormattedString>)departureBarInstruction;
-(char)locallyGeneratedInstructions;
-(NSArray *)minorFormattedInstruction;
-(NSArray *)tertiaryFormattedInstruction;
-(int)context;
-(id)initWithContext:(int)arg1 ;
-(id<GEOServerFormattedString>)countStopsFormattedString;
@end

