/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, _MRDeviceInfoMessageProtobuf, NSError;

@interface MRExternalDeviceTransport : NSObject {

	long long _connectionType;
	BOOL _requiresCustomPairing;
	NSString* _uid;

}

@property (nonatomic,readonly) _MRDeviceInfoMessageProtobuf * deviceInfo; 
@property (nonatomic,readonly) NSString * uid;                                         //@synthesize uid=_uid - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * hostname; 
@property (nonatomic,readonly) long long port; 
@property (nonatomic,readonly) BOOL requiresCustomPairing;                             //@synthesize requiresCustomPairing=_requiresCustomPairing - In the implementation block
@property (assign,nonatomic) BOOL shouldUseSystemAuthenticationPrompt; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,readonly) long long connectionType;                               //@synthesize connectionType=_connectionType - In the implementation block
-(NSString *)name;
-(long long)port;
-(NSError *)error;
-(void)reset;
-(NSString *)uid;
-(long long)connectionType;
-(NSString *)hostname;
-(BOOL)getInputStream:(id*)arg1 outputStream:(id*)arg2 ;
-(_MRDeviceInfoMessageProtobuf *)deviceInfo;
-(BOOL)requiresCustomPairing;
-(void)setShouldUseSystemAuthenticationPrompt:(BOOL)arg1 ;
-(BOOL)shouldUseSystemAuthenticationPrompt;
@end
