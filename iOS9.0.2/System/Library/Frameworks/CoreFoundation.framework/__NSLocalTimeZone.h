/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:25 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSTimeZone.h>

@interface __NSLocalTimeZone : NSTimeZone
+(char)supportsSecureCoding;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(id)abbreviationForDate:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)retain;
-(oneway void)release;
-(unsigned)retainCount;
-(id)description;
-(id)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
-(id)data;
-(id)nextDaylightSavingTimeTransitionAfterDate:(id)arg1 ;
-(int)secondsFromGMTForDate:(id)arg1 ;
-(id)localizedName:(int)arg1 locale:(id)arg2 ;
-(char)isDaylightSavingTimeForDate:(id)arg1 ;
-(double)daylightSavingTimeOffsetForDate:(id)arg1 ;
@end
