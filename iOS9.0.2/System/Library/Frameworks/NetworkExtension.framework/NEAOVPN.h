/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:55 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NEConfigurationValidating.h>
#import <libobjc.A.dylib/NEPrettyDescription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary;

@interface NEAOVPN : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying> {

	char _enabled;
	char _toggleEnabled;
	char _allowCaptiveWebSheet;
	char _allowAllCaptiveNetworkPlugins;
	NSDictionary* _interfaceProtocolMapping;
	NSDictionary* _serviceExceptions;
	NSDictionary* _allowedCaptiveNetworkPlugins;

}

@property (getter=isEnabled) char enabled;                                                          //@synthesize enabled=_enabled - In the implementation block
@property (getter=isToggleEnabled) char toggleEnabled;                                              //@synthesize toggleEnabled=_toggleEnabled - In the implementation block
@property (getter=isAllowCaptiveWebSheet) char allowCaptiveWebSheet;                                //@synthesize allowCaptiveWebSheet=_allowCaptiveWebSheet - In the implementation block
@property (getter=isAllowAllCaptiveNetworkPlugins) char allowAllCaptiveNetworkPlugins;              //@synthesize allowAllCaptiveNetworkPlugins=_allowAllCaptiveNetworkPlugins - In the implementation block
@property (copy) NSDictionary * interfaceProtocolMapping;                                           //@synthesize interfaceProtocolMapping=_interfaceProtocolMapping - In the implementation block
@property (copy) NSDictionary * serviceExceptions;                                                  //@synthesize serviceExceptions=_serviceExceptions - In the implementation block
@property (copy) NSDictionary * allowedCaptiveNetworkPlugins;                                       //@synthesize allowedCaptiveNetworkPlugins=_allowedCaptiveNetworkPlugins - In the implementation block
+(char)supportsSecureCoding;
-(char)checkValidityAndCollectErrors:(id)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned)arg2 ;
-(NSDictionary *)interfaceProtocolMapping;
-(void)setToggleEnabled:(char)arg1 ;
-(void)setAllowCaptiveWebSheet:(char)arg1 ;
-(void)setAllowAllCaptiveNetworkPlugins:(char)arg1 ;
-(void)setServiceExceptions:(NSDictionary *)arg1 ;
-(void)setAllowedCaptiveNetworkPlugins:(NSDictionary *)arg1 ;
-(void)setInterfaceProtocolMapping:(NSDictionary *)arg1 ;
-(NSDictionary *)serviceExceptions;
-(NSDictionary *)allowedCaptiveNetworkPlugins;
-(char)isToggleEnabled;
-(char)isAllowCaptiveWebSheet;
-(char)isAllowAllCaptiveNetworkPlugins;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
