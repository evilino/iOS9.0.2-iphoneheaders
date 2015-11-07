/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:56 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Podcasts/IMVideoOverlayDelegate.h>

@protocol OS_dispatch_source, IMVideoViewControllerDelegate;
@class IMVideoPlaybackInlineView, IMVideoPlaybackOverlayView, NSObject, IMAVPlayer, IMPlayerItem, NSString;

@interface IMVideoViewController : UIViewController <IMVideoOverlayDelegate> {

	IMVideoPlaybackInlineView* _videoInlineView;
	IMVideoPlaybackOverlayView* _videoOverlayView;
	NSObject*<OS_dispatch_source> _videoOverlayViewIdleTimer;
	char _canShowControlsOverlay;
	char _controlsOverlayVisible;
	char _canShowInlineOverlay;
	char _inlineOverlayVisible;
	IMAVPlayer* _player;
	IMPlayerItem* _item;
	id<IMVideoViewControllerDelegate> _videoViewControllerDelegate;

}

@property (nonatomic,retain) IMAVPlayer * player;                                                               //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) IMPlayerItem * item;                                                               //@synthesize item=_item - In the implementation block
@property (assign,nonatomic,__weak) id<IMVideoViewControllerDelegate> videoViewControllerDelegate;              //@synthesize videoViewControllerDelegate=_videoViewControllerDelegate - In the implementation block
@property (assign,nonatomic) char canShowControlsOverlay;                                                       //@synthesize canShowControlsOverlay=_canShowControlsOverlay - In the implementation block
@property (assign,nonatomic) char controlsOverlayVisible;                                                       //@synthesize controlsOverlayVisible=_controlsOverlayVisible - In the implementation block
@property (assign,nonatomic) char canShowInlineOverlay;                                                         //@synthesize canShowInlineOverlay=_canShowInlineOverlay - In the implementation block
@property (assign,nonatomic) char inlineOverlayVisible;                                                         //@synthesize inlineOverlayVisible=_inlineOverlayVisible - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithItem:(id)arg1 andPlayer:(id)arg2 ;
-(void)setCanShowInlineOverlay:(char)arg1 ;
-(char)canShowInlineOverlay;
-(void)setInlineOverlayVisible:(char)arg1 ;
-(char)inlineOverlayVisible;
-(id)videoInlineView;
-(void)_toggleOverlayVisibile;
-(void)_enablePIP:(id)arg1 ;
-(void)setCanShowControlsOverlay:(char)arg1 ;
-(char)canShowControlsOverlay;
-(void)setControlsOverlayVisible:(char)arg1 animate:(char)arg2 ;
-(char)controlsOverlayVisible;
-(id)videoOverlayView;
-(void)setControlsOverlayVisible:(char)arg1 animate:(char)arg2 force:(char)arg3 ;
-(void)setControlsOverlayVisible:(char)arg1 ;
-(void)overlayTappedBackButton:(id)arg1 ;
-(void)overlayTappedPictureInPictureButton:(id)arg1 ;
-(void)overlay:(id)arg1 didBeginUserEvent:(int)arg2 ;
-(void)overlay:(id)arg1 didCancelUserEvent:(int)arg2 ;
-(void)overlay:(id)arg1 didEndUserEvent:(int)arg2 ;
-(void)setPlayer:(IMAVPlayer *)arg1 ;
-(IMAVPlayer *)player;
-(void)traitCollectionDidChange:(id)arg1 ;
-(IMPlayerItem *)item;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)setItem:(IMPlayerItem *)arg1 ;
-(void)setVideoViewControllerDelegate:(id<IMVideoViewControllerDelegate>)arg1 ;
-(void)_startIdleTimer:(double)arg1 ;
-(void)_cancelIdleTimer;
-(id<IMVideoViewControllerDelegate>)videoViewControllerDelegate;
@end
