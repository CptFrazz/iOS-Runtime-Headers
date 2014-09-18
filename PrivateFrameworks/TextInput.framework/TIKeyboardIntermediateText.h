/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@class NSString;

@interface TIKeyboardIntermediateText : NSObject <NSSecureCoding> {
    NSString *_displayString;
    NSString *_inputString;
    NSString *_searchString;
    unsigned long long _selectionOffset;
}

@property(readonly) NSString * displayString;
@property(readonly) NSString * inputString;
@property(readonly) NSString * searchString;
@property(readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } selectedRange;

+ (id)intermediateTextWithInputString:(id)arg1 displayString:(id)arg2 selectionLocation:(unsigned long long)arg3 searchString:(id)arg4;
+ (id)intermediateTextWithInputString:(id)arg1 displayString:(id)arg2 selectionLocation:(unsigned long long)arg3;
+ (id)intermediateTextWithInputString:(id)arg1 displayString:(id)arg2;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)displayString;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithInputString:(id)arg1 displayString:(id)arg2 selectionLocation:(unsigned long long)arg3 searchString:(id)arg4;
- (id)inputString;
- (bool)isEqual:(id)arg1;
- (id)searchString;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })selectedRange;

@end