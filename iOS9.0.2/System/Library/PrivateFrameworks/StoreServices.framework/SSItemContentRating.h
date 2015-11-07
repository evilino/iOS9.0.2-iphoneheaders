/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:29 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/SSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSString, NSDictionary, SSItemArtworkImage;

@interface SSItemContentRating : NSObject <SSXPCCoding, NSCopying> {

	NSMutableDictionary* _dictionary;

}

@property (getter=isExplicitContent,nonatomic,readonly) char explicitContent; 
@property (assign,nonatomic) int rank; 
@property (nonatomic,copy) NSString * ratingDescription; 
@property (nonatomic,copy) NSString * ratingLabel; 
@property (assign,nonatomic) int ratingSystem; 
@property (getter=isRestricted,nonatomic,readonly) char restricted; 
@property (assign,nonatomic) char shouldHideWhenRestricted; 
@property (nonatomic,readonly) NSDictionary * contentRatingDictionary; 
@property (nonatomic,readonly) SSItemArtworkImage * ratingSystemLogo; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)ratingSystemFromString:(id)arg1 ;
+(id)stringForRatingSystem:(int)arg1 ;
-(char)isExplicitContent;
-(char)_isRatingSystemForApps:(int)arg1 ;
-(char)_isRatingSystemForMovies:(int)arg1 ;
-(char)_isRatingSystemForTV:(int)arg1 ;
-(char)_isRatingSystemForMusic:(int)arg1 ;
-(NSString *)ratingDescription;
-(void)setRatingDescription:(NSString *)arg1 ;
-(NSString *)ratingLabel;
-(void)setRatingLabel:(NSString *)arg1 ;
-(int)ratingSystem;
-(void)setRatingSystem:(int)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_setValue:(id)arg1 forProperty:(id)arg2 ;
-(id)valueForProperty:(id)arg1 ;
-(int)rank;
-(void)setRank:(int)arg1 ;
-(char)isRestricted;
-(NSDictionary *)contentRatingDictionary;
-(void)_setValueCopy:(id)arg1 forProperty:(id)arg2 ;
-(char)shouldHideWhenRestricted;
-(SSItemArtworkImage *)ratingSystemLogo;
-(void)setShouldHideWhenRestricted:(char)arg1 ;
@end
