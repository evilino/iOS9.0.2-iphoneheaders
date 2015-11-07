/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:37:08 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/QuickLook.framework/DisplayBundles/Movie.qldisplay/Movie
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Movie/Movie-Structs.h>
#import <QuickLook/QLDisplayBundle.h>

@class QLMovieViewController;

@interface QLMovieDisplayBundle : QLDisplayBundle {

	QLMovieViewController* _movieViewController;

}
+(char)needsAVControls;
+(double)allowedLoadingDelay;
-(void)_updateAVState;
-(void)_loadMovieControllerIfNeeded;
-(void)_updateScrubberOffsetForTraitCollection:(id)arg1 ;
-(void)enterBackground;
-(void)setOverlayHidden:(char)arg1 duration:(double)arg2 ;
-(void)togglePlayState;
-(void)loadWithHints:(id)arg1 ;
-(void)setOrbMode:(unsigned)arg1 ;
-(char)wantsCustomOrbPop;
-(void)audioSessionDidInterrupt;
-(char)canBeCached;
-(void)enterForeground;
-(char)canCopyToPasteboard;
-(int)airPlayMode;
-(void)willStartSwiping:(char)arg1 ;
-(void)didFinishSwiping;
-(void)dealloc;
-(void)invalidate;
-(void)loadView;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end
