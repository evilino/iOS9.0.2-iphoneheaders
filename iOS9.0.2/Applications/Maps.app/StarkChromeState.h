/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:25 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface StarkChromeState : NSObject {

	char _topBarIsShowing;
	int _interactionModel;

}

@property (assign,nonatomic) char topBarIsShowing;              //@synthesize topBarIsShowing=_topBarIsShowing - In the implementation block
@property (assign,nonatomic) int interactionModel;              //@synthesize interactionModel=_interactionModel - In the implementation block
-(void)setTopBarIsShowing:(char)arg1 ;
-(char)shouldReloadInUnobscuredBoundsChangeForPreviousState:(id)arg1 ;
-(char)topBarIsShowing;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(int)interactionModel;
-(void)setInteractionModel:(int)arg1 ;
@end
