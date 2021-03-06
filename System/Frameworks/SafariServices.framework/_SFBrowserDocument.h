/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class _SFWebView, _SFReloadOptionsController, NSURL;


@protocol _SFBrowserDocument <NSObject>
@property (nonatomic,readonly) _SFWebView * webView; 
@property (nonatomic,readonly) _SFWebView * activeWebView; 
@property (nonatomic,readonly) _SFReloadOptionsController * reloadOptionsController; 
@property (nonatomic,readonly) id<SFReaderContext> readerContext; 
@property (nonatomic,readonly) NSURL * URLForPerSitePreferences; 
@property (nonatomic,readonly) BOOL wasLoadedWithContentBlockersEnabled; 
@property (nonatomic,readonly) BOOL canHideToolbar; 
@required
-(_SFWebView *)webView;
-(id<SFReaderContext>)readerContext;
-(_SFReloadOptionsController *)reloadOptionsController;
-(BOOL)canHideToolbar;
-(BOOL)wasLoadedWithContentBlockersEnabled;
-(void)reloadEnablingContentBlockers:(BOOL)arg1;
-(void)perSiteSettingsUIPresentSettings;
-(NSURL *)URLForPerSitePreferences;
-(_SFWebView *)activeWebView;

@end

