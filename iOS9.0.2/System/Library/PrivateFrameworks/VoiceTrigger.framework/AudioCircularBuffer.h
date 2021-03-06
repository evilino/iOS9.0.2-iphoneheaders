/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:39 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface AudioCircularBuffer : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	int _bufferLength;
	int _startPos;
	int _endPos;
	float _bufferSeconds;
	short* _buffer;
	long _outBufferLength;
	long _samplecount;
	long _markIn;
	long _markOut;

}

@property (assign,nonatomic) long markIn;               //@synthesize markIn=_markIn - In the implementation block
@property (assign,nonatomic) long markOut;              //@synthesize markOut=_markOut - In the implementation block
@property (readonly) float bufferSeconds; 
-(void)dealloc;
-(long)sampleCount;
-(void)reset;
-(void)_writeToBuffer:(short*)arg1 len:(long)arg2 ;
-(void*)_copyBytesFrom:(long)arg1 to:(long)arg2 outLength:(long*)arg3 ;
-(short)addSamples:(void*)arg1 len:(long)arg2 ;
-(id)initWithBackBuffer:(float)arg1 ;
-(void*)copyBufferWithLength:(long*)arg1 ;
-(void*)copyBufferFrom:(long)arg1 to:(long)arg2 withLength:(long*)arg3 ;
-(long)bufferLength;
-(float)bufferSeconds;
-(void)saveRecordingBufferFrom:(long)arg1 to:(long)arg2 toURL:(id)arg3 ;
-(long)markIn;
-(void)setMarkIn:(long)arg1 ;
-(long)markOut;
-(void)setMarkOut:(long)arg1 ;
@end

