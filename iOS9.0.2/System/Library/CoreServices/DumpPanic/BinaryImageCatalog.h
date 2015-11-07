/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:24 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/DumpPanic
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class BinaryImageSegment, NSMutableArray, NSArray, NSMutableDictionary;

@interface BinaryImageCatalog : NSObject {

	BinaryImageSegment* _absolute_segment;
	NSMutableArray* _kernel_segments;
	NSArray* _targeted_cache;
	unsigned long long _targeted_slide;
	NSMutableDictionary* _shared_segments;
	NSMutableArray* _used_segments;
	NSMutableArray* _notes;

}
-(id)reportUsedImages;
-(void)appendNotesTo:(id)arg1 ;
-(id)searchFrame:(unsigned long long)arg1 in:(id)arg2 ;
-(void)setKernelImages:(id)arg1 ;
-(void)targetSharedCache:(unsigned char)arg1 withSlide:(unsigned long long)arg2 ;
-(unsigned)markImageAsUsed:(id)arg1 from:(int)arg2 ;
-(id)init;
@end
