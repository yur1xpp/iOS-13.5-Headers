/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 8, 2020 at 8:03:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RTPersistenceMirroringRequestDelegate <NSObject>
@optional
-(void)mirroringRequestDidBegin:(id)arg1;

@required
-(BOOL)mirroringRequest:(id)arg1 didFailWithError:(id)arg2;
-(void)mirroringRequestDidSucceed:(id)arg1;

@end

