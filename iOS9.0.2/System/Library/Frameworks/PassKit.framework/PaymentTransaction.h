/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:37:07 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <passd/SQLiteEntity.h>

@interface PaymentTransaction : SQLiteEntity
+(void)deleteEntitiesForPass:(id)arg1 inDatabase:(id)arg2 ;
+(id)_propertySettersForPaymentTransaction;
+(void)truncateEntitiesForPass:(id)arg1 withNotificationServiceSource:(char)arg2 inDatabase:(id)arg3 toCount:(int)arg4 ;
+(id)anyInDatabase:(id)arg1 withIdentifier:(id)arg2 ;
+(id)anyInDatabase:(id)arg1 withServiceIdentifier:(id)arg2 forPassWithUniqueIdentifier:(id)arg3 ;
+(id)closestTransactionInDatabase:(id)arg1 fromTransactionDate:(id)arg2 excludingTransactionSources:(unsigned)arg3 forTransactionIdentifier:(id)arg4 passWithUniqueIdentifier:(id)arg5 ;
+(id)closestTransactionInDatabase:(id)arg1 fromTransactionDate:(id)arg2 excludingTransactionSources:(unsigned)arg3 forPassWithUniqueIdentifier:(id)arg4 ;
+(unsigned)numberOfPaymentTransactionsInDatabase:(id)arg1 forPassUniqueIdentifier:(id)arg2 withNotificationServiceSource:(char)arg3 newerThanDate:(id)arg4 ;
+(id)insertPaymentTransaction:(id)arg1 withPaymentPass:(id)arg2 paymentApplication:(id)arg3 inDatabase:(id)arg4 ;
+(id)closestPendingTransactionInDatabase:(id)arg1 fromTransactionDate:(id)arg2 includingTransactionSources:(unsigned)arg3 forMerchantName:(id)arg4 passWithUniqueIdentifier:(id)arg5 ;
+(id)anyInDatabase:(id)arg1 forPassWithUniqueIdentifier:(id)arg2 ;
+(id)paymentTransactionsInDatabase:(id)arg1 forPassUniqueIdentifier:(id)arg2 includingSources:(unsigned)arg3 limit:(int)arg4 ;
+(id)_predicateForPaymentPass:(id)arg1 ;
+(id)_predicateForIdentifier:(id)arg1 ;
+(id)_predicateForPassWithUniqueIdentifier:(id)arg1 ;
+(id)_predicateForServiceIdentifier:(id)arg1 ;
+(id)_predicateForIncludesTransactionSource:(unsigned)arg1 ;
+(id)_predicateForDoesNotIncludeTransactionSource:(unsigned)arg1 ;
+(id)_predicateForTransactionIdentifier:(id)arg1 ;
+(id)_closestTransactionInDatabase:(id)arg1 withTransactionDate:(id)arg2 withinWindow:(double)arg3 passWithUniqueIdentifier:(id)arg4 additionalPredicates:(id)arg5 ;
+(id)_predicateForTransactionStatus:(int)arg1 ;
+(id)_predicateForMerchantName:(id)arg1 ;
+(id)_paymentTransactionsWithQuery:(id)arg1 ;
+(id)_predicateForTransactionDateNewerThanDate:(id)arg1 ;
+(id)_propertySettersForMerchant;
+(id)_predicateForTransactionDate:(id)arg1 withinWindow:(double)arg2 ;
+(id)_predicateForPaymentApplication:(id)arg1 ;
+(id)_predicateForExclusiveTransactionSource:(unsigned)arg1 ;
+(id)_paymentTranactionsInDatabase:(id)arg1 matchingPredicate:(id)arg2 ;
+(id)databaseTable;
+(id)associationPropertyForEntityClass:(Class)arg1 ;
+(id)joinClauseForProperty:(id)arg1 ;
-(void)updateWithMerchant:(id)arg1 ;
-(void)updateWithPaymentTransaction:(id)arg1 ;
-(void)replaceWithPaymentTransaction:(id)arg1 ;
-(id)initWithPaymentTransaction:(id)arg1 paymentPass:(id)arg2 paymentApplication:(id)arg3 inDatabase:(id)arg4 ;
-(id)merchant;
-(id)identifier;
-(id)paymentTransaction;
@end

