/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreFoundation/NSEnumerator.h>

@interface _PFResultObjectKeyEnumerator : NSEnumerator {

	id _target;
	const id* _keys;
	unsigned long long* _referenceItems;
	NSRange _range;
	unsigned long long _index;

}
-(void)dealloc;
-(void)_invalidate;
-(id)nextObject;
-(id)initWithArray:(const id*)arg1 forTarget:(id)arg2 withReferenceValues:(unsigned long long*)arg3 andRange:(NSRange)arg4 ;
@end
