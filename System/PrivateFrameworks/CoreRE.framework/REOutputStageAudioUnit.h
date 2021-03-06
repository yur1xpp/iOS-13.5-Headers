/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:29 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreRE.framework/CoreRE
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRE/CoreRE-Structs.h>
#import <AudioToolboxCore/AUAudioUnit.h>

@class AVAudioPCMBuffer, AUAudioUnitBus, AUAudioUnitBusArray;

@interface REOutputStageAudioUnit : AUAudioUnit {

	AVAudioPCMBuffer* _inputBuffer;
	AUAudioUnitBus* _inputBus;
	AUAudioUnitBusArray* _inputBusArray;
	AUAudioUnitBus* _outputBus;
	AUAudioUnitBusArray* _outputBusArray;
	atomic<int> _clipCount;

}
-(void)deallocateRenderResources;
-(id)outputBusses;
-(id)inputBusses;
-(BOOL)allocateRenderResourcesAndReturnError:(id*)arg1 ;
-(/*^block*/id)internalRenderBlock;
-(id)channelCapabilities;
-(id)initWithComponentDescription:(AudioComponentDescription)arg1 options:(unsigned)arg2 error:(id*)arg3 ;
@end

