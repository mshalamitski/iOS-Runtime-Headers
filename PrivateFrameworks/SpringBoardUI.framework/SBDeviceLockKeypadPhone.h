/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@class UIButton, UIImage;

@interface SBDeviceLockKeypadPhone : SBDeviceLockKeypad {
    UIImage *_deleteIcon;
    UIButton *_emergencyCallButton;
    UIButton *_poundButton;
}

+ (id)keypadImage;
+ (id)pressedImage;

- (void)_updateCancelAndDeleteButtons;
- (float)_yFudge;
- (BOOL)cancelKeyChar;
- (void)dealloc;
- (BOOL)deleteKeyChar;
- (BOOL)emergencyKeyChar;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setDeleteEnabled:(BOOL)arg1;
- (void)setShowsEmergencyCallButton:(BOOL)arg1;
- (BOOL)showsEmergencyCallButton;

@end
