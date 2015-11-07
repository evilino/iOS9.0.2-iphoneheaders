/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBIconIndexNode.h>

@class NSHashTable, UIImage, NSString;

@interface SBIcon : NSObject <SBIconIndexNode> {

	NSHashTable* _observers;
	id _badgeNumberOrString;
	unsigned _uninstalled : 1;
	UIImage* _cachedIconImages[14];

}

@property (nonatomic,readonly) char shouldWarmUp; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)memoryMappedIconImageForIconImage:(id)arg1 ;
+(id)memoryMappedIconImageOfSize:(CGSize)arg1 scale:(float)arg2 withDrawing:(/*^block*/id)arg3 ;
+(id)_iconImagesMemoryPool;
+(id)_iconImageOfSize:(CGSize)arg1 scale:(float)arg2 failGracefully:(char)arg3 drawing:(/*^block*/id)arg4 ;
-(char)isApplicationIcon;
-(void)launchFromLocation:(int)arg1 context:(id)arg2 ;
-(id)leafIdentifier;
-(id)getCachedIconImage:(int)arg1 ;
-(char)shouldCacheImageForFormat:(int)arg1 ;
-(id)folderTitleOptions;
-(id)getUnmaskedIconImage:(int)arg1 ;
-(id)automationID;
-(id)folderFallbackTitle;
-(char)isUninstalled;
-(id)badgeNumberOrString;
-(void)reloadIconImage;
-(id)getStandardIconImageForLocation:(int)arg1 ;
-(void)purgeCachedImages;
-(id)getIconImage:(int)arg1 ;
-(char)isDownloadingIcon;
-(char)isEmptyPlaceholder;
-(char)isGrabbedIconPlaceholder;
-(char)isFolderIcon;
-(id)accessoryTextForLocation:(int)arg1 ;
-(char)isBookmarkIcon;
-(char)isLeafIcon;
-(void)completeUninstall;
-(void)setUninstalled;
-(id)nodeIdentifier;
-(char)containsNodeIdentifier:(id)arg1 ;
-(char)hasFolderIconView;
-(void)noteBadgeDidChange;
-(int)localizedCompareDisplayNames:(id)arg1 ;
-(id)uninstallAlertTitle;
-(id)uninstallAlertBody;
-(id)uninstallAlertConfirmTitle;
-(id)uninstallAlertCancelTitle;
-(id)uninstallAlertTitleForAppWithDocumentsInCloud;
-(id)uninstallAlertBodyForAppWithDocumentsInCloud;
-(id)uninstallAlertTitleForAppWithDocumentUpdatesPending;
-(id)uninstallAlertBodyForAppWithDocumentUpdatesPending;
-(id)gridCellImage;
-(int)iconFormatForLocation:(int)arg1 ;
-(id)getGenericIconImage:(int)arg1 ;
-(id)appPlaceholder;
-(char)isUserInstalledApplicationIcon;
-(void)addNodeObserver:(id)arg1 ;
-(void)removeNodeObserver:(id)arg1 ;
-(void)_notifyAccessoriesDidUpdate;
-(float)progressPercent;
-(void)_notifyImageDidUpdate;
-(id)containedNodeIdentifiers;
-(id)indexPathsForContainedNodeIdentifier:(id)arg1 prefixPath:(id)arg2 ;
-(id)nodesAlongIndexPath:(id)arg1 consumedIndexes:(unsigned)arg2 ;
-(id)nodeDescriptionWithPrefix:(id)arg1 ;
-(char)progressIsPaused;
-(char)shouldAnimateProgress;
-(void)_notifyLaunchEnabledDidChange;
-(void)reloadIconImagePurgingImageCache:(char)arg1 ;
-(int)accessoryTypeForLocation:(int)arg1 ;
-(char)isRecentlyUpdated;
-(char)canEllipsizeLabel;
-(char)canTightenLabel;
-(Class)iconImageViewClassForLocation:(int)arg1 ;
-(char)canReceiveGrabbedIcon;
-(char)shouldWarmUp;
-(char)matchesEntity:(id)arg1 ;
-(char)allowsUninstall;
-(id)generateIconImage:(int)arg1 ;
-(char)launchEnabled;
-(id)displayNameForLocation:(int)arg1 ;
-(void)localeChanged;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)tags;
-(int)badgeValue;
-(id)applicationBundleID;
-(void)setBadge:(id)arg1 ;
-(char)hasObserver:(id)arg1 ;
-(id)folder;
-(int)progressState;
-(char)isPlaceholder;
-(char)isBeta;
-(id)application;
@end
