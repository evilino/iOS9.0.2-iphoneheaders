/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:48 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class SUScriptAppleAccount;

@interface SUScriptFacebookSession : SUScriptObject {

	SUScriptAppleAccount* _account;

}

@property (readonly) id hasAccounts; 
@property (readonly) unsigned likeStatusFlagFriendCount; 
@property (readonly) unsigned likeStatusFlagFriends; 
@property (readonly) unsigned likeStatusFlagGlobalCount; 
@property (readonly) unsigned likeStatusFlagMe; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)dealloc;
-(id)attributeKeys;
-(id)scriptAttributeKeys;
-(id)_className;
-(id)hasAccounts;
-(void)fetchLikeStatusForURL:(id)arg1 flags:(id)arg2 completionFunction:(id)arg3 ;
-(void)likeURL:(id)arg1 completionFunction:(id)arg2 ;
-(void)unlikeURL:(id)arg1 completionFunction:(id)arg2 ;
-(id)initWithAppleAccount:(id)arg1 ;
-(unsigned)likeStatusFlagFriendCount;
-(unsigned)likeStatusFlagFriends;
-(unsigned)likeStatusFlagGlobalCount;
-(unsigned)likeStatusFlagMe;
@end
