/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 8, 2020 at 7:59:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /usr/lib/libTelephonyUtilDynamic.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSURLSessionDataDelegate <NSURLSessionTaskDelegate>
@optional
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didBecomeDownloadTask:(id)arg3;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didBecomeStreamTask:(id)arg3;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(/*^block*/id)arg4;

@end

