/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:35:49 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/VectorKit.axbundle/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <UIKit/UIAccessibilityElement.h>

@class NSMutableArray, NSString;

@interface VKFeatureAccessibilityElement : UIAccessibilityElement {

	NSMutableArray* _featureArray;
	NSMutableArray* _paths;
	int _style;
	NSMutableArray* _hitTestPaths;
	float _strokeWidth;
	NSString* _iconName;
	NSString* _shieldText;
	int _sortKey;
	unsigned long long _featureId;
	unsigned long long _shieldType;

}

@property (assign,nonatomic) int style;                                    //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) unsigned long long featureId;                 //@synthesize featureId=_featureId - In the implementation block
@property (assign,nonatomic) unsigned long long shieldType;                //@synthesize shieldType=_shieldType - In the implementation block
@property (nonatomic,readonly) NSMutableArray * featureArray;              //@synthesize featureArray=_featureArray - In the implementation block
@property (nonatomic,retain) NSMutableArray * paths;                       //@synthesize paths=_paths - In the implementation block
@property (nonatomic,retain) NSMutableArray * hitTestPaths;                //@synthesize hitTestPaths=_hitTestPaths - In the implementation block
@property (nonatomic,readonly) char isRoad; 
@property (nonatomic,readonly) char isPOI; 
@property (assign,nonatomic) float strokeWidth;                            //@synthesize strokeWidth=_strokeWidth - In the implementation block
@property (nonatomic,retain) NSString * iconName;                          //@synthesize iconName=_iconName - In the implementation block
@property (nonatomic,readonly) NSString * trueLabel; 
@property (nonatomic,retain) NSString * shieldText;                        //@synthesize shieldText=_shieldText - In the implementation block
@property (nonatomic,readonly) int mapFeatureType; 
@property (assign,nonatomic) int sortKey;                                  //@synthesize sortKey=_sortKey - In the implementation block
-(NSMutableArray *)hitTestPaths;
-(NSString *)trueLabel;
-(void)addFeaturesFromElement:(id)arg1 ;
-(char)isPOI;
-(NSMutableArray *)featureArray;
-(void)addFeature:(void*)arg1 ;
-(char)isRoad;
-(void)setFeatureId:(unsigned long long)arg1 ;
-(void)_mergePaths;
-(int)mapFeatureType;
-(void)setHitTestPaths:(NSMutableArray *)arg1 ;
-(id)accessibilityPaths;
-(id)_accessibilityShortAddress:(id)arg1 alwaysIncludeLocality:(char)arg2 ;
-(id)_accessibilityShortAddress:(id)arg1 ;
-(id)_distanceAwayString;
-(id)detailedFeatureElementInfoAtPoint:(CGPoint)arg1 ;
-(id)_distanceStringForPoint:(SCD_Struct_VK2)arg1 ;
-(void)startLocationInformationRequest:(CGPoint)arg1 ;
-(id)pointsFromFeature:(id)arg1 ;
-(void)_updateElementStatus;
-(id)initWithAccessibilityContainer:(id)arg1 feature:(SCD_Struct_VK3*)arg2 featureTypeContext:(void*)arg3 ignoreMissingName:(char)arg4 useLocalizedLabels:(char)arg5 ;
-(char)pointInside:(CGPoint)arg1 ;
-(char)_allowCustomActionHintSpeakOverride;
-(void)setSortKey:(int)arg1 ;
-(void)setIconName:(NSString *)arg1 ;
-(NSString *)iconName;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(int)style;
-(id)accessibilityLabel;
-(void)setStyle:(int)arg1 ;
-(void)_updatePath;
-(CGRect)accessibilityFrame;
-(id)initWithAccessibilityContainer:(id)arg1 ;
-(void)setStrokeWidth:(float)arg1 ;
-(NSMutableArray *)paths;
-(void)setPaths:(NSMutableArray *)arg1 ;
-(void)setShieldText:(NSString *)arg1 ;
-(NSString *)shieldText;
-(void)setShieldType:(unsigned long long)arg1 ;
-(unsigned long long)shieldType;
-(float)strokeWidth;
-(id)_accessibilityMapDetailedInfoAtPoint:(CGPoint)arg1 ;
-(int)_accessibilityMapFeatureType;
-(unsigned long long)featureId;
-(int)sortKey;
@end

