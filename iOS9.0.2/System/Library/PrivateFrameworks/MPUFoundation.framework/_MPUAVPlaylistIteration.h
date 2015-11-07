/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:14 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class MPSparseArray;

@interface _MPUAVPlaylistIteration : NSObject <NSCoding> {

	MPSparseArray* _sourceContexts;
	unsigned _iterationIndex;
	unsigned _count;
	unsigned _indexToFaultIn;

}

@property (nonatomic,retain) MPSparseArray * sourceContexts;              //@synthesize sourceContexts=_sourceContexts - In the implementation block
@property (assign,nonatomic) unsigned iterationIndex;                     //@synthesize iterationIndex=_iterationIndex - In the implementation block
@property (assign,nonatomic) unsigned count;                              //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) unsigned indexToFaultIn;                     //@synthesize indexToFaultIn=_indexToFaultIn - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned)count;
-(id)init;
-(void)setCount:(unsigned)arg1 ;
-(MPSparseArray *)sourceContexts;
-(void)setIndexToFaultIn:(unsigned)arg1 ;
-(void)setIterationIndex:(unsigned)arg1 ;
-(void)setSourceContexts:(MPSparseArray *)arg1 ;
-(unsigned)indexToFaultIn;
-(unsigned)iterationIndex;
@end
