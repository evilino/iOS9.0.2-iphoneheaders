/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:07:53 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/NanoPreferenceBundles/Applications/NanoMailBridgeSettings.bundle/NanoMailBridgeSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface MFNanoBridgeSettingsMailbox : NSObject <NSSecureCoding>
+(char)supportsSecureCoding;
+(id)defaultSelectedMailbox;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(char)isValid;
-(unsigned)level;
-(id)icon;
-(id)displayName;
-(void)configureCell:(id)arg1 ;
@end

