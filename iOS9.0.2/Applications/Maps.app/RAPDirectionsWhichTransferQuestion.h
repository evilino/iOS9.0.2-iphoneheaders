/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/RAPQuestion.h>

@protocol RAPUserDirectionRequest;
@class NSArray, RAPDirectionsTransfer, NSString;

@interface RAPDirectionsWhichTransferQuestion : RAPQuestion {

	id<RAPUserDirectionRequest> _request;
	NSArray* _selectableTransfers;
	RAPDirectionsTransfer* _selectedTransfer;

}

@property (nonatomic,readonly) NSString * localizedSelectTransferPrompt; 
@property (nonatomic,readonly) NSArray * selectableTransfers;                         //@synthesize selectableTransfers=_selectableTransfers - In the implementation block
@property (nonatomic,retain) RAPDirectionsTransfer * selectedTransfer;                //@synthesize selectedTransfer=_selectedTransfer - In the implementation block
-(void)_fillSubmittableProblem:(id)arg1 ;
-(void)setSelectedTransfer:(RAPDirectionsTransfer *)arg1 ;
-(void)_setSelectedDirectionsRequest:(id)arg1 ;
-(RAPDirectionsTransfer *)selectedTransfer;
-(NSArray *)selectableTransfers;
-(NSString *)localizedSelectTransferPrompt;
-(char)isComplete;
@end

