/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SASTTemplateItem.h>

@class SAUIColor, SAUIDecoratedText, NSString;

@interface SASTCardItem : AceObject <SASTTemplateItem>

@property (nonatomic,retain) SAUIColor * backgroundColor; 
@property (nonatomic,retain) SAUIDecoratedText * footnote; 
@property (nonatomic,retain) SAUIDecoratedText * label; 
@property (nonatomic,retain) SAUIColor * labelTextColor; 
@property (nonatomic,retain) SAUIDecoratedText * title; 
@property (nonatomic,retain) SAUIColor * titleBackgroundColor; 
@property (nonatomic,retain) SAUIColor * titleTextColor; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cardItem;
+(id)cardItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(SAUIDecoratedText *)footnote;
-(void)setLabelTextColor:(SAUIColor *)arg1 ;
-(SAUIColor *)labelTextColor;
-(void)setBackgroundColor:(SAUIColor *)arg1 ;
-(SAUIColor *)backgroundColor;
-(void)setTitle:(SAUIDecoratedText *)arg1 ;
-(SAUIDecoratedText *)title;
-(SAUIDecoratedText *)label;
-(void)setLabel:(SAUIDecoratedText *)arg1 ;
-(void)setTitleTextColor:(SAUIColor *)arg1 ;
-(SAUIColor *)titleTextColor;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setFootnote:(SAUIDecoratedText *)arg1 ;
-(SAUIColor *)titleBackgroundColor;
-(void)setTitleBackgroundColor:(SAUIColor *)arg1 ;
@end
