/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:04:43 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Assistant/UIPlugins/AcousticId.siriUIBundle/AcousticId
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SiriUI/SiriUISnippetViewController.h>
#import <AcousticId/SiriAcousticIdHeaderViewDelegate.h>
#import <AcousticId/SiriAcousticIdAttributionFooterViewDelegate.h>

@class SAAISongTagSnippet, NSMutableArray, NSString;

@interface SiriAcousticIdSongTagViewController : SiriUISnippetViewController <SiriAcousticIdHeaderViewDelegate, SiriAcousticIdAttributionFooterViewDelegate> {

	SAAISongTagSnippet* _songTagSnippet;
	NSMutableArray* _buttons;
	char _isSongQueued;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)headerViewBuyButtonWasTapped:(id)arg1 ;
-(void)headerViewPlayButtonWasTapped:(id)arg1 ;
-(id)initWithSongTagSnippet:(id)arg1 ;
-(void)attributionFooterViewButtonWasTapped:(id)arg1 ;
-(void)setSnippet:(id)arg1 ;
-(Class)footerViewClass;
-(void)configureReusableHeaderView:(id)arg1 ;
-(Class)headerViewClass;
-(void)configureReusableFooterView:(id)arg1 ;
@end

