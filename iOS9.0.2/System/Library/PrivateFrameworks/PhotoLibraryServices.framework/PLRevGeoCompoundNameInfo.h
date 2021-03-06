/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:49 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSArray;

@interface PLRevGeoCompoundNameInfo : NSObject {

	char _isContinuation;
	char _suffixWhenPrefixOnly;
	NSString* _namePrefix;
	NSArray* _sortedNames;
	NSString* _nameSuffix;

}

@property (nonatomic,copy) NSString * namePrefix;                                      //@synthesize namePrefix=_namePrefix - In the implementation block
@property (nonatomic,copy) NSArray * sortedNames;                                      //@synthesize sortedNames=_sortedNames - In the implementation block
@property (nonatomic,copy) NSString * nameSuffix;                                      //@synthesize nameSuffix=_nameSuffix - In the implementation block
@property (assign,nonatomic) char isContinuation;                                      //@synthesize isContinuation=_isContinuation - In the implementation block
@property (assign,nonatomic) char suffixWhenPrefixOnly;                                //@synthesize suffixWhenPrefixOnly=_suffixWhenPrefixOnly - In the implementation block
@property (nonatomic,copy,readonly) NSArray * localizedSortedNames; 
@property (nonatomic,copy,readonly) NSString * localizedTitleForNameInfo; 
+(id)_localizedNameForName:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(NSArray *)sortedNames;
-(id)dictionaryForInfo;
-(void)setSortedNames:(NSArray *)arg1 ;
-(void)setNamePrefix:(NSString *)arg1 ;
-(NSString *)localizedTitleForNameInfo;
-(void)setIsContinuation:(char)arg1 ;
-(void)setNameSuffix:(NSString *)arg1 ;
-(void)setSuffixWhenPrefixOnly:(char)arg1 ;
-(NSArray *)localizedSortedNames;
-(NSString *)namePrefix;
-(NSString *)nameSuffix;
-(char)isContinuation;
-(char)suffixWhenPrefixOnly;
@end

