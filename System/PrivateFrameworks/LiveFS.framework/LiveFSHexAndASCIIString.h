/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/LiveFS.framework/LiveFS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LiveFS/LiveFS-Structs.h>
#import <Foundation/NSString.h>

@class NSData;

@interface LiveFSHexAndASCIIString : NSString {

	NSData* data;

}
-(id)init;
-(unsigned long long)length;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(id)initWithData:(id)arg1 ;
-(id)data;
@end
