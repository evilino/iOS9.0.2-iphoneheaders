/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:05 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <QuartzCore/CALayer.h>

@class AVPlayerLayerInternal, AVPlayer, NSString, NSDictionary;

@interface AVPlayerLayer : CALayer {

	AVPlayerLayerInternal* _playerLayer;

}

@property (nonatomic,retain) AVPlayer * player; 
@property (copy) NSString * videoGravity; 
@property (getter=isReadyForDisplay,nonatomic,readonly) char readyForDisplay; 
@property (nonatomic,readonly) CGRect videoRect; 
@property (nonatomic,copy) NSDictionary * pixelBufferAttributes; 
+(void)_swapSublayersBetweenPlayerLayer:(id)arg1 andPlayerLayer:(id)arg2 ;
+(id)keyPathsForValuesAffectingVideoRect;
+(id)playerLayerWithPlayer:(id)arg1 ;
-(char)canEnterPIPMode;
-(char)isPIPModeEnabled;
-(id)placeholderContentLayerDuringPIPMode;
-(NSDictionary *)pixelBufferAttributes;
-(void)_setSubtitleGravity:(id)arg1 ;
-(void)_notifyPlayerOfDisplaySize;
-(void)_addBoundsAnimationToLayer:(id)arg1 usingAnimation:(id)arg2 forKey:(id)arg3 ;
-(void)_addPositionAnimationToLayer:(id)arg1 usingAnimation:(id)arg2 forKey:(id)arg3 ;
-(void)_addSublayerTransformAnimationToLayer:(id)arg1 fromTransform:(CATransform3D)arg2 usingAnimation:(id)arg3 gravity:(id)arg4 presentationSize:(CGSize)arg5 forKey:(id)arg6 ;
-(void)_forBoundsAnimations:(id)arg1 applyBlock:(/*^block*/id)arg2 ;
-(void)_addAnimationsForPIPPlaceholderLayer:(id)arg1 forKey:(id)arg2 ;
-(void)_addAnimationsForMaskLayer:(id)arg1 forKey:(id)arg2 ;
-(void)_addAnimationsForVideoLayer:(id)arg1 size:(CGSize)arg2 gravity:(id)arg3 forKey:(id)arg4 ;
-(void)_addAnimationsForClosedCaptionLayer:(id)arg1 gravity:(id)arg2 forKey:(id)arg3 ;
-(void)_updatePresentationSize:(CGSize)arg1 forceUpdate:(char)arg2 ;
-(void)_configurePlayerWhenLeavingPIP;
-(void)_setHasPlayerToObserve:(int)arg1 andShouldObserveIt:(int)arg2 ;
-(void)_configurePlayerWhenEnteringPIP;
-(char)_canHandleCALayerOverridesAsynchronously;
-(void)layerDidBecomeVisible:(char)arg1 ;
-(char)isOverscanSubtitleSupportEnabled;
-(void)setOverscanSubtitleSupportEnabled:(char)arg1 ;
-(id)_sublayersForPIP;
-(void)_setSublayersForPIP:(id)arg1 ;
-(void)_setSublayersPreventChangesToSublayerHierarchy:(char)arg1 ;
-(void)_setPreventsChangesToSublayerHierarchy:(char)arg1 ;
-(void)_setWillManageSublayersAsSwappedLayers:(char)arg1 ;
-(void)_mergeClientLayersIntoMaskLayer:(id)arg1 ;
-(void)_restoreClientLayers:(id)arg1 intoMaskLayer:(id)arg2 ;
-(void)_disassociateWithPIPLayer;
-(void)_associateWithPIPLayer:(id)arg1 ;
-(void)_forceLayout;
-(char)_preventsChangesToSublayerHierarchy;
-(void)replaceSublayer:(id)arg1 with:(id)arg2 ;
-(void)_setItem:(id)arg1 readyForDisplay:(char)arg2 ;
-(id)_subtitleGravity;
-(void)setPixelBufferAttributes:(NSDictionary *)arg1 ;
-(id)_videoLayer;
-(id)_closedCaptionLayer;
-(id)_subtitleLayer;
-(CGRect)_videoRectForBounds:(CGRect)arg1 ;
-(void)enterPIPModeRedirectingVideoToLayer:(id)arg1 ;
-(void)leavePIPMode;
-(void)setPIPModeEnabled:(char)arg1 ;
-(char)_willManageSublayersAsSwappedLayers;
-(void)setPlaceholderContentLayerDuringPIPMode:(id)arg1 ;
-(void)_setCanHandleCALayerOverridesAsynchronously:(char)arg1 ;
-(NSString *)videoGravity;
-(CGRect)videoRect;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(char)isReadyForDisplay;
-(AVPlayer *)player;
-(void)setVideoGravity:(NSString *)arg1 ;
-(void)dealloc;
-(id)init;
-(void)addSublayer:(id)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)removeAnimationForKey:(id)arg1 ;
-(void)addAnimation:(id)arg1 forKey:(id)arg2 ;
-(void)removeFromSuperlayer;
-(void)setSublayers:(id)arg1 ;
-(void)setContentsScale:(float)arg1 ;
-(void)removeAllAnimations;
-(void)insertSublayer:(id)arg1 above:(id)arg2 ;
-(void)insertSublayer:(id)arg1 below:(id)arg2 ;
-(void)insertSublayer:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithLayer:(id)arg1 ;
-(void)finalize;
@end
