/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:24 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol HAPKeyStore <NSObject>
@optional
-(char)savePeripheralIdentifier:(id)arg1 forAccessoryName:(id)arg2 error:(id*)arg3;
-(char)updatePeripheralIdentifier:(id)arg1 forAccessoryName:(id)arg2 protocolVersion:(unsigned)arg3 error:(id*)arg4;
-(char)deletePeripheralIdentifierForAccessoryName:(id)arg1 error:(id*)arg2;
-(id)readPeripheralIdentifierForAccessoryName:(id)arg1 protocolVersion:(unsigned*)arg2 error:(id*)arg3;
-(id)getPeripherialIdentifiersAndAccessoryNames;
-(char)deleteAllPeripheralIdentifiers:(id*)arg1;

@required
-(char)registerAccessoryWithHomeKit:(id)arg1 error:(id*)arg2;
-(char)getControllerKeyPair:(id*)arg1 username:(id*)arg2 error:(id*)arg3;
-(id)readPublicKeyForAccessoryName:(id)arg1 registeredWithHomeKit:(char*)arg2 error:(id*)arg3;
-(char)getControllerPublicKey:(id*)arg1 secretKey:(id*)arg2 username:(id*)arg3 allowCreation:(char)arg4 error:(id*)arg5;
-(char)savePublicKey:(id)arg1 forAccessoryName:(id)arg2 error:(id*)arg3;
-(char)getAllAvailableControllerPublicKeys:(id*)arg1 secretKeys:(id*)arg2 userNames:(id*)arg3 error:(id*)arg4;
-(char)removeControllerKeyPairForIdentifier:(id)arg1 leaveTombstone:(char)arg2 error:(id*)arg3;
-(void)updateActiveControllerPairingIdentifier:(id)arg1;
-(char)getMetadataSecretKey:(id*)arg1 error:(id*)arg2;
-(char)getCurrentiCloudIdentifier:(id*)arg1 controllerPairingIdentifier:(id*)arg2 error:(id*)arg3;
-(char)updateCurrentiCloudIdentifier:(id)arg1 controllerPairingIdentifier:(id)arg2 error:(id*)arg3;
-(char)removeControllerKeyPairWithError:(id*)arg1;
-(char)saveKeyPair:(id)arg1 username:(id)arg2 syncable:(char)arg3 error:(id*)arg4;
-(char)deserializeKeyPair:(id)arg1 publicKey:(id*)arg2 secretKey:(id*)arg3 error:(id*)arg4;
-(char)removeAllAccessoryKeys:(id*)arg1;
-(char)getControllerPublicKey:(id*)arg1 secretKey:(id*)arg2 keyPair:(id*)arg3 username:(id*)arg4 allowCreation:(char)arg5 error:(id*)arg6;
-(char)removeAccessoryKeyForName:(id)arg1 error:(id*)arg2;

@end
