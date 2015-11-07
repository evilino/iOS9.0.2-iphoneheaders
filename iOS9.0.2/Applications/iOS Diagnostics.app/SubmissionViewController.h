/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:24 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iOS Diagnostics.app/iOS Diagnostics
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iOS Diagnostics/iOS Diagnostics-Structs.h>
#import <UIKit/UITableViewController.h>
#import <iOS Diagnostics/MBSServerDelegate.h>
#import <UIKit/UITextFieldDelegate.h>
#import <UIKit/UIWebViewDelegate.h>

@class MBSDevice, NSNumber, UITextField, UIWebView, NSString, MBSReachability, UIView, NSArray;

@interface SubmissionViewController : UITableViewController <MBSServerDelegate, UITextFieldDelegate, UIWebViewDelegate> {

	MBSDevice* _device;
	NSNumber* _ticketNumber;
	UITextField* _ticketNumberTextField;
	UIWebView* _descriptionWebView;
	NSString* _lastSent;
	NSString* _descriptionText;
	char _submitting;
	MBSReachability* _wifiReach;
	char _wifiEnabled;
	UIView* _progressView;
	NSArray* _tests;
	UIView* _loadingView;

}

@property (retain) MBSDevice * device;                               //@synthesize device=_device - In the implementation block
@property (retain) NSNumber * ticketNumber;                          //@synthesize ticketNumber=_ticketNumber - In the implementation block
@property (retain) UITextField * ticketNumberTextField;              //@synthesize ticketNumberTextField=_ticketNumberTextField - In the implementation block
@property (retain) UIWebView * descriptionWebView;                   //@synthesize descriptionWebView=_descriptionWebView - In the implementation block
@property (retain) NSString * lastSent;                              //@synthesize lastSent=_lastSent - In the implementation block
@property (retain) NSString * descriptionText;                       //@synthesize descriptionText=_descriptionText - In the implementation block
@property (retain) UIView * loadingView;                             //@synthesize loadingView=_loadingView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithStyle:(int)arg1 ticketNumber:(id)arg2 ;
-(void)setTicketNumber:(NSNumber *)arg1 ;
-(void)updateViewsFromServer;
-(UIWebView *)descriptionWebView;
-(void)setDescriptionWebView:(UIWebView *)arg1 ;
-(char)extendedVisible;
-(NSString *)lastSent;
-(char)extendedEnabled;
-(NSNumber *)ticketNumber;
-(void)handleTextFieldValueChanged:(id)arg1 ;
-(void)setTicketNumberTextField:(UITextField *)arg1 ;
-(char)sendButtonsEnabled;
-(UITextField *)ticketNumberTextField;
-(void)startSubmission:(char)arg1 ;
-(void)updateUIState;
-(void)setLastSent:(NSString *)arg1 ;
-(void)updateSendButtons;
-(void)updateTicketSection;
-(void)updateLastSentDate;
-(void)loadSubmissionView;
-(void)loadConfigurationFailedView;
-(void)startReachability;
-(void)serverDidSubmitData:(id)arg1 ;
-(void)dealloc;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
-(void)didReceiveMemoryWarning;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void)loadView;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(char)textFieldShouldBeginEditing:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)viewDidAppear:(char)arg1 ;
-(char)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(void)updateProgress:(id)arg1 ;
-(MBSDevice *)device;
-(void)reachabilityChanged:(id)arg1 ;
-(void)setLoadingView:(UIView *)arg1 ;
-(char)canSend;
-(void)setDescriptionText:(NSString *)arg1 ;
-(NSString *)descriptionText;
-(UIView *)loadingView;
-(void)setDevice:(MBSDevice *)arg1 ;
@end
