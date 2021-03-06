/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:08 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SafariShared/SafariShared-Structs.h>
@class NSMutableArray;

@interface WBSURLSuffixChecker : NSObject {

	SCD_Struct_WB31* _trie;
	unsigned _trieNodeCount;
	unsigned _maxLength;
	NSMutableArray* _failedSuffixes;

}
-(void)dealloc;
-(char)hasSuffix:(id)arg1 ;
-(id)initWithSuffixes:(id)arg1 ;
-(char)insertString:(id)arg1 intoTrieWithCache:(SCD_Struct_WB33*)arg2 ;
-(void)addStringToFailedSuffixes:(id)arg1 ;
@end

