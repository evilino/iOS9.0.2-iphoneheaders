/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:47 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLCloudLegacyOperation.h>

@interface PLCloudLegacyPruneOperation : PLCloudLegacyOperation {

	char _cancelled;

}
-(void)_resetCloudPlaceholderKindForAsset:(id)arg1 ;
-(unsigned)cost;
-(void)runOperationWithCompletionHandler:(/*^block*/id)arg1 ;
-(char)keepOriginalsEnabled;
-(id)_cloudResourceForCPLResource:(id)arg1 inPhotoLibrary:(id)arg2 outAssetsAffected:(id)arg3 ;
-(char)canPruneResource;
-(void)markAsNotLocallyAvailable;
-(void)requestCancel;
@end
