/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:35 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class NSConcreteMapTable;

@interface NSConcreteMapTableValueEnumerator : NSEnumerator {

	NSConcreteMapTable* mapTable;
	unsigned counter;

}
+(id)enumeratorWithMapTable:(id)arg1 ;
-(void)dealloc;
-(id)nextObject;
@end
