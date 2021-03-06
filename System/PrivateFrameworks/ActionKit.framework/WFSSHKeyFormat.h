/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:40 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WFSSHKeyFormat <NSObject>
@required
+(id)defaultKeySize;
+(id)localizedDisplayName;
+(id)possibleKeySizes;
+(id)privateKeyType;
+(id)publicKeyType;
+(id)privateKeySpecifier;
+(id)publicKeySpecifier;
+(id)keyPairFromPrivateKey:(id)arg1 comment:(id)arg2 error:(id*)arg3;
+(id)generateKeyPairWithKeySize:(unsigned long long)arg1 comment:(id)arg2;

@end

