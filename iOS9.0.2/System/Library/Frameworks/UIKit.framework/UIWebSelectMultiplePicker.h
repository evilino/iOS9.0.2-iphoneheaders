/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:21 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIPickerView.h>
#import <UIKit/UIWebFormControl.h>
#import <UIKit/UIPickerViewDataSource.h>
#import <UIKit/UIPickerViewDelegate.h>

@protocol UIWebSelectedItemPrivate;
@class DOMHTMLSelectElement, NSArray, NSString;

@interface UIWebSelectMultiplePicker : UIPickerView <UIWebFormControl, UIPickerViewDataSource, UIPickerViewDelegate> {

	DOMHTMLSelectElement* _selectionNode;
	NSArray* _cachedItems;
	id<UIWebSelectedItemPrivate> _singleSelectionItem;
	unsigned _singleSelectionIndex;
	float _fontSize;
	float _maximumTextWidth;
	int _textAlignment;
	float _layoutWidth;

}

@property (nonatomic,retain) DOMHTMLSelectElement * _selectionNode;                          //@synthesize selectionNode=_selectionNode - In the implementation block
@property (nonatomic,retain) NSArray * _cachedItems;                                         //@synthesize cachedItems=_cachedItems - In the implementation block
@property (nonatomic,retain) id<UIWebSelectedItemPrivate> _singleSelectionItem;              //@synthesize singleSelectionItem=_singleSelectionItem - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)pickerView:(id)arg1 row:(int)arg2 column:(int)arg3 checked:(char)arg4 ;
-(int)numberOfComponentsInPickerView:(id)arg1 ;
-(int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2 ;
-(void)layoutSubviews;
-(id)pickerView:(id)arg1 viewForRow:(int)arg2 forComponent:(int)arg3 reusingView:(id)arg4 ;
-(id)controlView;
-(void)controlBeginEditing;
-(void)controlEndEditing;
-(void)set_selectionNode:(DOMHTMLSelectElement *)arg1 ;
-(void)set_cachedItems:(NSArray *)arg1 ;
-(void)set_singleSelectionItem:(id<UIWebSelectedItemPrivate>)arg1 ;
-(DOMHTMLSelectElement *)_selectionNode;
-(int)_itemIndexForRowIndex:(int)arg1 ;
-(id)initWithDOMHTMLSelectElement:(id)arg1 cachedItems:(id)arg2 singleSelectionItem:(id)arg3 singleSelectionIndex:(unsigned)arg4 multipleSelection:(char)arg5 ;
-(NSArray *)_cachedItems;
-(id<UIWebSelectedItemPrivate>)_singleSelectionItem;
@end
