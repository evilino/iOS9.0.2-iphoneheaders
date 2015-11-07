/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@class CUIRenditionKey, NSArray;

@interface CUIThemeSchemaRenditionGroup : NSObject {

	CUIRenditionKey* _baseKey;
	NSArray* _renditions;
	SCD_Struct_CU27* _part;

}

@property (nonatomic,retain) NSArray * renditions;              //@synthesize renditions=_renditions - In the implementation block
+(id)renditionGroupsForRenditions:(id)arg1 part:(SCD_Struct_CU27*)arg2 ;
-(void)dealloc;
-(id)description;
-(id)baseKey;
-(id)initWithRenditions:(id)arg1 part:(SCD_Struct_CU27*)arg2 ;
-(NSArray *)renditions;
-(void)setRenditions:(NSArray *)arg1 ;
-(int)partFeatures;
-(id)themeSchemaLayers;
-(void)addLayoutMetricsToPSDImageRef:(id)arg1 withRendition:(id)arg2 ;
-(id)schemaLayersAndLayerGroups;
-(id)_renditionsSortedIntoLayers;
-(id)_layerNameForDrawingLayer:(int)arg1 ;
-(id)_layerNameForState:(int)arg1 ;
-(void)addStatesAndDrawingLayersToPSDLayers:(id)arg1 forPresentationState:(unsigned)arg2 ;
-(void)addValueOrDim1LayersToPSDLayers:(id)arg1 forPresentationState:(unsigned)arg2 state:(unsigned)arg3 drawingLayer:(unsigned)arg4 ;
-(id)mutablePSDImageRef;
-(id)mutablePSDImageRefColumnStyle;
@end
