/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:47 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKit/UIView.h>

@class SUGradient;

@interface SUGradientView : UIView {

	CGGradientRef _cgGradient;
	SUGradient* _gradient;

}

@property (nonatomic,copy) SUGradient * gradient;              //@synthesize gradient=_gradient - In the implementation block
-(void)drawRect:(CGRect)arg1 ;
-(void)dealloc;
-(void)setGradient:(SUGradient *)arg1 ;
-(SUGradient *)gradient;
@end

