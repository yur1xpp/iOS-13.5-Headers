/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFAudio/AVFAudio-Structs.h>
@class NSArray;

@interface AVAudioUnitComponentManager : NSObject {

	void* _impl;

}

@property (nonatomic,readonly) NSArray * tagNames; 
@property (nonatomic,readonly) NSArray * standardLocalizedTagNames; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sharedAudioUnitComponentManager;
+(void)privateAllocInitSingleton;
-(id)init;
-(unsigned long long)retainCount;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)tagNames;
-(void)localeChanged:(id)arg1 ;
-(void)registrationsChanged:(id)arg1 ;
-(NSArray *)standardLocalizedTagNames;
-(id)componentsMatchingPredicate:(id)arg1 ;
-(id)componentsPassingTest:(/*^block*/id)arg1 ;
-(id)componentsMatchingDescription:(AudioComponentDescription)arg1 ;
@end

