/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:23 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <QuartzCore/CALayer.h>

@class _UILabelContentLayer;

@interface _UILabelLayer : CALayer {

	_UILabelContentLayer* _contentLayer;
	char _contentInsetsValid;
	UIEdgeInsets _contentInsets;

}
-(void)setNeedsDisplayOnBoundsChange:(char)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setMasksToBounds:(char)arg1 ;
-(void)setContentsGravity:(id)arg1 ;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(id)_labelLayerToClipDuringBoundsSizeAnimation;
-(void)_setLabelMasksToBoundsForAnimation:(char)arg1 ;
-(void)invalidateContentInsets;
-(void)_clearContents;
-(void)_updateContentLayer;
-(void)updateContentInsets;
-(void)updateContentLayerSize;
-(void)layoutSublayers;
-(void)_setFrameOrBounds:(CGRect)arg1 settingAction:(/*^block*/id)arg2 ;
@end
