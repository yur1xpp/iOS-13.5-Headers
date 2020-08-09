/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOLogMsgStateApplicationIdentifier, GEOLogMsgStateCarPlay, GEOLogMsgStateDetailLookAroundLog, GEOLogMsgStateDeviceBase, GEOLogMsgStateDeviceConnection, GEOLogMsgStateDeviceIdentifier, GEOLogMsgStateDeviceLocale, GEOLogMsgStateDeviceSettings, GEOLogMsgStateExperiments, GEOLogMsgStateExtension, GEOLogMsgStateLookAroundView, GEOLogMsgStateMapLaunch, GEOLogMsgStateMapRestore, GEOLogMsgStateMapSettings, GEOLogMsgStateMapUIShown, GEOLogMsgStateMapUI, GEOLogMsgStateMapViewLocation, GEOLogMsgStateMapView, GEOLogMsgStateMapsServer, GEOLogMsgStateMuninResource, GEOLogMsgStateNavigation, GEOLogMsgStatePairedDevice, GEOLogMsgStatePlaceCard, GEOLogMsgStatePlaceRequest, GEOLogMsgStateRealtimeTrafficProbe, GEOLogMsgStateRoute, NSString, GEOLogMsgStateSuggestions, GEOLogMsgStateSummaryLookAroundLog, GEOLogMsgStateTileSet, GEOLogMsgStateTransit, GEOLogMsgStateUserSession;

