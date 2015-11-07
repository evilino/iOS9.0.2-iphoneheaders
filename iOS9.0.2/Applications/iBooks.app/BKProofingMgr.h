/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:13 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/PRClientSessionDelegate.h>
#import <iBooks/AEProofingMgr.h>
#import <iBooks/AEProofingHelperDelegate.h>

@protocol AEProofingHelper;
@class PRClientSession, NSDictionary, NSArray, NSString, NSURL, NSManagedObjectContext, BKBookInfo;

@interface BKProofingMgr : NSObject <PRClientSessionDelegate, AEProofingMgr, AEProofingHelperDelegate> {

	PRClientSession* _proofingClientSession;
	id<AEProofingHelper> _proofingHelper;
	NSDictionary* _hostManifestMetadata;
	NSArray* _clientManifest;
	NSString* _proofingBookDatabaseKey;
	NSURL* _proofingURL;
	NSManagedObjectContext* _proofingMOC;
	unsigned _assetsSynced;
	BKBookInfo* _proofingBookInfo;

}

@property (nonatomic,readonly) PRClientSession * proofingSession;               //@synthesize proofingClientSession=_proofingClientSession - In the implementation block
@property (nonatomic,retain) NSString * proofingBookDatabaseKey;                //@synthesize proofingBookDatabaseKey=_proofingBookDatabaseKey - In the implementation block
@property (nonatomic,retain) NSURL * proofingURL;                               //@synthesize proofingURL=_proofingURL - In the implementation block
@property (nonatomic,retain) id<AEProofingHelper> proofingHelper;               //@synthesize proofingHelper=_proofingHelper - In the implementation block
@property (nonatomic,retain) NSArray * clientManifest;                          //@synthesize clientManifest=_clientManifest - In the implementation block
@property (nonatomic,retain) NSDictionary * hostManifestMetadata;               //@synthesize hostManifestMetadata=_hostManifestMetadata - In the implementation block
@property (nonatomic,retain) BKBookInfo * proofingBookInfo;                     //@synthesize proofingBookInfo=_proofingBookInfo - In the implementation block
@property (nonatomic,retain) NSManagedObjectContext * proofingMOC;              //@synthesize proofingMOC=_proofingMOC - In the implementation block
@property (assign,nonatomic) unsigned assetsSynced;                             //@synthesize assetsSynced=_assetsSynced - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(PRClientSession *)proofingSession;
-(void)setHostManifestMetadata:(NSDictionary *)arg1 ;
-(NSDictionary *)hostManifestMetadata;
-(void)setProofingURL:(NSURL *)arg1 ;
-(void)setProofingMOC:(NSManagedObjectContext *)arg1 ;
-(NSManagedObjectContext *)proofingMOC;
-(void)setProofingBookInfo:(BKBookInfo *)arg1 ;
-(BKBookInfo *)proofingBookInfo;
-(void)setProofingBookDatabaseKey:(NSString *)arg1 ;
-(void)setProofingHelper:(id<AEProofingHelper>)arg1 ;
-(id<AEProofingHelper>)proofingHelper;
-(id)_clientManifestFromFilePaths:(id)arg1 ;
-(void)setClientManifest:(NSArray *)arg1 ;
-(void)_updateProgressWithAssetID:(id)arg1 ;
-(void)setAssetsSynced:(unsigned)arg1 ;
-(NSArray *)clientManifest;
-(unsigned)assetsSynced;
-(void)sessionClientDidConnect:(id)arg1 ;
-(void)sessionClientDidDisconnect:(id)arg1 ;
-(void)sessionPinged:(id)arg1 ;
-(char)sessionSyncWillStart:(id)arg1 ;
-(void)sessionSyncDidStop:(id)arg1 reason:(int)arg2 ;
-(id)session:(id)arg1 clientManifestGivenHostManifest:(id)arg2 stayAlive:(/*^block*/id)arg3 ;
-(void)session:(id)arg1 assetDidSync:(id)arg2 withPath:(id)arg3 ;
-(void)session:(id)arg1 assetFailedSync:(id)arg2 withPath:(id)arg3 errorCode:(int)arg4 ;
-(void)session:(id)arg1 assetDidChangeDownloadProgress:(id)arg2 withPath:(id)arg3 progress:(double)arg4 ;
-(id)computeSimpleContentsHashForFileAtPath:(id)arg1 ;
-(char)proofingHelperRequestsSyncCancel:(id)arg1 ;
-(char)proofingHelperRequestsSyncRestart:(id)arg1 ;
-(char)proofingHelper:(id)arg1 requestOpenURL:(id)arg2 animated:(char)arg3 ;
-(NSString *)proofingBookDatabaseKey;
-(NSURL *)proofingURL;
-(void)dealloc;
-(id)init;
-(void)stopSession;
-(void)startSession;
@end
