/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSUUID;

@interface AXSwitch : NSObject <NSSecureCoding> {

	unsigned short _keyCode;
	int _action;
	int _longPressAction;
	NSString* _name;
	NSString* _source;
	NSString* _type;
	NSString* _productName;
	NSString* _manufacturerName;
	int _buttonNumber;
	int _headSwitch;
	NSUUID* _uuid;

}

@property (assign,nonatomic) int action;                             //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) int longPressAction;                    //@synthesize longPressAction=_longPressAction - In the implementation block
@property (nonatomic,copy) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * source;                      //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) NSString * type;                        //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * productName;                   //@synthesize productName=_productName - In the implementation block
@property (nonatomic,copy) NSString * manufacturerName;              //@synthesize manufacturerName=_manufacturerName - In the implementation block
@property (nonatomic,readonly) char hasLongPressAction; 
@property (nonatomic,readonly) char supportsLongPress; 
@property (assign,nonatomic) unsigned short keyCode;                 //@synthesize keyCode=_keyCode - In the implementation block
@property (assign,nonatomic) int buttonNumber;                       //@synthesize buttonNumber=_buttonNumber - In the implementation block
@property (assign,nonatomic) int headSwitch;                         //@synthesize headSwitch=_headSwitch - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                          //@synthesize uuid=_uuid - In the implementation block
+(char)supportsSecureCoding;
+(id)switchWithAction:(int)arg1 name:(id)arg2 source:(NSString*)arg3 type:(NSString*)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(int)action;
-(void)setAction:(int)arg1 ;
-(int)longPressAction;
-(NSString *)source;
-(void)setSource:(NSString *)arg1 ;
-(NSUUID *)uuid;
-(unsigned short)keyCode;
-(void)setLongPressAction:(int)arg1 ;
-(void)setKeyCode:(unsigned short)arg1 ;
-(int)buttonNumber;
-(int)headSwitch;
-(id)initWithAction:(int)arg1 name:(id)arg2 source:(NSString*)arg3 type:(NSString*)arg4 ;
-(char)hasLongPressAction;
-(void)setManufacturerName:(NSString *)arg1 ;
-(void)setButtonNumber:(int)arg1 ;
-(void)setHeadSwitch:(int)arg1 ;
-(NSString *)manufacturerName;
-(char)supportsLongPress;
-(void)setUuid:(NSUUID *)arg1 ;
-(NSString *)productName;
-(void)setProductName:(NSString *)arg1 ;
@end

