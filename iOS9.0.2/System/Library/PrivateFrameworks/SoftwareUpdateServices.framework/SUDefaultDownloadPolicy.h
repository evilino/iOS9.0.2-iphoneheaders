/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:16 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/SUDownloadPolicy.h>

@class SUDescriptor, SUCarrierDownloadPolicyProperties, SUNetworkMonitor, NSString;

@interface SUDefaultDownloadPolicy : NSObject <SUDownloadPolicy> {

	SUDescriptor* _descriptor;
	SUCarrierDownloadPolicyProperties* _carrierPolicy;
	SUNetworkMonitor* _networkMonitor;
	char _cellularCapable;

}

@property (nonatomic,retain) SUCarrierDownloadPolicyProperties * carrierPolicy;              //@synthesize carrierPolicy=_carrierPolicy - In the implementation block
@property (assign,getter=isCellularCapable,nonatomic) char cellularCapable;                  //@synthesize cellularCapable=_cellularCapable - In the implementation block
@property (nonatomic,retain) SUNetworkMonitor * networkMonitor;                              //@synthesize networkMonitor=_networkMonitor - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) SUDescriptor * descriptor;                                      //@synthesize descriptor=_descriptor - In the implementation block
-(char)isDownloadable;
-(void)dealloc;
-(NSString *)description;
-(void)setDescriptor:(SUDescriptor *)arg1 ;
-(SUDescriptor *)descriptor;
-(char)isDownloadableForCurrentNetworkConditions:(int*)arg1 cellularFeesApply:(char*)arg2 ;
-(char)isDownloadAllowableForCellularRoaming;
-(char)isDownloadAllowableForCellular;
-(char)isDownloadFreeForCellular;
-(char)isPowerRequired;
-(char)isDownloadAllowableForCellular2G;
-(char)isDownloadAllowableForWiFi;
-(char)isSamePolicy:(id)arg1 ;
-(id)_stringForBool:(char)arg1 ;
-(void)setNetworkMonitor:(SUNetworkMonitor *)arg1 ;
-(char)_isCellularCapable;
-(char)isDownloadableForCurrentNetworkConditions:(int*)arg1 cellularFeesApply:(char*)arg2 powerRequired:(char*)arg3 ;
-(SUNetworkMonitor *)networkMonitor;
-(char)_isDownloadableForNetworkType:(int)arg1 error:(int*)arg2 cellularFeesApply:(char*)arg3 powerRequired:(char*)arg4 ;
-(char)hasEnoughDiskSpace;
-(id)initWithDescriptor:(id)arg1 ;
-(SUCarrierDownloadPolicyProperties *)carrierPolicy;
-(void)setCarrierPolicy:(SUCarrierDownloadPolicyProperties *)arg1 ;
-(char)isCellularCapable;
-(void)setCellularCapable:(char)arg1 ;
@end
