/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:54 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol BSSettingDescriptionProvider;
@class NSMapTable, NSString;

@interface BSSettings : NSObject <NSCopying, NSMutableCopying, BSXPCCoding, BSDescriptionProviding> {

	id<BSSettingDescriptionProvider> _descriptionProvider;
	NSMapTable* _settingToFlagMap;
	NSMapTable* _settingToObjectMap;

}

@property (assign,nonatomic,__weak) id<BSSettingDescriptionProvider> descriptionProvider;              //@synthesize descriptionProvider=_descriptionProvider - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEmpty;
-(id)objectForSetting:(unsigned)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)allSettings;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(char)boolForSetting:(unsigned)arg1 ;
-(int)flagForSetting:(unsigned)arg1 ;
-(void)enumerateFlagsWithBlock:(/*^block*/id)arg1 ;
-(void)enumerateObjectsWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateSettingsForFlagsWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateSettingsForObjectsWithBlock:(/*^block*/id)arg1 ;
-(void)setDescriptionProvider:(id<BSSettingDescriptionProvider>)arg1 ;
-(void)_setFlag:(int)arg1 forSetting:(unsigned)arg2 ;
-(void)_setObject:(id)arg1 forSetting:(unsigned)arg2 ;
-(void)_enumerateSettingsInMap:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)_keyDescriptionForSetting:(unsigned)arg1 ;
-(id)_valueDescriptionForFlag:(int)arg1 object:(id)arg2 ofSetting:(unsigned)arg3 multilinePrefix:(id)arg4 ;
-(id)_newMapTable;
-(void)_applyToSettings:(id)arg1 ;
-(id)basicDescriptionWithPrefix:(id)arg1 ;
-(id<BSSettingDescriptionProvider>)descriptionProvider;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
@end
