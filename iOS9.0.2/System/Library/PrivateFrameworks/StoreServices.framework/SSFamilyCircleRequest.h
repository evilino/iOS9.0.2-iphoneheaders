/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/SSRequest.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSString;

@interface SSFamilyCircleRequest : SSRequest <SSXPCCoding> {

	int _authenticationPromptStyle;
	char _fetchITunesAccountNames;

}

@property (assign,nonatomic) int authenticationPromptStyle;              //@synthesize authenticationPromptStyle=_authenticationPromptStyle - In the implementation block
@property (assign,nonatomic) char fetchITunesAccountNames;               //@synthesize fetchITunesAccountNames=_fetchITunesAccountNames - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(void)setAuthenticationPromptStyle:(int)arg1 ;
-(void)startWithResponseBlock:(/*^block*/id)arg1 ;
-(int)authenticationPromptStyle;
-(char)fetchITunesAccountNames;
-(void)setFetchITunesAccountNames:(char)arg1 ;
@end
