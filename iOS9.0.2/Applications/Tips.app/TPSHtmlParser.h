/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:13:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Tips.app/Tips
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSMutableDictionary, NSDictionary, NSMutableAttributedString, TPSHtmlParserContextItem, NSMutableString;

@interface TPSHtmlParser : NSObject {

	float _numberOfParagraphTags;
	NSMutableArray* _contextItemStacks;
	NSMutableDictionary* _currentAttributes;
	NSDictionary* _defaultAttributes;
	char _skipLineBreak;
	NSMutableAttributedString* _attributedString;
	TPSHtmlParserContextItem* _currentContextItem;
	NSMutableString* _characters;

}

@property (nonatomic,retain) NSMutableAttributedString * attributedString;               //@synthesize attributedString=_attributedString - In the implementation block
@property (assign,nonatomic) char skipLineBreak;                                         //@synthesize skipLineBreak=_skipLineBreak - In the implementation block
@property (nonatomic,retain) TPSHtmlParserContextItem * currentContextItem;              //@synthesize currentContextItem=_currentContextItem - In the implementation block
@property (nonatomic,retain) NSMutableString * characters;                               //@synthesize characters=_characters - In the implementation block
-(id)attributedStringForHTML:(id)arg1 defaultAttributes:(id)arg2 ;
-(void)closeTag;
-(void)pushContextWithItemType:(unsigned)arg1 ignoreText:(char)arg2 accessibilityElement:(char)arg3 ;
-(void)pushContextWithItemType:(unsigned)arg1 ;
-(void)addParagraphBreak;
-(void)popContextItem;
-(void)appendAttributedStringFromCharacters;
-(void)openTagParagraph;
-(void)openTagSpanIgnoreText:(char)arg1 accessibilityElement:(char)arg2 ;
-(void)openTagDiv;
-(void)openTagLink:(id)arg1 ;
-(void)openTagBold;
-(void)openTagItalic;
-(void)addImage:(id)arg1 width:(float)arg2 height:(float)arg3 ;
-(char)skipLineBreak;
-(void)setSkipLineBreak:(char)arg1 ;
-(TPSHtmlParserContextItem *)currentContextItem;
-(void)setCurrentContextItem:(TPSHtmlParserContextItem *)arg1 ;
-(id)init;
-(void)setAttributedString:(NSMutableAttributedString *)arg1 ;
-(NSMutableAttributedString *)attributedString;
-(NSMutableString *)characters;
-(void)commonInit;
-(void)setCharacters:(NSMutableString *)arg1 ;
@end

