/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class CKComposition, NSMutableDictionary, NSString;

@interface CKMessageEntryRichTextView : CKMessageEntryTextView <NSTextStorageDelegate> {
    BOOL _balloonColor;
    NSMutableDictionary *_composeImages;
    NSMutableDictionary *_mediaObjects;
    int _pasteboardChangeCount;
    CKComposition *_pasteboardComposition;
}

@property BOOL balloonColor;
@property(retain) NSMutableDictionary * composeImages;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(retain) NSMutableDictionary * mediaObjects;
@property int pasteboardChangeCount;
@property(retain) CKComposition * pasteboardComposition;
@property(readonly) Class superclass;

- (id)attributedTextForCompositionText:(id)arg1;
- (BOOL)balloonColor;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)composeImageForTransferGUID:(id)arg1;
- (id)composeImages;
- (id)compositionText;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 textContainer:(id)arg2;
- (id)mediaObjects;
- (void)paste:(id)arg1;
- (int)pasteboardChangeCount;
- (id)pasteboardComposition;
- (void)previewDidChange:(id)arg1;
- (void)setBalloonColor:(BOOL)arg1;
- (void)setComposeImages:(id)arg1;
- (void)setCompositionText:(id)arg1;
- (void)setMediaObjects:(id)arg1;
- (void)setPasteboardChangeCount:(int)arg1;
- (void)setPasteboardComposition:(id)arg1;
- (void)textStorage:(id)arg1 willProcessEditing:(unsigned int)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3 changeInLength:(int)arg4;
- (void)updateComposeImages;

@end
