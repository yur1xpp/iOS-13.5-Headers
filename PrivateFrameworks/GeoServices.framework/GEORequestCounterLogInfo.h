/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface GEORequestCounterLogInfo : NSObject <NSSecureCoding> {

	NSDictionary* _dict;

}

@property (nonatomic,readonly) double oldestTimestamp; 
@property (nonatomic,readonly) unsigned char requestType; 
+(BOOL)supportsSecureCoding;
+(id)counterLogInfoWithDictionary:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned char)requestType;
-(id)_formattedString;
-(unsigned long long)xmitBytes;
-(unsigned long long)recvBytes;
-(id)_formattedCSVString;
-(double)oldestTimestamp;
@end
