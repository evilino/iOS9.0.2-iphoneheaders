/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:24 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/CFPrefsPlistSource.h>

@interface CFPrefsManagedSource : CFPrefsPlistSource
+(void)withSourceForIdentifier:(CFStringRef)arg1 user:(CFStringRef)arg2 perform:(/*^block*/id)arg3 ;
-(char)managed;
-(long)sendMessageSettingValue:(void*)arg1 forKey:(CFStringRef)arg2 ;
-(void)alreadylocked_setValue:(void*)arg1 forKey:(CFStringRef)arg2 ;
-(id)initWithDomain:(CFStringRef)arg1 user:(CFStringRef)arg2 byHost:(char)arg3 ;
@end

