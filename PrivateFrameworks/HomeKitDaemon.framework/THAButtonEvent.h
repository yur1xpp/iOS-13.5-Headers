/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:44 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class THAButton;

@interface THAButtonEvent : NSObject {

	THAButton* _button;
	unsigned long long _state;
	double _timestamp;

}

@property (nonatomic,retain) THAButton * button;                    //@synthesize button=_button - In the implementation block
@property (assign,nonatomic) unsigned long long state;              //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) double timestamp;                      //@synthesize timestamp=_timestamp - In the implementation block
-(unsigned long long)state;
-(double)timestamp;
-(void)setState:(unsigned long long)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(id)serialize;
-(THAButton *)button;
-(void)setButton:(THAButton *)arg1 ;
@end
