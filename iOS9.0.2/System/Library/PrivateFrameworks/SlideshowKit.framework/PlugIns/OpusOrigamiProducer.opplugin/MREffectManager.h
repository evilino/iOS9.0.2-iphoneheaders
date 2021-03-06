/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:23 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface MREffectManager : NSObject {

	NSMutableDictionary* mEffectSets;
	NSMutableDictionary* mEffectPools;
	NSMutableDictionary* mFontRepository;

}
+(id)sharedManager;
+(void)initialize;
-(id)resourcePathForEffectID:(id)arg1 andResource:(id)arg2 ;
-(id)sizeScriptForEffectID:(id)arg1 andKey:(id)arg2 ;
-(id)imageProviderInfosForEffectID:(id)arg1 ;
-(id)attributeDescriptionForEffectID:(id)arg1 andKey:(id)arg2 ;
-(void)recycleEffect:(id)arg1 ;
-(id)effectWithEffectID:(id)arg1 ;
-(double)defaultPhaseOutDurationForEffectID:(id)arg1 ;
-(double)defaultMainDurationForEffectID:(id)arg1 ;
-(double)defaultPhaseInDurationForEffectID:(id)arg1 ;
-(id)descriptionForEffectID:(id)arg1 ;
-(char)hasCustomTimingForEffectID:(id)arg1 ;
-(id)customTimingWithEffectID:(id)arg1 effectAttributes:(id)arg2 slideInformation:(id)arg3 textInformation:(id)arg4 inAspectRatio:(float)arg5 ;
-(id)defaultEffectAttributesWithEffectID:(id)arg1 andSlideInformation:(id)arg2 ;
-(void)releaseResources;
-(Class)classForEffectID:(id)arg1 ;
-(id)imageInputInfosForEffectID:(id)arg1 ;
-(char)hasMultiImageInputForEffectID:(id)arg1 ;
-(float)lineSpacingFactorForTextInEffectID:(id)arg1 presetID:(id)arg2 atIndex:(int)arg3 ;
-(char)isOpaqueForEffectID:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)cleanup;
@end

