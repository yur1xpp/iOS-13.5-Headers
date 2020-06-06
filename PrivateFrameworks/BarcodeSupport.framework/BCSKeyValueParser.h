/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <BarcodeSupport/BarcodeSupport-Structs.h>
@class NSString, NSMutableDictionary, NSDictionary;

@interface BCSKeyValueParser : NSObject {

	NSString* _string;
	unsigned long long _currentIndex;
	unsigned long long _stringLength;
	NSMutableDictionary* _keyValuePairs;

}

@property (nonatomic,copy,readonly) NSDictionary * keyValuePairs; 
-(NSDictionary *)keyValuePairs;
-(id)initWithString:(id)arg1 startIndex:(unsigned long long)arg2 ;
-(BOOL)_parseNextKeyValuePair;
-(unsigned long long)_indexOfDelimiter:(id)arg1 range:(NSRange)arg2 ;
-(unsigned long long)_numberOfPreviousBackSlashesFromIndex:(unsigned long long)arg1 withinRange:(NSRange)arg2 ;
@end
