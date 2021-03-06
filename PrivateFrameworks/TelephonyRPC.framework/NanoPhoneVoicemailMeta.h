/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyRPC.framework/TelephonyRPC
 */

@class NSString, NanoPhoneVoicemailBody;

@interface NanoPhoneVoicemailMeta : PBCodable <NSCopying, SYObject> {
    NSString *_callbackNumber;
    NSString *_dataPath;
    double _date;
    int _duration;
    int _flags;
    struct { 
        unsigned int date : 1; 
        unsigned int identifier : 1; 
        unsigned int remoteUID : 1; 
        unsigned int duration : 1; 
        unsigned int flags : 1; 
    } _has;
    long long _identifier;
    long long _remoteUID;
    NSString *_sender;
    NanoPhoneVoicemailBody *_voicemailBody;
    long long _voicemailNumber;
}

@property(retain) NSString * callbackNumber;
@property(retain) NSString * dataPath;
@property double date;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property int duration;
@property int flags;
@property(readonly) BOOL hasCallbackNumber;
@property(readonly) BOOL hasDataPath;
@property BOOL hasDate;
@property BOOL hasDuration;
@property BOOL hasFlags;
@property BOOL hasIdentifier;
@property BOOL hasRemoteUID;
@property(readonly) BOOL hasSender;
@property(readonly) BOOL hasVoicemailBody;
@property(readonly) unsigned int hash;
@property long long identifier;
@property long long remoteUID;
@property(retain) NSString * sender;
@property(readonly) Class superclass;
@property(retain) NanoPhoneVoicemailBody * voicemailBody;
@property long long voicemailNumber;

+ (id)voicemailWithMessage:(id)arg1;
+ (id)voicemailWithSYContext:(id)arg1;
+ (id)xpcObjectAsArray:(id)arg1;

- (void).cxx_destruct;
- (id)asXpcObject;
- (void)attachToXpcObject:(id)arg1;
- (id)callbackNumber;
- (id)callbackNumberOrSender;
- (id)contextWithSyncOperation:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataPath;
- (double)date;
- (id)description;
- (id)dictionaryRepresentation;
- (id)dictionaryRepresentation;
- (id)displayLabelFromAddressBook:(void*)arg1;
- (id)displayNameFromAddressBook:(void*)arg1;
- (int)duration;
- (int)flags;
- (BOOL)hasCallbackNumber;
- (BOOL)hasDataPath;
- (BOOL)hasDate;
- (BOOL)hasDuration;
- (BOOL)hasFlags;
- (BOOL)hasIdentifier;
- (BOOL)hasRemoteUID;
- (BOOL)hasSender;
- (BOOL)hasVoicemailBody;
- (unsigned int)hash;
- (long long)identifier;
- (id)initWithVoicemail:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)loadVoicemailBodyIfNeeded;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (long long)remoteUID;
- (id)sender;
- (void)setCallbackNumber:(id)arg1;
- (void)setDataPath:(id)arg1;
- (void)setDate:(double)arg1;
- (void)setDuration:(int)arg1;
- (void)setFlags:(int)arg1;
- (void)setHasDate:(BOOL)arg1;
- (void)setHasDuration:(BOOL)arg1;
- (void)setHasFlags:(BOOL)arg1;
- (void)setHasIdentifier:(BOOL)arg1;
- (void)setHasRemoteUID:(BOOL)arg1;
- (void)setIdentifier:(long long)arg1;
- (void)setRemoteUID:(long long)arg1;
- (void)setSender:(id)arg1;
- (void)setVoicemailBody:(id)arg1;
- (void)setVoicemailNumber:(long long)arg1;
- (id)syncId;
- (int)syncOperation;
- (id)voicemailBody;
- (id)voicemailDescription;
- (long long)voicemailNumber;
- (void)writeTo:(id)arg1;

@end
