/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:50 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/SpringBoardPlugins/SIMToolkitUI.servicebundle/SIMToolkitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SIMToolkitUI/SIMToolkitUI-Structs.h>
@class NSString, AVController, AVQueue, NSDictionary;

@interface STKAlert : NSObject {

	char _needsResponse;
	NSString* _tone;
	AVController* _avController;
	AVQueue* _avQueue;
	char _interruptedAudio;
	NSDictionary* _options;
	NSString* _type;

}

@property (nonatomic,copy) NSString * type;                       //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSDictionary * options;              //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) char needsResponse;                  //@synthesize needsResponse=_needsResponse - In the implementation block
-(void)dealloc;
-(void)sendResponse:(CFStringRef)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(id)phoneNumber;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)options;
-(id)initWithType:(id)arg1 andOptions:(id)arg2 ;
-(void)playRingtoneWithIdentifier:(id)arg1 loop:(char)arg2 ;
-(char)oneShotInputEntry;
-(char)dismissesAfterNextEvent;
-(char)needsResponse;
-(void)setNeedsResponse:(char)arg1 ;
-(CFStringRef)displayTextPriority;
-(void)playTone;
-(void)sendResponse:(CFStringRef)arg1 withString:(id)arg2 ;
-(CFStringRef)callPriority;
-(char)sendResponseUponDisplay;
-(void)stopTone;
-(void)_setAudioInterrupted:(char)arg1 ;
-(void)_playbackDidEnd:(id)arg1 ;
-(unsigned long)_soundIDForTone:(CFStringRef)arg1 ;
-(void)_stopTone:(id)arg1 ;
-(void)_playTone:(CFStringRef)arg1 forDuration:(float)arg2 ;
-(void)sendResponse:(CFStringRef)arg1 withBool:(char)arg2 ;
-(CFStringRef)toolkitAlertType;
-(char)shouldRedial;
-(id)inCallText;
@end

