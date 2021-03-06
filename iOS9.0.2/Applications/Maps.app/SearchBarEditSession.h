/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:28 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface SearchBarEditSession : NSObject {

	char _changedSearchString;
	char _didInitiateSearch;
	char _didClearResults;
	char _resignedDueToScroll;
	NSString* _originalSearchString;
	NSString* _currentSearchString;

}

@property (nonatomic,retain) NSString * originalSearchString;              //@synthesize originalSearchString=_originalSearchString - In the implementation block
@property (assign,nonatomic) char changedSearchString;                     //@synthesize changedSearchString=_changedSearchString - In the implementation block
@property (assign,nonatomic) char didInitiateSearch;                       //@synthesize didInitiateSearch=_didInitiateSearch - In the implementation block
@property (nonatomic,retain) NSString * currentSearchString;               //@synthesize currentSearchString=_currentSearchString - In the implementation block
@property (assign,nonatomic) char didClearResults;                         //@synthesize didClearResults=_didClearResults - In the implementation block
@property (assign,nonatomic) char resignedDueToScroll;                     //@synthesize resignedDueToScroll=_resignedDueToScroll - In the implementation block
-(char)didClearResults;
-(char)changedSearchString;
-(void)setResignedDueToScroll:(char)arg1 ;
-(void)setDidClearResults:(char)arg1 ;
-(void)setOriginalSearchString:(NSString *)arg1 ;
-(char)resignedDueToScroll;
-(void)setChangedSearchString:(char)arg1 ;
-(char)didInitiateSearch;
-(NSString *)originalSearchString;
-(void)setDidInitiateSearch:(char)arg1 ;
-(NSString *)currentSearchString;
-(void)setCurrentSearchString:(NSString *)arg1 ;
@end

