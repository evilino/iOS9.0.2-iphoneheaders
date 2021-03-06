/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:11 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, NSString;

@interface BRTask : NSObject {

	NSArray* _argv;
	NSString* _redirectStdoutToFileAtPath;
	int _redirectStdoutToFileDescriptor;
	NSString* _redirectStderrToFileAtPath;
	int _redirectStderrToFileDescriptor;
	int _waitStatus;

}

@property (nonatomic,retain) NSArray * argv;                                     //@synthesize argv=_argv - In the implementation block
@property (nonatomic,retain) NSString * redirectStdoutToFileAtPath;              //@synthesize redirectStdoutToFileAtPath=_redirectStdoutToFileAtPath - In the implementation block
@property (assign,nonatomic) int redirectStdoutToFileDescriptor;                 //@synthesize redirectStdoutToFileDescriptor=_redirectStdoutToFileDescriptor - In the implementation block
@property (nonatomic,retain) NSString * redirectStderrToFileAtPath;              //@synthesize redirectStderrToFileAtPath=_redirectStderrToFileAtPath - In the implementation block
@property (assign,nonatomic) int redirectStderrToFileDescriptor;                 //@synthesize redirectStderrToFileDescriptor=_redirectStderrToFileDescriptor - In the implementation block
@property (nonatomic,readonly) int waitStatus;                                   //@synthesize waitStatus=_waitStatus - In the implementation block
+(id)taskWithCommandWithArguments:(id)arg1 ;
+(id)taskWithCommand:(id)arg1 ;
+(id)sanitizeStringForFilename:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setCommandWithArguments:(id)arg1 ;
-(void)setArgv:(NSArray *)arg1 ;
-(NSArray *)argv;
-(NSString *)redirectStdoutToFileAtPath;
-(NSString *)redirectStderrToFileAtPath;
-(int)redirectStdoutToFileDescriptor;
-(int)redirectStderrToFileDescriptor;
-(void)setRedirectStdoutToFileAtPath:(NSString *)arg1 ;
-(void)setRedirectStdoutToFileDescriptor:(int)arg1 ;
-(void)setRedirectStderrToFileAtPath:(NSString *)arg1 ;
-(void)setRedirectStderrToFileDescriptor:(int)arg1 ;
-(int)exec;
-(void)resetRedirect;
-(int)waitStatus;
-(void)setCommand:(id)arg1 ;
@end

