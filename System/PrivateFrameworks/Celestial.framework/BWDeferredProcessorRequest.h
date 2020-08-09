/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BWDeferredProcessorControllerInput, FigWeakReference;

@interface BWDeferredProcessorRequest : NSObject {

	BWDeferredProcessorControllerInput* _input;
	FigWeakReference* _delegateStorage;
	int _err;

}

@property (assign,nonatomic) int err;                                                           //@synthesize err=_err - In the implementation block
@property (nonatomic,readonly) BWDeferredProcessorControllerInput * input;                      //@synthesize input=_input - In the implementation block
@property (nonatomic,readonly) id<BWDeferredProcessorControllerDelegate> delegate; 
-(void)dealloc;
-(id)description;
-(id<BWDeferredProcessorControllerDelegate>)delegate;
-(BWDeferredProcessorControllerInput *)input;
-(int)err;
-(void)setErr:(int)arg1 ;
-(id)initWithInput:(id)arg1 delegate:(id)arg2 ;
@end
