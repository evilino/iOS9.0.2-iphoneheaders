/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:22 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SCATActionHandlerDelegate, SCATActionHandlerUIDelegate;
@class AXAccessQueueTimer;

@interface SCATActionHandler : NSObject {

	int _action;
	id<SCATActionHandlerDelegate> _delegate;
	id<SCATActionHandlerUIDelegate> _uiDelegate;
	AXAccessQueueTimer* _actionTimeoutTimer;
	unsigned _actionCount;
	double _timeoutDuration;

}

@property (assign,nonatomic) id<SCATActionHandlerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) id<SCATActionHandlerUIDelegate> uiDelegate;              //@synthesize uiDelegate=_uiDelegate - In the implementation block
@property (assign,nonatomic) double timeoutDuration;                                  //@synthesize timeoutDuration=_timeoutDuration - In the implementation block
@property (assign,nonatomic) unsigned actionCount;                                    //@synthesize actionCount=_actionCount - In the implementation block
@property (nonatomic,readonly) char shouldShowMenuOnFirstSelectAction; 
@property (nonatomic,retain) AXAccessQueueTimer * actionTimeoutTimer;                 //@synthesize actionTimeoutTimer=_actionTimeoutTimer - In the implementation block
@property (assign,nonatomic) int action;                                              //@synthesize action=_action - In the implementation block
-(void)cancelPendingAction;
-(void)notifyDidReceiveAction:(id)arg1 ;
-(unsigned)actionCount;
-(char)shouldShowMenuOnFirstSelectAction;
-(void)setActionTimeoutTimer:(AXAccessQueueTimer *)arg1 ;
-(void)_resetWithActionSource:(id)arg1 ;
-(void)setActionCount:(unsigned)arg1 ;
-(char)_shouldHandleSelectActionImmediately;
-(AXAccessQueueTimer *)actionTimeoutTimer;
-(void)_handleFireAction;
-(id)initWithAction:(int)arg1 timeoutDuration:(double)arg2 ;
-(void)setDelegate:(id<SCATActionHandlerDelegate>)arg1 ;
-(void)dealloc;
-(id<SCATActionHandlerDelegate>)delegate;
-(int)action;
-(void)setAction:(int)arg1 ;
-(double)timeoutDuration;
-(void)setUiDelegate:(id<SCATActionHandlerUIDelegate>)arg1 ;
-(id<SCATActionHandlerUIDelegate>)uiDelegate;
-(void)setTimeoutDuration:(double)arg1 ;
@end

