/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:23 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SCATCursorControllerDelegate;
#import <assistivetouchd/assistivetouchd-Structs.h>
@class SCATCursorLayer, CALayer;

@interface SCATCursorController : NSObject {

	id<SCATCursorControllerDelegate> _delegate;
	SCATCursorLayer* _cursorBackgroundLayer;
	SCATCursorLayer* _cursorForegroundLayer;
	CALayer* _cursorContainerLayer;
	SCATCursorLayer* _cursorCompositingLayer;

}

@property (assign,nonatomic) id<SCATCursorControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CALayer * cursorContainerLayer;                         //@synthesize cursorContainerLayer=_cursorContainerLayer - In the implementation block
@property (nonatomic,retain) SCATCursorLayer * cursorBackgroundLayer;                //@synthesize cursorBackgroundLayer=_cursorBackgroundLayer - In the implementation block
@property (nonatomic,retain) SCATCursorLayer * cursorForegroundLayer;                //@synthesize cursorForegroundLayer=_cursorForegroundLayer - In the implementation block
@property (nonatomic,retain) SCATCursorLayer * cursorCompositingLayer;               //@synthesize cursorCompositingLayer=_cursorCompositingLayer - In the implementation block
-(void)updateTheme:(int)arg1 animated:(char)arg2 options:(int)arg3 ;
-(void)updateLevel:(int)arg1 animated:(char)arg2 options:(int)arg3 ;
-(void)updatePath:(id)arg1 frame:(CGRect)arg2 isSimpleRect:(char)arg3 animated:(char)arg4 options:(int)arg5 ;
-(void)updateTheme:(int)arg1 level:(int)arg2 path:(id)arg3 frame:(CGRect)arg4 isSimpleRect:(char)arg5 animated:(char)arg6 options:(int)arg7 ;
-(SCATCursorLayer *)cursorBackgroundLayer;
-(void)hide:(char)arg1 animate:(char)arg2 ;
-(CALayer *)cursorContainerLayer;
-(void)setCursorForegroundLayer:(SCATCursorLayer *)arg1 ;
-(void)setCursorBackgroundLayer:(SCATCursorLayer *)arg1 ;
-(void)setCursorCompositingLayer:(SCATCursorLayer *)arg1 ;
-(void)setCursorContainerLayer:(CALayer *)arg1 ;
-(SCATCursorLayer *)cursorForegroundLayer;
-(SCATCursorLayer *)cursorCompositingLayer;
-(void)setDelegate:(id<SCATCursorControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id<SCATCursorControllerDelegate>)delegate;
@end
