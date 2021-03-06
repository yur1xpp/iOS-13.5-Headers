/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:29 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_DKProtobufConverting.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, _DKSource, NSDate, NSString;

@interface _DKObject : NSObject <_DKProtobufConverting, NSSecureCoding> {

	NSUUID* _UUID;
	_DKSource* _source;
	NSDate* _creationDate;
	NSDate* _localCreationDate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) NSUUID * UUID;                                   //@synthesize UUID=_UUID - In the implementation block
@property (retain) _DKSource * source;                              //@synthesize source=_source - In the implementation block
@property (retain) NSDate * creationDate;                           //@synthesize creationDate=_creationDate - In the implementation block
@property (retain) NSDate * localCreationDate;                      //@synthesize localCreationDate=_localCreationDate - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)fromPBCodable:(id)arg1 ;
+(id)entityName;
+(id)objectFromManagedObject:(id)arg1 readMetadata:(BOOL)arg2 excludedMetadataKeys:(id)arg3 cache:(id)arg4 ;
+(id)fetchObjectWithUUID:(id)arg1 context:(id)arg2 ;
-(double)doubleValue;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(BOOL)boolValue;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)stringValue;
-(long long)integerValue;
-(void)setSource:(_DKSource *)arg1 ;
-(_DKSource *)source;
-(NSUUID *)UUID;
-(void)setUUID:(NSUUID *)arg1 ;
-(NSDate *)creationDate;
-(id)toPBCodable;
-(long long)typeCode;
-(void)setCreationDate:(NSDate *)arg1 ;
-(id)entityName;
-(NSDate *)localCreationDate;
-(void)setLocalCreationDate:(NSDate *)arg1 ;
-(BOOL)copyToManagedObject:(id)arg1 ;
-(BOOL)copyBaseObjectInfoFromManagedObject:(id)arg1 cache:(id)arg2 ;
@end

