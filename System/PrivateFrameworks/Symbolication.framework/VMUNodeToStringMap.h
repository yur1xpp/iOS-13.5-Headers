/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:26 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray;

@interface VMUNodeToStringMap : NSObject <NSSecureCoding> {

	NSMutableArray* _strings;
	void* _stringToIndexMapVoidPtr;
	void* _nodeToStringIndexMapVoidPtr;

}
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(void)_claimUnarchivingOfClass:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(unsigned)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)uniquedStringCount;
-(unsigned)_indexForString:(id)arg1 ;
-(void)setString:(id)arg1 forNode:(unsigned)arg2 ;
-(id)stringForNode:(unsigned)arg1 ;
@end

