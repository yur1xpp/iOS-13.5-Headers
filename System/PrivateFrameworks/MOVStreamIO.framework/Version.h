/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface Version : NSObject {

	unsigned _major;
	unsigned _minor;
	unsigned _bugfix;
	NSString* _modifier;

}

@property (readonly) unsigned major;                   //@synthesize major=_major - In the implementation block
@property (readonly) unsigned minor;                   //@synthesize minor=_minor - In the implementation block
@property (readonly) unsigned bugfix;                  //@synthesize bugfix=_bugfix - In the implementation block
@property (readonly) NSString * modifier;              //@synthesize modifier=_modifier - In the implementation block
-(id)init;
-(id)description;
-(NSString *)modifier;
-(unsigned)major;
-(unsigned)minor;
-(BOOL)isEqualToVersion:(id)arg1 ;
-(id)initWithVersionString:(id)arg1 ;
-(long long)compareToVersion:(id)arg1 ;
-(BOOL)isAllDigitsInString:(id)arg1 ;
-(unsigned)bugfix;
-(id)getVersionAsString;
@end

