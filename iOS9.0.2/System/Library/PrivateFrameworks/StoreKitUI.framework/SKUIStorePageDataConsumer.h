/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:21 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/SSVURLDataConsumer.h>

@interface SKUIStorePageDataConsumer : SSVURLDataConsumer {

	Class _storePageClass;

}

@property (assign,nonatomic) Class storePageClass;              //@synthesize storePageClass=_storePageClass - In the implementation block
-(id)init;
-(id)objectForData:(id)arg1 response:(id)arg2 error:(id*)arg3 ;
-(id)storePageWithDictionary:(id)arg1 response:(id)arg2 ;
-(Class)storePageClass;
-(id)_backgroundArtworkWithDictionary:(id)arg1 ;
-(id)_groupingPageComponentsForDictionary:(id)arg1 items:(id)arg2 ;
-(id)_roomComponentsForDictionary:(id)arg1 items:(id)arg2 gridType:(int)arg3 ;
-(id)_multiRoomComponentsForDictionary:(id)arg1 items:(id)arg2 ;
-(id)_artistPageComponentsForDictionary:(id)arg1 items:(id)arg2 ;
-(id)_bannerRoomComponentsForDictionary:(id)arg1 items:(id)arg2 ;
-(id)_customPageComponentsForDictionary:(id)arg1 items:(id)arg2 ;
-(id)_newPageComponentContextWithDictionary:(id)arg1 ;
-(id)_newCustomPageComponentForBlockType:(id)arg1 context:(id)arg2 ;
-(id)_newFeaturedContentComponentForKind:(int)arg1 context:(id)arg2 ;
-(id)storePageWithDictionary:(id)arg1 ;
-(void)setStorePageClass:(Class)arg1 ;
@end
