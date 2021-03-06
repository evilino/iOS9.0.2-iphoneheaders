/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:25 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSOutputStream.h>

@interface __NSCFOutputStream : NSOutputStream
+(id)allocWithZone:(NSZone*)arg1 ;
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(id)propertyForKey:(id)arg1 ;
-(char)setProperty:(id)arg1 forKey:(id)arg2 ;
-(char)_setCFClientFlags:(unsigned long)arg1 callback:(/*function pointer*/void*)arg2 context:(SCD_Struct_NS11*)arg3 ;
-(void)_scheduleInCFRunLoop:(CFRunLoopRef)arg1 forMode:(CFStringRef)arg2 ;
-(void)_unscheduleFromCFRunLoop:(CFRunLoopRef)arg1 forMode:(CFStringRef)arg2 ;
-(id)initWithURL:(id)arg1 append:(char)arg2 ;
-(id)initToMemory;
-(id)initToBuffer:(char*)arg1 capacity:(unsigned)arg2 ;
-(id)initToFileAtPath:(id)arg1 append:(char)arg2 ;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)setDelegate:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)retain;
-(oneway void)release;
-(unsigned)retainCount;
-(unsigned)hash;
-(id)delegate;
-(char)_isDeallocating;
-(void)close;
-(char)_tryRetain;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)open;
-(void)finalize;
-(unsigned)streamStatus;
-(id)streamError;
-(char)hasSpaceAvailable;
-(int)write:(const char*)arg1 maxLength:(unsigned)arg2 ;
@end

