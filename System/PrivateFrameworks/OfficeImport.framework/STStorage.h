/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/STSStgObject.h>

@interface STStorage : STSStgObject {

	StorageRef m_pCStorage;

}
-(id)init;
-(void)dealloc;
-(void)close;
-(void)setClass:(SCD_Struct_ST85)arg1 ;
-(id)initWithCStorage:(StorageRef)arg1 ;
-(id)openStream:(id)arg1 withMode:(int)arg2 ;
-(id)openStorage:(id)arg1 withMode:(int)arg2 ;
-(id)getInfo;
-(id)getChildrenInfo;
-(int)getChildType:(id)arg1 ;
@end

