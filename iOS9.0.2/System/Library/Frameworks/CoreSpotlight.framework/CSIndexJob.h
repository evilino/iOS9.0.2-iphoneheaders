/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:29 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreSpotlight/CoreSpotlight-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface CSIndexJob : NSObject <NSSecureCoding, NSCopying> {

	int _jobType;
	int _jobOptions;
	NSArray* _identifiersToReindex;
	NSArray* _bundleIDs;
	NSArray* _excludedBundleIDs;

}

@property (assign,nonatomic) int jobType;                                 //@synthesize jobType=_jobType - In the implementation block
@property (assign,nonatomic) int jobOptions;                              //@synthesize jobOptions=_jobOptions - In the implementation block
@property (nonatomic,retain) NSArray * identifiersToReindex;              //@synthesize identifiersToReindex=_identifiersToReindex - In the implementation block
@property (nonatomic,retain) NSArray * bundleIDs;                         //@synthesize bundleIDs=_bundleIDs - In the implementation block
@property (nonatomic,retain) NSArray * excludedBundleIDs;                 //@synthesize excludedBundleIDs=_excludedBundleIDs - In the implementation block
+(char)supportsSecureCoding;
-(int)jobOptions;
-(NSArray *)identifiersToReindex;
-(void)setJobOptions:(int)arg1 ;
-(id)initWithJobType:(int)arg1 jobOptions:(int)arg2 ;
-(NSArray *)excludedBundleIDs;
-(void)setIdentifiersToReindex:(NSArray *)arg1 ;
-(void)setExcludedBundleIDs:(NSArray *)arg1 ;
-(id)initWithJobType:(int)arg1 ;
-(NSArray *)bundleIDs;
-(void)setBundleIDs:(NSArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)jobType;
-(void)setJobType:(int)arg1 ;
@end

