/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:33 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/EKEditItemViewControllerProtocol.h>

@class UITextView, NSString;

@interface EKEventDetailExtendedNotesViewController : UIViewController <EKEditItemViewControllerProtocol> {

	UITextView* _textView;

}

@property (nonatomic,copy) NSString * notes; 
@property (assign,nonatomic,__weak) id<EKEditItemViewControllerDelegate> editDelegate; 
@property (assign,nonatomic) char presentModally; 
@property (assign,nonatomic) char editItemShouldBeAskedForInjectableViewController; 
-(NSString *)notes;
-(void)setNotes:(NSString *)arg1 ;
-(id)init;
-(unsigned)supportedInterfaceOrientations;
-(void)loadView;
-(id)_textView;
@end

