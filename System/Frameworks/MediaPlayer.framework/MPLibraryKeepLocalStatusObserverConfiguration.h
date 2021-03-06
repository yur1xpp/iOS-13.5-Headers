/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MPModelObject;

@interface MPLibraryKeepLocalStatusObserverConfiguration : NSObject {

	long long _enableState;
	MPModelObject* _identifyingModelObject;

}

@property (assign,nonatomic) long long enableState;                               //@synthesize enableState=_enableState - In the implementation block
@property (nonatomic,retain) MPModelObject * identifyingModelObject;              //@synthesize identifyingModelObject=_identifyingModelObject - In the implementation block
-(long long)enableState;
-(void)setEnableState:(long long)arg1 ;
-(MPModelObject *)identifyingModelObject;
-(void)setIdentifyingModelObject:(MPModelObject *)arg1 ;
@end

