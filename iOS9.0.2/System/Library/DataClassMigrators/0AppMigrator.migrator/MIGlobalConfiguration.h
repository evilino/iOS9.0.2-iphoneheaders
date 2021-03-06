/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:05:28 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/DataClassMigrators/0AppMigrator.migrator/0AppMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURL, NSSet, NSDictionary, NSArray;

@interface MIGlobalConfiguration : NSObject {

	NSURL* _homePath;
	NSURL* _rootPath;
	NSURL* _carrierBundlesDir;
	NSURL* _stagingRoot;
	NSURL* _coreServicesDir;
	NSURL* _systemAppsDir;
	NSURL* _internalAppsDir;
	NSURL* _developerAppsDir;
	NSURL* _factoryMountDir;
	NSURL* _systemFrameworksRootDirectory;
	NSURL* _internalFrameworksRootDirectory;
	NSURL* _developerFrameworksRootDirectory;
	NSURL* _dataDir;
	NSURL* _archiveDir;
	NSURL* _cachesDir;
	NSSet* _allFrameworksDirectories;
	NSDictionary* _systemAppBundleIDToInfoMap;
	NSDictionary* _coreServicesAppBundleIDToInfoMap;
	NSDictionary* _internalAppBundleIDToInfoMap;
	char _codeSigningEnforcementIsDisabled;
	NSSet* _builtInFrameworkBundleIDs;
	char _lowerInstallPriority;
	char _skipDeviceFamilyCheck;
	char _skipThinningCheck;
	char _allowPatchWithoutSinf;
	long _nSimultaneousInstallations;
	unsigned _uid;
	unsigned _gid;

}

@property (readonly) char lowerInstallPriority;                                    //@synthesize lowerInstallPriority=_lowerInstallPriority - In the implementation block
@property (readonly) char skipDeviceFamilyCheck;                                   //@synthesize skipDeviceFamilyCheck=_skipDeviceFamilyCheck - In the implementation block
@property (readonly) char skipThinningCheck;                                       //@synthesize skipThinningCheck=_skipThinningCheck - In the implementation block
@property (readonly) char allowPatchWithoutSinf;                                   //@synthesize allowPatchWithoutSinf=_allowPatchWithoutSinf - In the implementation block
@property (readonly) char codeSigningEnforcementIsDisabled; 
@property (readonly) long nSimultaneousInstallations;                              //@synthesize nSimultaneousInstallations=_nSimultaneousInstallations - In the implementation block
@property (readonly) NSURL * carrierBundlesDirectory; 
@property (readonly) NSURL * stagingRoot; 
@property (readonly) NSURL * logDirectory; 
@property (readonly) NSURL * coreServicesDirectory; 
@property (readonly) NSURL * systemAppsDirectory; 
@property (readonly) NSURL * internalAppsDirectory; 
@property (readonly) NSURL * developerAppsDirectory; 
@property (readonly) NSURL * factoryMountDirectory; 
@property (readonly) NSURL * homeDirectory; 
@property (readonly) NSURL * systemFrameworksRootDirectory; 
@property (readonly) NSURL * internalFrameworksRootDirectory; 
@property (readonly) NSURL * developerFrameworksRootDirectory; 
@property (readonly) NSSet * allFrameworksDirectories; 
@property (readonly) NSURL * dataDirectory; 
@property (readonly) NSURL * archiveDirectory; 
@property (readonly) NSURL * cachesDirectory; 
@property (readonly) NSArray * appBundleMetadataItemNames; 
@property (readonly) NSArray * appUserDataItemNames; 
@property (readonly) NSSet * installationBlacklist; 
@property (readonly) NSSet * builtInApplicationBundleIDs; 
@property (readonly) NSDictionary * systemAppBundleIDToInfoMap; 
@property (readonly) NSDictionary * coreServicesAppBundleIDToInfoMap; 
@property (readonly) NSDictionary * internalAppBundleIDToInfoMap; 
@property (readonly) NSDictionary * diskImageAppBundleIDToInfoMap; 
@property (readonly) NSSet * builtInFrameworkBundleIDs; 
@property (readonly) unsigned uid;                                                 //@synthesize uid=_uid - In the implementation block
@property (readonly) unsigned gid;                                                 //@synthesize gid=_gid - In the implementation block
@property (readonly) NSURL * oldContainerPath; 
@property (readonly) NSURL * oldInstallMapPath; 
@property (assign) char haveUpdatedPluginContainersWithParentID; 
+(id)sharedInstance;
-(NSURL *)developerAppsDirectory;
-(void)reScanCoreServicesApps;
-(char)skipDeviceFamilyCheck;
-(NSArray *)appBundleMetadataItemNames;
-(NSSet *)builtInApplicationBundleIDs;
-(long)nSimultaneousInstallations;
-(NSURL *)factoryMountDirectory;
-(char)allowPatchWithoutSinf;
-(char)lowerInstallPriority;
-(NSDictionary *)internalAppBundleIDToInfoMap;
-(void)reScanInternalApps;
-(id)_bundleIDMapForAppsInDirectory:(id)arg1 ;
-(NSDictionary *)diskImageAppBundleIDToInfoMap;
-(NSSet *)builtInFrameworkBundleIDs;
-(id)diskImageMountPoints;
-(char)skipThinningCheck;
-(NSURL *)oldInstallMapPath;
-(id)mountPointForDevice:(unsigned)arg1 ;
-(NSSet *)installationBlacklist;
-(NSDictionary *)systemAppBundleIDToInfoMap;
-(NSURL *)internalFrameworksRootDirectory;
-(NSURL *)coreServicesDirectory;
-(NSSet *)allFrameworksDirectories;
-(NSURL *)systemAppsDirectory;
-(NSArray *)appUserDataItemNames;
-(NSURL *)systemFrameworksRootDirectory;
-(NSURL *)internalAppsDirectory;
-(NSURL *)carrierBundlesDirectory;
-(NSURL *)oldContainerPath;
-(void)reScanSystemApps;
-(unsigned)gid;
-(id)_bundleIDMapForBundlesInDirectory:(id)arg1 withExtension:(id)arg2 ;
-(NSURL *)stagingRoot;
-(NSURL *)homeDirectory;
-(id)diskImageApplicationsDirectories;
-(char)codeSigningEnforcementIsDisabled;
-(NSURL *)developerFrameworksRootDirectory;
-(NSDictionary *)coreServicesAppBundleIDToInfoMap;
-(char)haveUpdatedPluginContainersWithParentID;
-(void)setHaveUpdatedPluginContainersWithParentID:(char)arg1 ;
-(NSURL *)cachesDirectory;
-(id)init;
-(unsigned)uid;
-(NSURL *)logDirectory;
-(NSURL *)dataDirectory;
-(NSURL *)archiveDirectory;
@end

