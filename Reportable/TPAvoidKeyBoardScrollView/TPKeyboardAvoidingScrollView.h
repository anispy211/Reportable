//
//  TPKeyboardAvoidingScrollView.h
//
//  Created by Michael Tyson on 11/04/2011.
//  Copyright 2011 A Tasty Pixel. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TPKeyboardAvoidingScrollView : UIScrollView {
    UIEdgeInsets    _priorInset;
    BOOL            _priorInsetSaved;
    BOOL            _keyboardVisible;
    CGRect          _keyboardRect;
    CGSize          _originalContentSize;
}

- (void)showDatePickerForTextField:(UITextField *)firstResponder andKeyboardRect:(CGRect)frame;
-(void)hideDatePickerForTextField:(UITextField *)firstResponder andKeyboardRect:(CGRect)frame;
- (void)adjustOffsetToIdealIfNeeded;
@property (nonatomic,strong) UITextView *currentTextView;
@end