@interface GEOLogMsgState : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEOLogMsgStateApplicationIdentifier* _applicationIdentifier;
	GEOLogMsgStateCarPlay* _carPlay;
	GEOLogMsgStateDetailLookAroundLog* _detailLookAroundLog;
	GEOLogMsgStateDeviceBase* _deviceBase;
	GEOLogMsgStateDeviceConnection* _deviceConnection;
	GEOLogMsgStateDeviceIdentifier* _deviceIdentifier;
	GEOLogMsgStateDeviceLocale* _deviceLocale;
	GEOLogMsgStateDeviceSettings* _deviceSettings;
	GEOLogMsgStateExperiments* _experiments;
	GEOLogMsgStateExtension* _extension;
	GEOLogMsgStateLookAroundView* _lookAroundView;
	GEOLogMsgStateMapLaunch* _mapLaunch;
	GEOLogMsgStateMapRestore* _mapRestore;
	GEOLogMsgStateMapSettings* _mapSettings;
	GEOLogMsgStateMapUIShown* _mapUiShown;
	GEOLogMsgStateMapUI* _mapUi;
	GEOLogMsgStateMapViewLocation* _mapViewLocation;
	GEOLogMsgStateMapView* _mapView;
	GEOLogMsgStateMapsServer* _mapsServer;
	GEOLogMsgStateMuninResource* _muninResource;
	GEOLogMsgStateNavigation* _navigation;
	GEOLogMsgStatePairedDevice* _pairedDevice;
	GEOLogMsgStatePlaceCard* _placeCard;
	GEOLogMsgStatePlaceRequest* _placeRequest;
	GEOLogMsgStateRealtimeTrafficProbe* _realtimeTrafficProbe;
	GEOLogMsgStateRoute* _route;
	NSString* _stateOrigin;
	GEOLogMsgStateSuggestions* _suggestions;
	GEOLogMsgStateSummaryLookAroundLog* _summaryLookAroundLog;
	GEOLogMsgStateTileSet* _tileSet;
	GEOLogMsgStateTransit* _transit;
	GEOLogMsgStateUserSession* _userSession;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _stateType;
	struct {
		unsigned has_stateType : 1;
		unsigned read_applicationIdentifier : 1;
		unsigned read_carPlay : 1;
		unsigned read_detailLookAroundLog : 1;
		unsigned read_deviceBase : 1;
		unsigned read_deviceConnection : 1;
		unsigned read_deviceIdentifier : 1;
		unsigned read_deviceLocale : 1;
		unsigned read_deviceSettings : 1;
		unsigned read_experiments : 1;
		unsigned read_extension : 1;
		unsigned read_lookAroundView : 1;
		unsigned read_mapLaunch : 1;
		unsigned read_mapRestore : 1;
		unsigned read_mapSettings : 1;
		unsigned read_mapUiShown : 1;
		unsigned read_mapUi : 1;
		unsigned read_mapViewLocation : 1;
		unsigned read_mapView : 1;
		unsigned read_mapsServer : 1;
		unsigned read_muninResource : 1;
		unsigned read_navigation : 1;
		unsigned read_pairedDevice : 1;
		unsigned read_placeCard : 1;
		unsigned read_placeRequest : 1;
		unsigned read_realtimeTrafficProbe : 1;
		unsigned read_route : 1;
		unsigned read_stateOrigin : 1;
		unsigned read_suggestions : 1;
		unsigned read_summaryLookAroundLog : 1;
		unsigned read_tileSet : 1;
		unsigned read_transit : 1;
		unsigned read_userSession : 1;
		unsigned wrote_applicationIdentifier : 1;
		unsigned wrote_carPlay : 1;
		unsigned wrote_detailLookAroundLog : 1;
		unsigned wrote_deviceBase : 1;
		unsigned wrote_deviceConnection : 1;
		unsigned wrote_deviceIdentifier : 1;
		unsigned wrote_deviceLocale : 1;
		unsigned wrote_deviceSettings : 1;
		unsigned wrote_experiments : 1;
		unsigned wrote_extension : 1;
		unsigned wrote_lookAroundView : 1;
		unsigned wrote_mapLaunch : 1;
		unsigned wrote_mapRestore : 1;
		unsigned wrote_mapSettings : 1;
		unsigned wrote_mapUiShown : 1;
		unsigned wrote_mapUi : 1;
		unsigned wrote_mapViewLocation : 1;
		unsigned wrote_mapView : 1;
		unsigned wrote_mapsServer : 1;
		unsigned wrote_muninResource : 1;
		unsigned wrote_navigation : 1;
		unsigned wrote_pairedDevice : 1;
		unsigned wrote_placeCard : 1;
		unsigned wrote_placeRequest : 1;
		unsigned wrote_realtimeTrafficProbe : 1;
		unsigned wrote_route : 1;
		unsigned wrote_stateOrigin : 1;
		unsigned wrote_suggestions : 1;
		unsigned wrote_summaryLookAroundLog : 1;
		unsigned wrote_tileSet : 1;
		unsigned wrote_transit : 1;
		unsigned wrote_userSession : 1;
		unsigned wrote_stateType : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasStateOrigin; 
@property (nonatomic,retain) NSString * stateOrigin; 
@property (assign,nonatomic) BOOL hasStateType; 
@property (assign,nonatomic) int stateType; 
@property (nonatomic,readonly) BOOL hasDeviceIdentifier; 
@property (nonatomic,retain) GEOLogMsgStateDeviceIdentifier * deviceIdentifier; 
@property (nonatomic,readonly) BOOL hasApplicationIdentifier; 
@property (nonatomic,retain) GEOLogMsgStateApplicationIdentifier * applicationIdentifier; 
@property (nonatomic,readonly) BOOL hasDeviceBase; 
@property (nonatomic,retain) GEOLogMsgStateDeviceBase * deviceBase; 
@property (nonatomic,readonly) BOOL hasDeviceLocale; 
@property (nonatomic,retain) GEOLogMsgStateDeviceLocale * deviceLocale; 
@property (nonatomic,readonly) BOOL hasDeviceConnection; 
@property (nonatomic,retain) GEOLogMsgStateDeviceConnection * deviceConnection; 
@property (nonatomic,readonly) BOOL hasCarPlay; 
@property (nonatomic,retain) GEOLogMsgStateCarPlay * carPlay; 
@property (nonatomic,readonly) BOOL hasPairedDevice; 
@property (nonatomic,retain) GEOLogMsgStatePairedDevice * pairedDevice; 
@property (nonatomic,readonly) BOOL hasExtension; 
@property (nonatomic,retain) GEOLogMsgStateExtension * extension; 
@property (nonatomic,readonly) BOOL hasDeviceSettings; 
@property (nonatomic,retain) GEOLogMsgStateDeviceSettings * deviceSettings; 
@property (nonatomic,readonly) BOOL hasMapView; 
@property (nonatomic,retain) GEOLogMsgStateMapView * mapView; 
@property (nonatomic,readonly) BOOL hasMapViewLocation; 
@property (nonatomic,retain) GEOLogMsgStateMapViewLocation * mapViewLocation; 
@property (nonatomic,readonly) BOOL hasTransit; 
@property (nonatomic,retain) GEOLogMsgStateTransit * transit; 
@property (nonatomic,readonly) BOOL hasMapSettings; 
@property (nonatomic,retain) GEOLogMsgStateMapSettings * mapSettings; 
@property (nonatomic,readonly) BOOL hasMapUi; 
@property (nonatomic,retain) GEOLogMsgStateMapUI * mapUi; 
@property (nonatomic,readonly) BOOL hasMapUiShown; 
@property (nonatomic,retain) GEOLogMsgStateMapUIShown * mapUiShown; 
@property (nonatomic,readonly) BOOL hasUserSession; 
@property (nonatomic,retain) GEOLogMsgStateUserSession * userSession; 
@property (nonatomic,readonly) BOOL hasExperiments; 
@property (nonatomic,retain) GEOLogMsgStateExperiments * experiments; 
@property (nonatomic,readonly) BOOL hasPlaceCard; 
@property (nonatomic,retain) GEOLogMsgStatePlaceCard * placeCard; 
@property (nonatomic,readonly) BOOL hasRoute; 
@property (nonatomic,retain) GEOLogMsgStateRoute * route; 
@property (nonatomic,readonly) BOOL hasMapsServer; 
@property (nonatomic,retain) GEOLogMsgStateMapsServer * mapsServer; 
@property (nonatomic,readonly) BOOL hasTileSet; 
@property (nonatomic,retain) GEOLogMsgStateTileSet * tileSet; 
@property (nonatomic,readonly) BOOL hasPlaceRequest; 
@property (nonatomic,retain) GEOLogMsgStatePlaceRequest * placeRequest; 
@property (nonatomic,readonly) BOOL hasNavigation; 
@property (nonatomic,retain) GEOLogMsgStateNavigation * navigation; 
@property (nonatomic,readonly) BOOL hasMapRestore; 
@property (nonatomic,retain) GEOLogMsgStateMapRestore * mapRestore; 
@property (nonatomic,readonly) BOOL hasSuggestions; 
@property (nonatomic,retain) GEOLogMsgStateSuggestions * suggestions; 
@property (nonatomic,readonly) BOOL hasRealtimeTrafficProbe; 
@property (nonatomic,retain) GEOLogMsgStateRealtimeTrafficProbe * realtimeTrafficProbe; 
@property (nonatomic,readonly) BOOL hasSummaryLookAroundLog; 
@property (nonatomic,retain) GEOLogMsgStateSummaryLookAroundLog * summaryLookAroundLog; 
@property (nonatomic,readonly) BOOL hasDetailLookAroundLog; 
@property (nonatomic,retain) GEOLogMsgStateDetailLookAroundLog * detailLookAroundLog; 
@property (nonatomic,readonly) BOOL hasLookAroundView; 
@property (nonatomic,retain) GEOLogMsgStateLookAroundView * lookAroundView; 
@property (nonatomic,readonly) BOOL hasMuninResource; 
@property (nonatomic,retain) GEOLogMsgStateMuninResource * muninResource; 
@property (nonatomic,readonly) BOOL hasMapLaunch; 
@property (nonatomic,retain) GEOLogMsgStateMapLaunch * mapLaunch; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(GEOLogMsgStateApplicationIdentifier *)applicationIdentifier;
-(void)setApplicationIdentifier:(GEOLogMsgStateApplicationIdentifier *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(GEOLogMsgStateDeviceIdentifier *)deviceIdentifier;
-(void)setDeviceIdentifier:(GEOLogMsgStateDeviceIdentifier *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(GEOLogMsgStateSuggestions *)suggestions;
-(void)setSuggestions:(GEOLogMsgStateSuggestions *)arg1 ;
-(void)setExtension:(GEOLogMsgStateExtension *)arg1 ;
-(GEOLogMsgStateExtension *)extension;
-(BOOL)hasExtension;
-(void)readAll:(BOOL)arg1 ;
-(void)setRoute:(GEOLogMsgStateRoute *)arg1 ;
-(GEOLogMsgStateRoute *)route;
-(void)_readPlaceRequest;
-(GEOLogMsgStatePlaceRequest *)placeRequest;
-(void)setPlaceRequest:(GEOLogMsgStatePlaceRequest *)arg1 ;
-(BOOL)hasPlaceRequest;
-(GEOLogMsgStateTransit *)transit;
-(int)stateType;
-(void)setStateType:(int)arg1 ;
-(void)setHasStateType:(BOOL)arg1 ;
-(BOOL)hasStateType;
-(id)stateTypeAsString:(int)arg1 ;
-(int)StringAsStateType:(id)arg1 ;
-(GEOLogMsgStateDeviceConnection *)deviceConnection;
-(void)setDeviceConnection:(GEOLogMsgStateDeviceConnection *)arg1 ;
-(BOOL)hasDeviceConnection;
-(void)setDeviceLocale:(GEOLogMsgStateDeviceLocale *)arg1 ;
-(GEOLogMsgStateDeviceLocale *)deviceLocale;
-(void)setDeviceSettings:(GEOLogMsgStateDeviceSettings *)arg1 ;
-(GEOLogMsgStateDeviceSettings *)deviceSettings;
-(void)setCarPlay:(GEOLogMsgStateCarPlay *)arg1 ;
-(GEOLogMsgStateCarPlay *)carPlay;
-(void)setPairedDevice:(GEOLogMsgStatePairedDevice *)arg1 ;
-(GEOLogMsgStatePairedDevice *)pairedDevice;
-(void)setMapView:(GEOLogMsgStateMapView *)arg1 ;
-(GEOLogMsgStateMapView *)mapView;
-(void)setMapViewLocation:(GEOLogMsgStateMapViewLocation *)arg1 ;
-(GEOLogMsgStateMapViewLocation *)mapViewLocation;
-(void)setMapSettings:(GEOLogMsgStateMapSettings *)arg1 ;
-(GEOLogMsgStateMapSettings *)mapSettings;
-(void)setMapUi:(GEOLogMsgStateMapUI *)arg1 ;
-(GEOLogMsgStateMapUI *)mapUi;
-(void)setMapUiShown:(GEOLogMsgStateMapUIShown *)arg1 ;
-(GEOLogMsgStateMapUIShown *)mapUiShown;
-(void)setExperiments:(GEOLogMsgStateExperiments *)arg1 ;
-(GEOLogMsgStateExperiments *)experiments;
-(void)setPlaceCard:(GEOLogMsgStatePlaceCard *)arg1 ;
-(GEOLogMsgStatePlaceCard *)placeCard;
-(void)setMapsServer:(GEOLogMsgStateMapsServer *)arg1 ;
-(GEOLogMsgStateMapsServer *)mapsServer;
-(void)setTileSet:(GEOLogMsgStateTileSet *)arg1 ;
-(void)setSummaryLookAroundLog:(GEOLogMsgStateSummaryLookAroundLog *)arg1 ;
-(GEOLogMsgStateSummaryLookAroundLog *)summaryLookAroundLog;
-(void)setLookAroundView:(GEOLogMsgStateLookAroundView *)arg1 ;
-(GEOLogMsgStateLookAroundView *)lookAroundView;
-(void)setMuninResource:(GEOLogMsgStateMuninResource *)arg1 ;
-(void)setMapRestore:(GEOLogMsgStateMapRestore *)arg1 ;
-(GEOLogMsgStateMapRestore *)mapRestore;
-(void)setMapLaunch:(GEOLogMsgStateMapLaunch *)arg1 ;
-(GEOLogMsgStateMapLaunch *)mapLaunch;
-(GEOLogMsgStateTileSet *)tileSet;
-(void)setUserSession:(GEOLogMsgStateUserSession *)arg1 ;
-(GEOLogMsgStateUserSession *)userSession;
-(GEOLogMsgStateMuninResource *)muninResource;
-(void)_readStateOrigin;
-(void)_readDeviceIdentifier;
-(void)_readApplicationIdentifier;
-(void)_readDeviceBase;
-(void)_readDeviceLocale;
-(void)_readDeviceConnection;
-(void)_readCarPlay;
-(void)_readPairedDevice;
-(void)_readExtension;
-(void)_readDeviceSettings;
-(void)_readMapView;
-(void)_readMapViewLocation;
-(void)_readTransit;
-(void)_readMapSettings;
-(void)_readMapUi;
-(void)_readMapUiShown;
-(void)_readUserSession;
-(void)_readExperiments;
-(void)_readPlaceCard;
-(void)_readRoute;
-(void)_readMapsServer;
-(void)_readTileSet;
-(void)_readNavigation;
-(void)_readMapRestore;
-(void)_readSuggestions;
-(void)_readRealtimeTrafficProbe;
-(void)_readSummaryLookAroundLog;
-(void)_readDetailLookAroundLog;
-(void)_readLookAroundView;
-(void)_readMuninResource;
-(void)_readMapLaunch;
-(NSString *)stateOrigin;
-(GEOLogMsgStateDeviceBase *)deviceBase;
-(GEOLogMsgStateNavigation *)navigation;
-(GEOLogMsgStateRealtimeTrafficProbe *)realtimeTrafficProbe;
-(GEOLogMsgStateDetailLookAroundLog *)detailLookAroundLog;
-(void)setStateOrigin:(NSString *)arg1 ;
-(void)setDeviceBase:(GEOLogMsgStateDeviceBase *)arg1 ;
-(void)setTransit:(GEOLogMsgStateTransit *)arg1 ;
-(void)setNavigation:(GEOLogMsgStateNavigation *)arg1 ;
-(void)setRealtimeTrafficProbe:(GEOLogMsgStateRealtimeTrafficProbe *)arg1 ;
-(void)setDetailLookAroundLog:(GEOLogMsgStateDetailLookAroundLog *)arg1 ;
-(BOOL)hasStateOrigin;
-(BOOL)hasDeviceIdentifier;
-(BOOL)hasApplicationIdentifier;
-(BOOL)hasDeviceBase;
-(BOOL)hasDeviceLocale;
-(BOOL)hasCarPlay;
-(BOOL)hasPairedDevice;
-(BOOL)hasDeviceSettings;
-(BOOL)hasMapView;
-(BOOL)hasMapViewLocation;
-(BOOL)hasTransit;
-(BOOL)hasMapSettings;
-(BOOL)hasMapUi;
-(BOOL)hasMapUiShown;
-(BOOL)hasUserSession;
-(BOOL)hasExperiments;
-(BOOL)hasPlaceCard;
-(BOOL)hasRoute;
-(BOOL)hasMapsServer;
-(BOOL)hasTileSet;
-(BOOL)hasNavigation;
-(BOOL)hasMapRestore;
-(BOOL)hasSuggestions;
-(BOOL)hasRealtimeTrafficProbe;
-(BOOL)hasSummaryLookAroundLog;
-(BOOL)hasDetailLookAroundLog;
-(BOOL)hasLookAroundView;
-(BOOL)hasMuninResource;
-(BOOL)hasMapLaunch;
@end
