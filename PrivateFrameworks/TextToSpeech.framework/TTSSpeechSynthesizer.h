/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
 */

@class <TTSSpeechSynthesizerDelegate>, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface TTSSpeechSynthesizer : NSObject <TTSSpeechConnectionDelegate> {
    unsigned int _audioQueueFlags;
    unsigned int _audioSessionID;
    BOOL _audioSessionIDIsValid;
    NSMutableDictionary *_channels;
    NSMutableArray *_currentRequestOwners;
    <TTSSpeechSynthesizerDelegate> *_delegate;
    int _footprint;
    float _pitch;
    NSObject<OS_dispatch_queue> *_queue;
    float _rate;
    NSMutableArray *_speechRequests;
    struct { 
        unsigned int delegateStartWithRequest : 1; 
        unsigned int delegateFinishWithRequest : 1; 
        unsigned int delegateFinishWithPhonemesSpokenWithRequest : 1; 
        unsigned int delegatePauseWithRequest : 1; 
        unsigned int delegateContinueWithRequest : 1; 
        unsigned int delegateWillSpeakWithRequest : 1; 
        unsigned int willUseInput : 1; 
    } _synthesizerFlags;
    BOOL _useSharedSession;
    NSString *_voiceIdentifier;
    float _volume;
}

@property <TTSSpeechSynthesizerDelegate> * delegate;
@property float pitch;
@property float rate;
@property(readonly) NSString * resolvedVoiceIdentifier;
@property(retain) NSString * voiceIdentifier;
@property float volume;

+ (id)availableLanguageCodes;
+ (id)availableVoices;
+ (id)availableVoicesForLanguageCode:(id)arg1;
+ (void)initialize;
+ (BOOL)isSystemSpeaking;

- (void).cxx_destruct;
- (BOOL)_continueSpeakingRequest:(id)arg1 withError:(id*)arg2;
- (void)_mediaServicesDied;
- (BOOL)_pauseSpeakingRequest:(id)arg1 atNextBoundary:(int)arg2 synchronously:(BOOL)arg3 error:(id*)arg4;
- (id)_preprocessText:(id)arg1 languageCode:(id)arg2;
- (void)_setDelegate:(id)arg1;
- (id)_speechVoiceForIdentifier:(id)arg1 language:(id)arg2;
- (BOOL)_startSpeakingString:(id)arg1 orAttributedString:(id)arg2 toURL:(id)arg3 withLanguageCode:(id)arg4 request:(id*)arg5 error:(id*)arg6;
- (BOOL)_stopSpeakingRequest:(id)arg1 atNextBoundary:(int)arg2 synchronously:(BOOL)arg3 error:(id*)arg4;
- (void)connection:(id)arg1 speechRequest:(id)arg2 didStopAtEnd:(BOOL)arg3 phonemesSpoken:(id)arg4 error:(id)arg5;
- (void)connection:(id)arg1 speechRequest:(id)arg2 willSpeakMark:(int)arg3 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4;
- (void)connection:(id)arg1 speechRequestDidContinue:(id)arg2;
- (void)connection:(id)arg1 speechRequestDidPause:(id)arg2;
- (void)connection:(id)arg1 speechRequestDidStart:(id)arg2;
- (BOOL)continueSpeakingRequest:(id)arg1 withError:(id*)arg2;
- (BOOL)continueSpeakingWithError:(id*)arg1;
- (void)dealloc;
- (id)delegate;
- (int)footprint;
- (id)init;
- (BOOL)isSpeaking;
- (float)maximumRate;
- (float)minimumRate;
- (BOOL)pauseSpeakingAtNextBoundary:(int)arg1 error:(id*)arg2;
- (BOOL)pauseSpeakingAtNextBoundary:(int)arg1 synchronously:(BOOL)arg2 error:(id*)arg3;
- (BOOL)pauseSpeakingRequest:(id)arg1 atNextBoundary:(int)arg2 error:(id*)arg3;
- (BOOL)pauseSpeakingRequest:(id)arg1 atNextBoundary:(int)arg2 synchronously:(BOOL)arg3 error:(id*)arg4;
- (float)pitch;
- (float)rate;
- (id)resolvedVoiceIdentifier;
- (void)setDelegate:(id)arg1;
- (void)setFootprint:(int)arg1;
- (void)setPitch:(float)arg1;
- (void)setRate:(float)arg1;
- (void)setVoiceIdentifier:(id)arg1;
- (void)setVolume:(float)arg1;
- (id)speechString;
- (BOOL)startSpeakingAttributedString:(id)arg1 toURL:(id)arg2 withLanguageCode:(id)arg3 error:(id*)arg4;
- (BOOL)startSpeakingString:(id)arg1 error:(id*)arg2;
- (BOOL)startSpeakingString:(id)arg1 request:(id*)arg2 error:(id*)arg3;
- (BOOL)startSpeakingString:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
- (BOOL)startSpeakingString:(id)arg1 toURL:(id)arg2 request:(id*)arg3 error:(id*)arg4;
- (BOOL)startSpeakingString:(id)arg1 toURL:(id)arg2 withLanguageCode:(id)arg3 error:(id*)arg4;
- (BOOL)startSpeakingString:(id)arg1 withLanguageCode:(id)arg2 error:(id*)arg3;
- (BOOL)startSpeakingString:(id)arg1 withLanguageCode:(id)arg2 request:(id*)arg3 error:(id*)arg4;
- (BOOL)stopSpeakingAtNextBoundary:(int)arg1 error:(id*)arg2;
- (BOOL)stopSpeakingAtNextBoundary:(int)arg1 synchronously:(BOOL)arg2 error:(id*)arg3;
- (BOOL)stopSpeakingRequest:(id)arg1 atNextBoundary:(int)arg2 error:(id*)arg3;
- (BOOL)stopSpeakingRequest:(id)arg1 atNextBoundary:(int)arg2 synchronously:(BOOL)arg3 error:(id*)arg4;
- (void)useAudioQueueFlags:(unsigned int)arg1;
- (void)useSharedAudioSession:(BOOL)arg1;
- (void)useSpecificAudioSession:(unsigned int)arg1;
- (id)voiceIdentifier;
- (float)volume;

@end
