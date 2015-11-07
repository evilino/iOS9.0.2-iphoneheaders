/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:42 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <MobileNotes/ScrollViewKeyboardResizerDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>

@class ScrollViewKeyboardResizer, NotesBackgroundView, NSString;

@interface ICScrollViewDelegateViewController : UIViewController <ScrollViewKeyboardResizerDelegate, UIScrollViewDelegate> {

	char _scrollViewDecelerating;
	ScrollViewKeyboardResizer* _scrollViewResizer;

}

@property (nonatomic,readonly) NotesBackgroundView * backgroundView; 
@property (nonatomic,retain) ScrollViewKeyboardResizer * scrollViewResizer;              //@synthesize scrollViewResizer=_scrollViewResizer - In the implementation block
@property (assign,nonatomic) char scrollViewDecelerating;                                //@synthesize scrollViewDecelerating=_scrollViewDecelerating - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setScrollViewResizer:(ScrollViewKeyboardResizer *)arg1 ;
-(ScrollViewKeyboardResizer *)scrollViewResizer;
-(float)consumedBottomAreaForResizer:(id)arg1 ;
-(float)topInsetForResizer:(id)arg1 ;
-(void)setupScrollViewKeyboardResizer;
-(char)scrollViewDecelerating;
-(void)setScrollViewDecelerating:(char)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(NotesBackgroundView *)backgroundView;
-(void)viewWillDisappear:(char)arg1 ;
-(void)pauseIndexing;
-(void)unpauseIndexing;
@end
