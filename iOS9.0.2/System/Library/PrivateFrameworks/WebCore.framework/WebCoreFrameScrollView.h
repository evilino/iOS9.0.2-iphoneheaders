/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:42 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol WebCoreFrameScrollView
@required
-(void)setScrollingModes:(int)arg1 vertical:(int)arg2 andLock:(char)arg3;
-(void)scrollingModes:(int*)arg1 vertical:(int*)arg2;
-(void)setScrollBarsSuppressed:(char)arg1 repaintOnUnsuppress:(char)arg2;
-(void)setScrollOrigin:(CGPoint)arg1 updatePositionAtAll:(char)arg2 immediately:(char)arg3;
-(CGPoint*)scrollOrigin;

@end
