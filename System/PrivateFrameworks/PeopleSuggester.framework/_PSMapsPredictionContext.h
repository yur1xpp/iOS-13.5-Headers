/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSString;

@interface _PSMapsPredictionContext : NSObject <NSSecureCoding> {

	NSDate* _suggestionDate;
	NSString* _bundleID;
	NSString* _navigationStartLocationId;
	NSString* _navigationEndLocationId;

}

@property (nonatomic,copy) NSDate * suggestionDate;                           //@synthesize suggestionDate=_suggestionDate - In the implementation block
@property (nonatomic,copy) NSString * bundleID;                               //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) NSString * navigationStartLocationId;              //@synthesize navigationStartLocationId=_navigationStartLocationId - In the implementation block
@property (nonatomic,copy) NSString * navigationEndLocationId;                //@synthesize navigationEndLocationId=_navigationEndLocationId - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(NSDate *)suggestionDate;
-(void)setSuggestionDate:(NSDate *)arg1 ;
-(NSString *)navigationStartLocationId;
-(NSString *)navigationEndLocationId;
-(void)setNavigationStartLocationId:(NSString *)arg1 ;
-(void)setNavigationEndLocationId:(NSString *)arg1 ;
@end
