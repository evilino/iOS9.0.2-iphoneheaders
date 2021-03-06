/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:08:12 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/CarKitSettings.bundle/CarKitSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, CRVehicleAccessory, CRVehicleBluetoothDevice;

@interface CRDiscoveredVehicle : NSObject {

	NSString* _identifier;
	CRVehicleAccessory* _accessory;
	CRVehicleBluetoothDevice* _bluetoothDevice;

}

@property (nonatomic,copy) NSString * identifier;                                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName; 
@property (nonatomic,copy,readonly) NSString * connectionStatusDescription; 
@property (nonatomic,copy,readonly) NSString * debugConnectionStatusDescription; 
@property (nonatomic,readonly) char isConnecting; 
@property (nonatomic,copy,readonly) NSString * bluetoothAddress; 
@property (assign,nonatomic,__weak) CRVehicleAccessory * accessory;                           //@synthesize accessory=_accessory - In the implementation block
@property (assign,nonatomic,__weak) CRVehicleBluetoothDevice * bluetoothDevice;               //@synthesize bluetoothDevice=_bluetoothDevice - In the implementation block
-(CRVehicleBluetoothDevice *)bluetoothDevice;
-(void)setBluetoothDevice:(CRVehicleBluetoothDevice *)arg1 ;
-(NSString *)debugConnectionStatusDescription;
-(NSString *)connectionStatusDescription;
-(char)isConnecting;
-(id)init;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)displayName;
-(CRVehicleAccessory *)accessory;
-(void)setAccessory:(CRVehicleAccessory *)arg1 ;
-(NSString *)bluetoothAddress;
@end

