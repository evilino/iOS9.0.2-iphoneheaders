/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:10 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Search/SPSection.h>
#import <libobjc.A.dylib/PRSTwitterSection.h>

@class NSString, PRSImage, NSArray, NSURL;

@interface SPTwitterSection : SPSection <PRSTwitterSection>

@property (nonatomic,retain) NSString * type; 
@property (nonatomic,retain) NSURL * url; 
@property (nonatomic,retain) NSURL * attribution_url; 
@property (assign,nonatomic) char hide_divider; 
@property (assign,nonatomic) char card_padding_bottom; 
@property (assign,nonatomic) char card_padding_top; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,retain) PRSImage * thumbnail; 
@property (nonatomic,retain) PRSImage * image; 
@property (nonatomic,retain) PRSImage * title_glyph; 
@property (nonatomic,retain) NSArray * formatted_text; 
@property (nonatomic,retain) NSString * formatted_text_delimiter; 
@property (nonatomic,copy) NSString * date; 
@property (nonatomic,copy) NSString * footnote; 
@end

