/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:23 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@interface UINibStringIDTable : NSObject {

	UIStringIDTableBucket* table;
	UIStringIDTableBucket* buckets;
	unsigned hashMask;
	unsigned count;

}
-(void)dealloc;
-(int)count;
-(char)lookupKey:(id)arg1 identifier:(int*)arg2 ;
-(id)initWithKeysTransferingOwnership:(id*)arg1 count:(unsigned)arg2 ;
@end

