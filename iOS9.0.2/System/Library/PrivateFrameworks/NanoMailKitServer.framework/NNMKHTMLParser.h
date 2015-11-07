/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:25 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <NanoMailKitServer/NanoMailKitServer-Structs.h>
@class NSLock, NSMutableAttributedString, NSMutableDictionary, NSMutableData, NSMutableArray, NSString;

@interface NNMKHTMLParser : NSObject {

	char _isLastCharAddedLineBreak;
	char _containsBlacklistedElements;
	char _cancelled;
	NSLock* _lock;
	NSMutableAttributedString* _parsedAttributedString;
	unsigned _encoding;
	unsigned _maxLength;
	float _maxImageWidth;
	char* _partiallyParsed;
	NSMutableDictionary* _imageAtachmentsDataKeyedByContentId;
	xmlParserCtxt* _parserContext;
	NSMutableData* _charactersBuffer;
	NSMutableArray* _stringAttributesStack;
	NSMutableArray* _isQuoteElementStack;
	unsigned _currentQuoteLevel;
	NSMutableArray* _listStack;
	unsigned _currentListLevel;
	NSString* _ignoringElementSubtree;
	xmlSAXHandler* _parsingSAXHandler;

}

@property (nonatomic,retain) NSLock * lock;                                                          //@synthesize lock=_lock - In the implementation block
@property (nonatomic,retain) NSMutableAttributedString * parsedAttributedString;                     //@synthesize parsedAttributedString=_parsedAttributedString - In the implementation block
@property (assign,nonatomic) unsigned encoding;                                                      //@synthesize encoding=_encoding - In the implementation block
@property (assign,nonatomic) unsigned maxLength;                                                     //@synthesize maxLength=_maxLength - In the implementation block
@property (assign,nonatomic) float maxImageWidth;                                                    //@synthesize maxImageWidth=_maxImageWidth - In the implementation block
@property (assign,nonatomic) char* partiallyParsed;                                                  //@synthesize partiallyParsed=_partiallyParsed - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * imageAtachmentsDataKeyedByContentId;              //@synthesize imageAtachmentsDataKeyedByContentId=_imageAtachmentsDataKeyedByContentId - In the implementation block
@property (assign,nonatomic) xmlSAXHandler* parsingSAXHandler;                                       //@synthesize parsingSAXHandler=_parsingSAXHandler - In the implementation block
@property (assign,nonatomic) xmlParserCtxt* parserContext;                                           //@synthesize parserContext=_parserContext - In the implementation block
@property (nonatomic,retain) NSMutableData * charactersBuffer;                                       //@synthesize charactersBuffer=_charactersBuffer - In the implementation block
@property (nonatomic,retain) NSMutableArray * stringAttributesStack;                                 //@synthesize stringAttributesStack=_stringAttributesStack - In the implementation block
@property (nonatomic,retain) NSMutableArray * isQuoteElementStack;                                   //@synthesize isQuoteElementStack=_isQuoteElementStack - In the implementation block
@property (assign,nonatomic) unsigned currentQuoteLevel;                                             //@synthesize currentQuoteLevel=_currentQuoteLevel - In the implementation block
@property (nonatomic,retain) NSMutableArray * listStack;                                             //@synthesize listStack=_listStack - In the implementation block
@property (assign,nonatomic) unsigned currentListLevel;                                              //@synthesize currentListLevel=_currentListLevel - In the implementation block
@property (assign,nonatomic) char isLastCharAddedLineBreak;                                          //@synthesize isLastCharAddedLineBreak=_isLastCharAddedLineBreak - In the implementation block
@property (assign,nonatomic) char containsBlacklistedElements;                                       //@synthesize containsBlacklistedElements=_containsBlacklistedElements - In the implementation block
@property (assign,nonatomic) char cancelled;                                                         //@synthesize cancelled=_cancelled - In the implementation block
@property (nonatomic,retain) NSString * ignoringElementSubtree;                                      //@synthesize ignoringElementSubtree=_ignoringElementSubtree - In the implementation block
+(id)_scaleAndPrepareImageForClient:(id)arg1 maxWidth:(float)arg2 screenScale:(float)arg3 ;
+(CGSize)_scaledDownSize:(CGSize)arg1 maxWidth:(float)arg2 ;
+(id)imageAttachmentAttributedStringWithContentId:(id)arg1 imageSize:(CGSize)arg2 mergingAttributes:(id)arg3 ;
+(id)attachmentAttributedStringWithContentId:(id)arg1 mergingAttributes:(id)arg2 ;
+(id)adjustedImage:(id)arg1 maxWidth:(float)arg2 screenScale:(float)arg3 ;
+(id)trimAttributedString:(id)arg1 ;
-(id)init;
-(NSLock *)lock;
-(char)cancelled;
-(void)setCancelled:(char)arg1 ;
-(void)setMaxLength:(unsigned)arg1 ;
-(unsigned)encoding;
-(id)_parseHTMLBody:(id)arg1 encoding:(unsigned)arg2 maxLength:(unsigned)arg3 maxImageWidth:(float)arg4 partiallyParsed:(char*)arg5 imageAttachmentsLoaded:(id*)arg6 urlsForValidation:(id)arg7 urlsFound:(id*)arg8 ;
-(char)_validateURLsAndHTMLTagsInParsedString:(id)arg1 urlsFound:(id*)arg2 ;
-(void)_addDataDetectionAttributes:(id)arg1 ;
-(void)_flushCharactersIfNeeded;
-(NSString *)ignoringElementSubtree;
-(char)_isElementIgnorable:(id)arg1 ;
-(void)setIgnoringElementSubtree:(NSString *)arg1 ;
-(char)_isElementBlacklisted:(id)arg1 attributes:(const char**)arg2 ;
-(void)setContainsBlacklistedElements:(char)arg1 ;
-(char)_isElementQuoteElement:(id)arg1 attributes:(const char**)arg2 ;
-(unsigned)currentQuoteLevel;
-(void)setCurrentQuoteLevel:(unsigned)arg1 ;
-(void)_requireNewLine;
-(char)_isElementList:(id)arg1 ordered:(char*)arg2 ;
-(unsigned)currentListLevel;
-(void)setCurrentListLevel:(unsigned)arg1 ;
-(NSMutableArray *)listStack;
-(char)_isElementListItem:(id)arg1 ;
-(void)_appendString:(id)arg1 ;
-(char)_isElementImage:(id)arg1 ;
-(id)_valueForAttributeNamed:(id)arg1 inAttributes:(const char**)arg2 ;
-(NSMutableDictionary *)imageAtachmentsDataKeyedByContentId;
-(float)maxImageWidth;
-(void)_appendImageWithContentId:(id)arg1 imageSize:(CGSize)arg2 ;
-(char)_isElementDisplayedInBlock:(id)arg1 ;
-(char)_isElementLineBreak:(id)arg1 ;
-(void)_appendLineBreak;
-(void)_stringAttributeForElement:(id)arg1 attributes:(const char**)arg2 stringAttributeKey:(id*)arg3 stringAttributeValue:(id*)arg4 ;
-(id)_stringAttributesForStyleAttribute:(id)arg1 ;
-(void)_pushStringAttributes:(id)arg1 ;
-(NSMutableArray *)isQuoteElementStack;
-(char)isLastCharAddedLineBreak;
-(void)_popStringAttributes;
-(void)_appendCharacters:(const char*)arg1 length:(int)arg2 ;
-(xmlParserCtxt*)parserContext;
-(char)_isErrorBlacklisted:(xmlError*)arg1 ;
-(void)_enumerateAttributes:(const char**)arg1 withBlock:(/*^block*/id)arg2 ;
-(char)_isElementBody:(id)arg1 ;
-(id)_stringAttributeValueForCSSStyleName:(id)arg1 inStyleAttribute:(id)arg2 ;
-(unsigned)_textAlignmentFromString:(id)arg1 ;
-(unsigned)_writingDirectionFromString:(id)arg1 ;
-(id)_topStringAttributes;
-(NSMutableAttributedString *)parsedAttributedString;
-(id)parseHTMLBody:(id)arg1 encoding:(unsigned)arg2 maxLength:(unsigned)arg3 maxImageWidth:(float)arg4 partiallyParsed:(char*)arg5 imageAttachmentsLoaded:(id*)arg6 urlsFound:(id*)arg7 ;
-(id)parseHTMLBody:(id)arg1 encoding:(unsigned)arg2 maxLength:(unsigned)arg3 maxImageWidth:(float)arg4 partiallyParsed:(char*)arg5 imageAttachmentsLoaded:(id*)arg6 urlsForValidation:(id)arg7 ;
-(void)setParsedAttributedString:(NSMutableAttributedString *)arg1 ;
-(void)setMaxImageWidth:(float)arg1 ;
-(char*)partiallyParsed;
-(void)setPartiallyParsed:(char*)arg1 ;
-(void)setImageAtachmentsDataKeyedByContentId:(NSMutableDictionary *)arg1 ;
-(xmlSAXHandler*)parsingSAXHandler;
-(void)setParsingSAXHandler:(xmlSAXHandler*)arg1 ;
-(void)setParserContext:(xmlParserCtxt*)arg1 ;
-(NSMutableData *)charactersBuffer;
-(void)setCharactersBuffer:(NSMutableData *)arg1 ;
-(NSMutableArray *)stringAttributesStack;
-(void)setStringAttributesStack:(NSMutableArray *)arg1 ;
-(void)setIsQuoteElementStack:(NSMutableArray *)arg1 ;
-(void)setListStack:(NSMutableArray *)arg1 ;
-(void)setIsLastCharAddedLineBreak:(char)arg1 ;
-(char)containsBlacklistedElements;
-(void)setLock:(NSLock *)arg1 ;
-(unsigned)maxLength;
-(void)setEncoding:(unsigned)arg1 ;
@end
