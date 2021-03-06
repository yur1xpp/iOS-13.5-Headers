/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <CoreFoundation/NSArray.h>

@interface CALayerArray : NSArray {

	CALayerArrayIvars* _ivars;

}
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(void)getObjects:(id*)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_CA25*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
-(id)initWithLayers:(id*)arg1 count:(unsigned long long)arg2 retain:(BOOL)arg3 ;
@end

