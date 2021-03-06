/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:08:25 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/UsageSettings.bundle/UsageSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UsageSettings/UsageQuotaRequest.h>

@class NSArray;

@interface QuotaAppDetailsRequest : UsageQuotaRequest {

	NSArray* _bundleIds;
	NSArray* _bundleIDs;

}

@property (nonatomic,retain) NSArray * bundleIDs;              //@synthesize bundleIDs=_bundleIDs - In the implementation block
+(Class)responseClass;
-(id)initWithAccount:(id)arg1 accountStore:(id)arg2 bundleIDs:(id)arg3 quotaInfo:(id)arg4 ;
-(NSArray *)bundleIDs;
-(void)setBundleIDs:(NSArray *)arg1 ;
-(id)urlRequest;
@end

