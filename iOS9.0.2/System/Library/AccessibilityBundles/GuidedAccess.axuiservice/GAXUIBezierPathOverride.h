/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:35:26 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GuidedAccess/GuidedAccess-Structs.h>
#import <GuidedAccess/__GAXUIBezierPathOverride_super.h>

@interface GAXUIBezierPathOverride : __GAXUIBezierPathOverride_super
+(Class)safeCategoryBaseClass;
+(id)bezierPathWithRect:(CGRect)arg1 ;
+(id)safeCategoryTargetClassName;
-(void)_gaxUnderlyingPathDidChange;
-(void)moveToPoint:(CGPoint)arg1 ;
-(void)addLineToPoint:(CGPoint)arg1 ;
-(void)closePath;
-(void)addQuadCurveToPoint:(CGPoint)arg1 controlPoint:(CGPoint)arg2 ;
-(void)addCurveToPoint:(CGPoint)arg1 controlPoint1:(CGPoint)arg2 controlPoint2:(CGPoint)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addArcWithCenter:(CGPoint)arg1 radius:(float)arg2 startAngle:(float)arg3 endAngle:(float)arg4 clockwise:(char)arg5 ;
-(void)appendPath:(id)arg1 ;
-(void)applyTransform:(CGAffineTransform)arg1 ;
-(void)removeAllPoints;
@end
