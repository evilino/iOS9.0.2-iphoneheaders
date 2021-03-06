/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:42 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/MusicMediaDetailHeaderViewController.h>

@protocol MusicMediaDetailHeaderViewController <NSObject>
@property (assign,nonatomic,__weak) id<MusicMediaDetailHeaderViewControllerDelegate> mediaHeaderViewControllerDelegate; 
@optional
-(void)setMediaDetailTintInformation:(id)arg1;

@required
-(float)maximumMediaDetailHeaderHeightForBoundsHeight:(float)arg1 returningShouldDeferToContentViewController:(char*)arg2;
-(void)setMediaDetailHeaderHeight:(float)arg1 withMaximumHeaderHeight:(float)arg2 headerVerticalOffset:(float)arg3 transitionProgress:(float)arg4;
-(id<MusicMediaDetailHeaderViewControllerDelegate>)mediaHeaderViewControllerDelegate;
-(void)setMediaHeaderViewControllerDelegate:(id)arg1;

@end


@protocol MusicMediaDetailHeaderViewControllerDelegate;
@class MusicInteractiveContentEffectView, UISnapshotView, UIView, MusicMediaUberHeaderLegibilityOverlayView, UIImage, NSArray, NSString, MusicMediaDetailTintInformation;

@interface MusicMediaDetailHeaderViewController : UIViewController <MusicMediaDetailHeaderViewController> {

	MusicInteractiveContentEffectView* _contentEffectView;
	UISnapshotView* _contentEffectSnapshotView;
	UIView* _contentEffectClippingView;
	UIView* _darkeningTintView;
	CGRect _focusRect;
	char _hasReceivedHeaderInformation;
	float _headerHeight;
	float _headerVerticalOffset;
	CGSize _lastContentEffectViewSnapshotSize;
	MusicMediaUberHeaderLegibilityOverlayView* _legibilityOverlayView;
	float _maximumHeaderHeight;
	float _originalContentViewControllerViewAlpha;
	float _transitionProgress;
	float _artworkFittingHeight;
	UIImage* _artworkImage;
	NSArray* _focusRegions;
	NSString* _legibilityBottomGradientType;
	unsigned _headerStyle;
	MusicMediaDetailTintInformation* _mediaDetailTintInformation;
	id<MusicMediaDetailHeaderViewControllerDelegate> _mediaHeaderViewControllerDelegate;

}

@property (assign,nonatomic) float artworkFittingHeight;                                                                             //@synthesize artworkFittingHeight=_artworkFittingHeight - In the implementation block
@property (nonatomic,retain) UIImage * artworkImage;                                                                                 //@synthesize artworkImage=_artworkImage - In the implementation block
@property (nonatomic,copy) NSArray * focusRegions;                                                                                   //@synthesize focusRegions=_focusRegions - In the implementation block
@property (nonatomic,copy) NSString * legibilityBottomGradientType;                                                                  //@synthesize legibilityBottomGradientType=_legibilityBottomGradientType - In the implementation block
@property (assign,nonatomic) unsigned headerStyle;                                                                                   //@synthesize headerStyle=_headerStyle - In the implementation block
@property (nonatomic,copy) MusicMediaDetailTintInformation * mediaDetailTintInformation;                                             //@synthesize mediaDetailTintInformation=_mediaDetailTintInformation - In the implementation block
@property (assign,nonatomic,__weak) id<MusicMediaDetailHeaderViewControllerDelegate> mediaHeaderViewControllerDelegate;              //@synthesize mediaHeaderViewControllerDelegate=_mediaHeaderViewControllerDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)_applyTintInformation;
-(void)setMediaDetailTintInformation:(MusicMediaDetailTintInformation *)arg1 ;
-(MusicMediaDetailTintInformation *)mediaDetailTintInformation;
-(unsigned)headerStyle;
-(void)setArtworkFittingHeight:(float)arg1 ;
-(void)setArtworkImage:(UIImage *)arg1 ;
-(void)setLegibilityBottomGradientType:(NSString *)arg1 ;
-(void)setHeaderStyle:(unsigned)arg1 ;
-(void)_updateHeaderProperties;
-(void)setFocusRegions:(NSArray *)arg1 ;
-(NSArray *)focusRegions;
-(UIImage *)artworkImage;
-(float)_maximumHeaderHeightForBoundsHeight:(float)arg1 ;
-(id)_calculateArtworkContentBackgroundColor;
-(void)_applyHeaderStyle;
-(void)_applyHeaderLegibilityTintInformation;
-(void)_reloadContentEffectSnapshotView;
-(float)maximumMediaDetailHeaderHeightForBoundsHeight:(float)arg1 returningShouldDeferToContentViewController:(char*)arg2 ;
-(void)setMediaDetailHeaderHeight:(float)arg1 withMaximumHeaderHeight:(float)arg2 headerVerticalOffset:(float)arg3 transitionProgress:(float)arg4 ;
-(id<MusicMediaDetailHeaderViewControllerDelegate>)mediaHeaderViewControllerDelegate;
-(void)setMediaHeaderViewControllerDelegate:(id<MusicMediaDetailHeaderViewControllerDelegate>)arg1 ;
-(float)artworkFittingHeight;
-(NSString *)legibilityBottomGradientType;
@end

