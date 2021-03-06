/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSURL, NSUUID, TSUSafeSaveAssistant;

@interface TSPSupportSaveOperationState : NSObject {
    NSURL *_URL;
    BOOL _didWriteSupportBundleSuccessfuly;
    NSUUID *_documentUUID;
    NSUUID *_originalDocumentUUID;
    NSURL *_originalURL;
    NSUUID *_originalVersionUUID;
    TSUSafeSaveAssistant *_safeSaveAssistant;
    BOOL _shouldLeavePendingEndSave;
    int _updateType;
}

@property(copy) NSURL * URL;
@property BOOL didWriteSupportBundleSuccessfuly;
@property(copy) NSUUID * documentUUID;
@property(readonly) NSUUID * originalDocumentUUID;
@property(readonly) NSURL * originalURL;
@property(readonly) NSUUID * originalVersionUUID;
@property(readonly) BOOL preserveDocumentUUID;
@property(retain) TSUSafeSaveAssistant * safeSaveAssistant;
@property BOOL shouldLeavePendingEndSave;
@property(readonly) BOOL shouldUpdate;
@property(readonly) int updateType;

- (void).cxx_destruct;
- (id)URL;
- (BOOL)didWriteSupportBundleSuccessfuly;
- (id)documentUUID;
- (id)init;
- (id)initWithOriginalDocumentUUID:(id)arg1 originalVersionUUID:(id)arg2 originalURL:(id)arg3 updateType:(int)arg4;
- (id)originalDocumentUUID;
- (id)originalURL;
- (id)originalVersionUUID;
- (BOOL)preserveDocumentUUID;
- (id)safeSaveAssistant;
- (void)setDidWriteSupportBundleSuccessfuly:(BOOL)arg1;
- (void)setDocumentUUID:(id)arg1;
- (void)setSafeSaveAssistant:(id)arg1;
- (void)setShouldLeavePendingEndSave:(BOOL)arg1;
- (void)setURL:(id)arg1;
- (BOOL)shouldLeavePendingEndSave;
- (BOOL)shouldUpdate;
- (int)updateType;

@end
