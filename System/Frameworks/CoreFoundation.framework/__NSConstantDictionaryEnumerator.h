/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class NSConstantDictionary;

@interface __NSConstantDictionaryEnumerator : NSEnumerator {

	NSConstantDictionary* _underlyingDictionary;
	unsigned long long _currentIndex;
	BOOL _isForKeys;

}
-(id)nextObject;
-(id)initWithConstantDictionary:(id)arg1 enumerateKeys:(BOOL)arg2 ;
@end
