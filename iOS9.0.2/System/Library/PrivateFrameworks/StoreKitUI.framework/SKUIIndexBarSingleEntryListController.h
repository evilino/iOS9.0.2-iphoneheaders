/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:28 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIIndexBarEntryListController.h>

@class SKUIIndexBarEntryDescriptor, SKUIViewElement, SKUIIndexBarEntryViewElement;

@interface SKUIIndexBarSingleEntryListController : SKUIIndexBarEntryListController {

	SKUIIndexBarEntryDescriptor* _entryDescriptor;
	SKUIViewElement* _descriptiveViewElement;
	SKUIIndexBarEntryViewElement* _entryViewElement;

}

@property (nonatomic,readonly) SKUIIndexBarEntryViewElement * entryViewElement;              //@synthesize entryViewElement=_entryViewElement - In the implementation block
-(id)entryDescriptorAtIndex:(int)arg1 ;
-(int)numberOfEntryDescriptors;
-(char)hidesIndexBar;
-(id)targetIndexBarEntryIDForEntryDescriptorAtIndex:(int)arg1 returningRelativeSectionIndex:(out int*)arg2 ;
-(char)needsRootTargetViewElement;
-(void)reloadViewElementData;
-(id)initWithEntryViewElement:(id)arg1 ;
-(SKUIIndexBarEntryViewElement *)entryViewElement;
@end

