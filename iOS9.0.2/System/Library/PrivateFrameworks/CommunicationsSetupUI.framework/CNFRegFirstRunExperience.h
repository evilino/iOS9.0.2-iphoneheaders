/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:19 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class UIBarButtonItem;


@protocol CNFRegFirstRunExperience <NSObject>
@property (assign,nonatomic) id<CNFRegFirstRunDelegate> delegate; 
@property (nonatomic,readonly) int currentAppearanceStyle; 
@property (nonatomic,retain) UIBarButtonItem * customLeftButton; 
@property (nonatomic,retain) UIBarButtonItem * customRightButton; 
@required
-(void)setDelegate:(id)arg1;
-(id<CNFRegFirstRunDelegate>)delegate;
-(int)currentAppearanceStyle;
-(id)initWithRegController:(id)arg1 account:(id)arg2;
-(void)setCustomLeftButton:(id)arg1;
-(void)setCustomRightButton:(id)arg1;
-(UIBarButtonItem *)customLeftButton;
-(UIBarButtonItem *)customRightButton;

@end

