/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:13 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol BKLibraryCollection;
@class NSManagedObjectContext, NSDictionary;

@interface BKLibraryBookListViewModel : NSObject {

	/*^block*/id _reloadBlock;
	NSManagedObjectContext* _managedObjectContext;
	id<BKLibraryCollection> _collection;
	int _type;
	NSDictionary* _priceDictionary;

}

@property (nonatomic,copy) id reloadBlock;                                               //@synthesize reloadBlock=_reloadBlock - In the implementation block
@property (nonatomic,retain) NSManagedObjectContext * managedObjectContext;              //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
@property (nonatomic,retain) id<BKLibraryCollection> collection;                         //@synthesize collection=_collection - In the implementation block
@property (assign,nonatomic) int type;                                                   //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSDictionary * priceDictionary;                             //@synthesize priceDictionary=_priceDictionary - In the implementation block
-(id)initWithManagedObjectContext:(id)arg1 collection:(id)arg2 type:(int)arg3 ;
-(void)setReloadBlock:(id)arg1 ;
-(id)bookListItemForBook:(id)arg1 ;
-(void)_populateSeriesPricesIfNeeded;
-(id)_shelfBookListItemForBook:(id)arg1 ;
-(id)_listBookListItemForBook:(id)arg1 ;
-(NSDictionary *)priceDictionary;
-(void)setPriceDictionary:(NSDictionary *)arg1 ;
-(id)reloadBlock;
-(id<BKLibraryCollection>)collection;
-(void)setCollection:(id<BKLibraryCollection>)arg1 ;
-(void)setType:(int)arg1 ;
-(int)type;
-(NSManagedObjectContext *)managedObjectContext;
-(void)setManagedObjectContext:(NSManagedObjectContext *)arg1 ;
@end
