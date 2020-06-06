/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <BackBoardServices/BKSHIDEventDiscreteDispatchingPredicate.h>

@class NSSet;

@interface BKSMutableHIDEventDiscreteDispatchingPredicate : BKSHIDEventDiscreteDispatchingPredicate

@property (nonatomic,copy) NSSet * senderDescriptors; 
@property (nonatomic,copy) NSSet * descriptors; 
@property (nonatomic,copy) NSSet * displays; 
+(id)new;
+(id)defaultSystemPredicate;
+(id)defaultFocusPredicate;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDescriptors:(NSSet *)arg1 ;
-(void)setDisplays:(NSSet *)arg1 ;
-(void)setSenderDescriptors:(NSSet *)arg1 ;
@end
