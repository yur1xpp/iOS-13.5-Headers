/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASSearchTask.h>

@class NSString;

@interface ASMailboxEnhancedSearchTask : ASSearchTask {

	NSString* _searchId;

}
-(void)finishWithError:(id)arg1 ;
-(id)initWithQuery:(id)arg1 ;
-(void)performTask;
-(id)requestBody;
-(int)commandCode;
-(BOOL)getTopLevelToken:(char*)arg1 outStatusCodePage:(char*)arg2 outStatusToken:(char*)arg3 ;
-(BOOL)processContext:(id)arg1 ;
-(BOOL)requiresEASVersionInformaton;
-(void)_appendSearchQuery:(id)arg1 ;
-(void)_appendSearchOptions:(id)arg1 ;
-(id)replacementObjectForEmailItem:(id)arg1 ;
@end

