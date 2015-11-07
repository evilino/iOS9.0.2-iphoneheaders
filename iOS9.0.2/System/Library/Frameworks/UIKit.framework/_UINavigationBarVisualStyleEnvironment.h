/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:26 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _UINavigationBarVisualStyle;

@interface _UINavigationBarVisualStyleEnvironment : NSObject <NSCopying> {

	int _metrics;
	char _wantsLetterpressContent;
	char _containedInPopover;
	_UINavigationBarVisualStyle* _primaryStyle;
	_UINavigationBarVisualStyle* _secondaryStyle;

}

@property (nonatomic,readonly) int metrics;                                                      //@synthesize metrics=_metrics - In the implementation block
@property (getter=isContainedInPopover,nonatomic,readonly) char containedInPopover;              //@synthesize containedInPopover=_containedInPopover - In the implementation block
@property (nonatomic,readonly) char wantsLetterpressContent;                                     //@synthesize wantsLetterpressContent=_wantsLetterpressContent - In the implementation block
+(id)environmentWithMetrics:(int)arg1 wantsLetterPress:(char)arg2 inPopover:(char)arg3 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)visualStyleForIdiom:(int)arg1 ;
-(int)metrics;
-(char)isContainedInPopover;
-(char)wantsLetterpressContent;
@end
