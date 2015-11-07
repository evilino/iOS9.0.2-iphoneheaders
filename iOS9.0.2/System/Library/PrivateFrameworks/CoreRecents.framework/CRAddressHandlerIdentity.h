/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:16 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreRecents.framework/recentsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSSet;

@interface CRAddressHandlerIdentity : NSObject {

	NSString* _className;
	NSSet* _supportedAddressKinds;

}

@property (nonatomic,copy) NSSet * supportedAddressKinds;              //@synthesize supportedAddressKinds=_supportedAddressKinds - In the implementation block
+(id)identityForAddressHandler:(id)arg1 ;
-(NSSet *)supportedAddressKinds;
-(id)initForAddressHandler:(id)arg1 ;
-(void)setSupportedAddressKinds:(NSSet *)arg1 ;
-(void)dealloc;
-(id)description;
@end
