/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <UIWebFormAccessoryDelegate>, UIButton, UISegmentedControl;

@interface UIWebFormAccessory : UIImageView {
    UIButton *_autofill;
    UIButton *_done;
    UISegmentedControl *_tab;
    <UIWebFormAccessoryDelegate> *delegate;
}

@property(retain) UIButton *_autofill;
@property(retain) UIButton *_done;
@property(retain) UISegmentedControl *_tab;
@property <UIWebFormAccessoryDelegate> *delegate;
@property(getter=isAutoFillEnabled) BOOL autoFillEnabled;
@property(getter=isNextEnabled) BOOL nextEnabled;
@property(getter=isPreviousEnabled) BOOL previousEnabled;

- (id)_autofill;
- (id)_done;
- (id)_tab;
- (void)autoFill:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)done:(id)arg1;
- (id)init;
- (BOOL)isAutoFillEnabled;
- (BOOL)isNextEnabled;
- (BOOL)isPreviousEnabled;
- (void)layoutSubviews;
- (void)setAutoFillEnabled:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNextEnabled:(BOOL)arg1;
- (void)setPreviousEnabled:(BOOL)arg1;
- (void)set_autofill:(id)arg1;
- (void)set_done:(id)arg1;
- (void)set_tab:(id)arg1;
- (void)tab:(id)arg1;

@end