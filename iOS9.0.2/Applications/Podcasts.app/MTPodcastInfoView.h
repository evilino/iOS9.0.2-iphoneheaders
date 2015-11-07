/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:53 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol MTPodcastInfoViewDelegate;
@class NSString, UIImageView, UILabel, UIView, UIButton, UIPopoverController, IMExpandingLabel;

@interface MTPodcastInfoView : UIView {

	id<MTPodcastInfoViewDelegate> _delegate;
	NSString* _podcastUuid;
	UIImageView* _imageView;
	UILabel* _titleLabel;
	UILabel* _authorLabel;
	UIView* _separatorBelowAuthor;
	UIButton* _settingsButton;
	UIButton* _shareButton;
	UIPopoverController* _sharePopover;
	IMExpandingLabel* _descriptionView;
	UIView* _bottomSeparator;

}

@property (assign,nonatomic,__weak) id<MTPodcastInfoViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * podcastUuid;                                     //@synthesize podcastUuid=_podcastUuid - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                    //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                       //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * authorLabel;                                      //@synthesize authorLabel=_authorLabel - In the implementation block
@property (nonatomic,retain) UIView * separatorBelowAuthor;                              //@synthesize separatorBelowAuthor=_separatorBelowAuthor - In the implementation block
@property (nonatomic,retain) UIButton * settingsButton;                                  //@synthesize settingsButton=_settingsButton - In the implementation block
@property (nonatomic,retain) UIButton * shareButton;                                     //@synthesize shareButton=_shareButton - In the implementation block
@property (nonatomic,retain) UIPopoverController * sharePopover;                         //@synthesize sharePopover=_sharePopover - In the implementation block
@property (nonatomic,retain) IMExpandingLabel * descriptionView;                         //@synthesize descriptionView=_descriptionView - In the implementation block
@property (nonatomic,retain) UIView * bottomSeparator;                                   //@synthesize bottomSeparator=_bottomSeparator - In the implementation block
-(id)metricsName;
-(NSString *)podcastUuid;
-(void)setPodcastUuid:(NSString *)arg1 ;
-(id)metricsContentIdentifier;
-(IMExpandingLabel *)descriptionView;
-(void)setDescriptionView:(IMExpandingLabel *)arg1 ;
-(id)initWithPodcastUuid:(id)arg1 ;
-(void)descriptionViewTapped:(id)arg1 ;
-(void)setSettingsButton:(UIButton *)arg1 ;
-(void)addSubviews;
-(UILabel *)authorLabel;
-(void)setAuthorLabel:(UILabel *)arg1 ;
-(UIView *)separatorBelowAuthor;
-(void)setSeparatorBelowAuthor:(UIView *)arg1 ;
-(UIPopoverController *)sharePopover;
-(void)setSharePopover:(UIPopoverController *)arg1 ;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(void)_updateFonts;
-(void)setShareButton:(UIButton *)arg1 ;
-(void)setDelegate:(id<MTPodcastInfoViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<MTPodcastInfoViewDelegate>)delegate;
-(UILabel *)titleLabel;
-(UIImageView *)imageView;
-(void)update;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setBottomSeparator:(UIView *)arg1 ;
-(UIView *)bottomSeparator;
-(UIButton *)settingsButton;
-(UIButton *)shareButton;
@end
