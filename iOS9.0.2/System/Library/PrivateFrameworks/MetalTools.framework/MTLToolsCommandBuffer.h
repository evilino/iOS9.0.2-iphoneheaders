/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:21 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsObject.h>
#import <libobjc.A.dylib/MTLCommandBufferSPI.h>

@class NSDictionary, NSMutableDictionary, MTLToolsPointerArray, NSString, NSError;

@interface MTLToolsCommandBuffer : MTLToolsObject <MTLCommandBufferSPI> {

	MTLToolsPointerArray* _renderCommandEncoders;
	MTLToolsPointerArray* _computeCommandEncoders;
	MTLToolsPointerArray* _blitCommandEncoders;
	MTLToolsPointerArray* _parallelRenderCommandEncoders;
	MTLToolsPointerArray* _fragmentRenderCommandEncoders;

}

@property (nonatomic,readonly) MTLToolsPointerArray * renderCommandEncoders;                      //@synthesize renderCommandEncoders=_renderCommandEncoders - In the implementation block
@property (nonatomic,readonly) MTLToolsPointerArray * computeCommandEncoders;                     //@synthesize computeCommandEncoders=_computeCommandEncoders - In the implementation block
@property (nonatomic,readonly) MTLToolsPointerArray * blitCommandEncoders;                        //@synthesize blitCommandEncoders=_blitCommandEncoders - In the implementation block
@property (nonatomic,readonly) MTLToolsPointerArray * parallelRenderCommandEncoders;              //@synthesize parallelRenderCommandEncoders=_parallelRenderCommandEncoders - In the implementation block
@property (nonatomic,readonly) MTLToolsPointerArray * fragmentRenderCommandEncoders;              //@synthesize fragmentRenderCommandEncoders=_fragmentRenderCommandEncoders - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) id<MTLCommandQueue> commandQueue; 
@property (readonly) char retainedReferences; 
@property (copy) NSString * label; 
@property (readonly) unsigned status; 
@property (readonly) NSError * error; 
@property (getter=isProfilingEnabled) char profilingEnabled; 
@property (readonly) NSDictionary * profilingResults; 
@property (nonatomic,readonly) NSMutableDictionary * userDictionary; 
-(id)computeCommandEncoder;
-(char)isProfilingEnabled;
-(char)retainedReferences;
-(id)initWithBaseObject:(id)arg1 parent:(id)arg2 ;
-(void)addScheduledHandler:(/*^block*/id)arg1 ;
-(void)presentDrawable:(id)arg1 atTime:(double)arg2 ;
-(id)parallelRenderCommandEncoderWithDescriptor:(id)arg1 ;
-(NSMutableDictionary *)userDictionary;
-(void)setProfilingEnabled:(char)arg1 ;
-(NSDictionary *)profilingResults;
-(NSError *)error;
-(void)waitUntilScheduled;
-(id)blitCommandEncoder;
-(void)addCompletedHandler:(/*^block*/id)arg1 ;
-(void)presentDrawable:(id)arg1 ;
-(void)waitUntilCompleted;
-(id)renderCommandEncoderWithDescriptor:(id)arg1 ;
-(id<MTLCommandQueue>)commandQueue;
-(void)enqueue;
-(void)commit;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(unsigned)status;
-(id<MTLDevice>)device;
-(void)acceptVisitor:(id)arg1 ;
-(id)unwrapMTLRenderPassDescriptor:(id)arg1 ;
-(id)fragmentRenderCommandEncoderWithDescriptor:(id)arg1 ;
-(id)sampledComputeCommandEncoderWithProgramInfoBuffer:(SCD_Struct_MT1*)arg1 capacity:(unsigned)arg2 ;
-(id)sampledRenderCommandEncoderWithFramebuffer:(id)arg1 programInfoBuffer:(SCD_Struct_MT1*)arg2 capacity:(unsigned)arg3 ;
-(MTLToolsPointerArray *)renderCommandEncoders;
-(MTLToolsPointerArray *)computeCommandEncoders;
-(MTLToolsPointerArray *)blitCommandEncoders;
-(MTLToolsPointerArray *)parallelRenderCommandEncoders;
-(MTLToolsPointerArray *)fragmentRenderCommandEncoders;
@end
