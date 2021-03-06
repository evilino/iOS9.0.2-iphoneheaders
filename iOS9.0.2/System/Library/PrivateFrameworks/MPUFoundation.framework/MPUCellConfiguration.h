/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:14 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MPUFoundation/MPUFoundation-Structs.h>
@interface MPUCellConfiguration : NSObject
+(id)tableViewBackgroundColor;
+(id)reuseIdentifier;
+(Class)tableViewCellClass;
+(float)tableViewCellHeight;
+(void)handleScrollViewDidScrollForCell:(id)arg1 viewController:(id)arg2 ;
+(void)handleScrollViewDidScrollForCell:(id)arg1 inScrollView:(id)arg2 viewController:(id)arg3 ;
+(void)handleScrollViewDidEndDeceleratingForCell:(id)arg1 viewController:(id)arg2 ;
+(void)configureCell:(id)arg1 withViewController:(id)arg2 entity:(id)arg3 atIndex:(unsigned)arg4 animated:(char)arg5 ;
+(void)configureDownloadStatusForCell:(id)arg1 withViewController:(id)arg2 entity:(id)arg3 atIndex:(unsigned)arg4 animated:(char)arg5 ;
+(void)configureCellForSizing:(id)arg1 ;
+(void)configureCellAfterDeceleration:(id)arg1 withViewController:(id)arg2 entity:(id)arg3 atIndex:(unsigned)arg4 animated:(char)arg5 ;
+(id)mediaEntityPropertiesToFetch;
+(void)configureView:(id)arg1 asynchronously:(char)arg2 forEntity:(id)arg3 withBlock:(/*^block*/id)arg4 ;
+(void)willDisplayCell:(id)arg1 inTableView:(id)arg2 withViewController:(id)arg3 atIndex:(unsigned)arg4 ;
+(void)didEndDisplayingCell:(id)arg1 withViewController:(id)arg2 atIndex:(unsigned)arg3 ;
+(id)tableViewSeparatorColor;
+(UIEdgeInsets)tableViewSeparatorInset;
+(int)tableViewSeparatorStyle;
+(id)tableViewCellBackgroundColor;
+(float)expandedTableViewCellHeight;
+(char)wantsScrollViewDidScroll;
+(char)wantsScrollViewDidScrollInScrollView;
+(char)wantsScrollViewDidEndDecelerating;
@end

