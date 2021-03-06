/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:44 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSSPropertyValueValidator
@required
+(BOOL)validateIntValue:(int*)arg1 forProperty:(int)arg2;
+(BOOL)validateIntValue:(int*)arg1 forProperty:(int)arg2 min:(int)arg3 max:(int)arg4;
+(BOOL)validateIntValueAsBool:(int*)arg1 forProperty:(int)arg2;
+(BOOL)validateFloatValue:(float*)arg1 forProperty:(int)arg2;
+(BOOL)validateDoubleValue:(double*)arg1 forProperty:(int)arg2;
+(BOOL)validateObjectValue:(id*)arg1 withClass:(Class)arg2 forProperty:(int)arg3;
+(id)propertiesAllowingNSNull;
-(BOOL)validateIntValue:(int*)arg1 forProperty:(int)arg2;
-(BOOL)validateIntValue:(int*)arg1 forProperty:(int)arg2 min:(int)arg3 max:(int)arg4;
-(BOOL)validateIntValueAsBool:(int*)arg1 forProperty:(int)arg2;
-(BOOL)validateFloatValue:(float*)arg1 forProperty:(int)arg2;
-(BOOL)validateDoubleValue:(double*)arg1 forProperty:(int)arg2;
-(BOOL)validateObjectValue:(id*)arg1 withClass:(Class)arg2 forProperty:(int)arg3;

@end

