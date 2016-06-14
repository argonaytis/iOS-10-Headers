//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBAlertView.h"

#import "SBPowerDownViewInterface-Protocol.h"
#import "_UIActionSliderDelegate-Protocol.h"

@class NSString, NSTimer, SBAppStatusBarSettingsAssertion, SBShapeView, UIButton, UILabel, UIView, _UIActionSlider;
@protocol SBPowerDownViewDelegate;

@interface SBPowerDownView : SBAlertView <_UIActionSliderDelegate, SBPowerDownViewInterface>
{
    NSTimer *_autoDismissTimer;
    UIView *_backdropView;
    SBShapeView *_darkeningUnderlayView;
    UIView *_darkeningOverlayView;
    _UIActionSlider *_actionSlider;
    UIButton *_cancelButton;
    UILabel *_cancelLabel;
    _Bool _hiddenLockScreenForeground;
    SBAppStatusBarSettingsAssertion *_hideStatusBarAssertion;
    _Bool _canAlterScreenBrightness;
    id <SBPowerDownViewDelegate> _delegate;
}

@property(nonatomic) _Bool canAlterScreenBrightness; // @synthesize canAlterScreenBrightness=_canAlterScreenBrightness;
@property(nonatomic) __weak id <SBPowerDownViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_animatePowerDown;
- (void)_notifyDelegateCancelled;
- (void)_notifyDelegatePowerDown;
- (void)_updateSliderExclusionPath;
- (void)_resetScreenBrightness;
- (void)_resetAutoDismissTimer;
- (void)_cancelAutoDismissTimer;
- (id)_lockScreenView;
- (void)actionSliderDidCancelSlide:(id)arg1;
- (void)actionSliderDidCompleteSlide:(id)arg1;
- (void)actionSlider:(id)arg1 didUpdateSlideWithValue:(double)arg2;
- (void)actionSliderDidBeginSlide:(id)arg1;
- (void)dismiss;
- (void)layoutForInterfaceOrientation:(long long)arg1;
- (void)animateOut;
- (void)animateIn;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

