/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:13:01 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Stocks.app/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol UIViewControllerPreviewingDelegate_Private <NSObject>
@optional
-(id)committedViewControllerForPreviewViewController:(id)arg1;
-(char)shouldStartPreviewingSimultaneouslyWithGestureRecognizer:(id)arg1;
-(void)performCommitTransitionForPreviewViewController:(id)arg1 completion:(/*^block*/id)arg2;
-(void)willPresentPreviewViewController:(id)arg1 forLocation:(CGPoint)arg2 inSourceView:(id)arg3;
-(void)didDismissPreviewViewController:(id)arg1 committing:(char)arg2;
-(void)animateRevealWithInteractionProgress:(id)arg1 forPreviewingAtLocation:(CGPoint)arg2 inSourceView:(id)arg3 containerView:(id)arg4;
-(id)previewPresentationTransitioningDelegateForPosition:(CGPoint)arg1 inSourceView:(id)arg2;
-(void)animateRevealWithInteractionProgress:(id)arg1 forPreviewingAtPosition:(CGPoint)arg2 inSourceView:(id)arg3;

@end

