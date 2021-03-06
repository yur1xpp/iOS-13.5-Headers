/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SilexVideo/SilexVideo-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/SVVideoViewControllerConfiguration.h>

@protocol SVVideoViewControllerConfiguration <NFCopying>
@property (nonatomic,readonly) BOOL preferredMuteState; 
@property (getter=isPagingAllowed,nonatomic,readonly) BOOL pagingAllowed; 
@required
-(BOOL)preferredMuteState;
-(BOOL)isPagingAllowed;

@end


@interface SVVideoViewControllerConfiguration : NSObject <NSCopying, SVVideoViewControllerConfiguration> {

	BOOL _preferredMuteState;
	BOOL _pagingAllowed;

}

@property (nonatomic,readonly) BOOL preferredMuteState;                                //@synthesize preferredMuteState=_preferredMuteState - In the implementation block
@property (getter=isPagingAllowed,nonatomic,readonly) BOOL pagingAllowed;              //@synthesize pagingAllowed=_pagingAllowed - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)preferredMuteState;
-(BOOL)isPagingAllowed;
-(id)initWithPreferredMuteState:(BOOL)arg1 pagingAllowed:(BOOL)arg2 ;
@end

