/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:00 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSArray;

@interface RKClassification : NSObject {

	NSString* _language;
	unsigned _sentenceType;
	int _sensitive;
	unsigned _gender;
	NSArray* _customResponses;
	NSString* _taggedText;

}

@property (retain) NSString * language;                    //@synthesize language=_language - In the implementation block
@property (assign) unsigned sentenceType;                  //@synthesize sentenceType=_sentenceType - In the implementation block
@property (getter=isSensitive) int sensitive;              //@synthesize sensitive=_sensitive - In the implementation block
@property (assign) unsigned gender;                        //@synthesize gender=_gender - In the implementation block
@property (retain) NSArray * customResponses;              //@synthesize customResponses=_customResponses - In the implementation block
@property (retain) NSString * taggedText;                  //@synthesize taggedText=_taggedText - In the implementation block
-(id)init;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(void)setSensitive:(int)arg1 ;
-(unsigned)sentenceType;
-(void)setSentenceType:(unsigned)arg1 ;
-(int)isSensitive;
-(NSArray *)customResponses;
-(void)setCustomResponses:(NSArray *)arg1 ;
-(NSString *)taggedText;
-(void)setTaggedText:(NSString *)arg1 ;
-(unsigned)gender;
-(void)setGender:(unsigned)arg1 ;
@end

