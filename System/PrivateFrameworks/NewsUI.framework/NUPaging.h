/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:51 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol NUPaging <NSObject>
@property (nonatomic,readonly) id<NUPage> firstPage; 
@property (nonatomic,readonly) id<NUPage> lastPage; 
@property (nonatomic,readonly) NSArray * allPages; 
@required
-(id<NUPage>)firstPage;
-(id<NUPage>)lastPage;
-(NSArray *)allPages;
-(id)pageForIdentifier:(id)arg1;
-(id)pageBeforeForIdentifier:(id)arg1;
-(id)pageAfterIdentifier:(id)arg1;
-(void)forEachPage:(/*^block*/id)arg1;

@end

