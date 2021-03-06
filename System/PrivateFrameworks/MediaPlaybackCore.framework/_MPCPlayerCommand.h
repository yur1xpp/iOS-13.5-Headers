/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MPCPlayerResponse, MPCPlayerPath;

@interface _MPCPlayerCommand : NSObject {

	MPCPlayerResponse* _response;
	MPCPlayerPath* _playerPath;

}

@property (nonatomic,readonly) MPCPlayerResponse * response;                 //@synthesize response=_response - In the implementation block
@property (nonatomic,copy,readonly) MPCPlayerPath * playerPath;              //@synthesize playerPath=_playerPath - In the implementation block
-(MPCPlayerResponse *)response;
-(id)initWithResponse:(id)arg1 ;
-(MPCPlayerPath *)playerPath;
-(id)initWithPlayerPath:(id)arg1 ;
@end

