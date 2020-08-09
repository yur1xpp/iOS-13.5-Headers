/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:29 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class AAUIServerHookResponse;


@protocol AAUIServerHook <NSObject>
@property (nonatomic,retain) AAUIServerHookResponse * serverHookResponse; 
@property (assign,nonatomic,__weak) id<AAUIServerHookDelegate> delegate; 
@optional
-(void)harvestDataFromResponse:(id)arg1;
-(AAUIServerHookResponse *)serverHookResponse;
-(void)setServerHookResponse:(id)arg1;

@required
-(id<AAUIServerHookDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(BOOL)shouldMatchElement:(id)arg1;
-(BOOL)shouldMatchModel:(id)arg1;
-(void)processElement:(id)arg1 attributes:(id)arg2 objectModel:(id)arg3 completion:(/*^block*/id)arg4;
-(void)processObjectModel:(id)arg1 completion:(/*^block*/id)arg2;

@end
