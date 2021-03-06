/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:21 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsCommandBuffer.h>

@class _MTLCommandEncoder;

@interface MTLDebugCommandBuffer : MTLToolsCommandBuffer {

	_MTLCommandEncoder* _currentEncoder;

}
-(id)computeCommandEncoder;
-(id)parallelRenderCommandEncoderWithDescriptor:(id)arg1 ;
-(id)sampledRenderCommandEncoderWithDescriptor:(id)arg1 programInfoBuffer:(SCD_Struct_MT1*)arg2 capacity:(unsigned)arg3 ;
-(void)waitUntilScheduled;
-(id)blitCommandEncoder;
-(void)waitUntilCompleted;
-(id)renderCommandEncoderWithDescriptor:(id)arg1 ;
-(id)fragmentRenderCommandEncoderWithDescriptor:(id)arg1 ;
-(id)sampledComputeCommandEncoderWithProgramInfoBuffer:(SCD_Struct_MT1*)arg1 capacity:(unsigned)arg2 ;
-(id)initWithCommandBuffer:(id)arg1 commandQueue:(id)arg2 ;
@end

