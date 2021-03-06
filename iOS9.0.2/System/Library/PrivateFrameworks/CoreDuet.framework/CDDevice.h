/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:23 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CDSession, NSString;

@interface CDDevice : NSObject {

	CDSession* _session;
	int remoteDataNotificationToken;
	unsigned _identifier;
	NSString* _modelIdentifier;
	char _defaultPaired;
	char _isDefaultPaired;

}

@property (readonly) unsigned identifier;                     //@synthesize identifier=_identifier - In the implementation block
@property (readonly) NSString * modelIdentifier;              //@synthesize modelIdentifier=_modelIdentifier - In the implementation block
@property (assign) char isDefaultPaired;                      //@synthesize isDefaultPaired=_isDefaultPaired - In the implementation block
@property (readonly) CDSession * session;                     //@synthesize session=_session - In the implementation block
-(CDSession *)session;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned)identifier;
-(id)initWithSession:(id)arg1 identifier:(unsigned)arg2 modelIdentifier:(id)arg3 defaultPaired:(char)arg4 error:(id*)arg5 ;
-(char)isEqualToDevice:(id)arg1 ;
-(id)readSystemDataWithError:(id*)arg1 ;
-(id)initWithSession:(id)arg1 identifier:(unsigned)arg2 modelIdentifier:(id)arg3 error:(id*)arg4 ;
-(char)setSystemDataHandlerWithError:(id*)arg1 handler:(/*^block*/id)arg2 ;
-(char)requestSystemDataWithError:(id*)arg1 ;
-(char)setLogDataHandlerWithError:(id*)arg1 handler:(/*^block*/id)arg2 ;
-(id)readLogDataWithError:(id*)arg1 ;
-(char)requestLogDataWithError:(id*)arg1 ;
-(char)isDefaultPaired;
-(void)setIsDefaultPaired:(char)arg1 ;
-(NSString *)modelIdentifier;
@end

