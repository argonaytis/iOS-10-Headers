//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class _UIBackdropView;
@protocol SBUIPasscodeLockView;

@interface SBUIPasscodeViewWithLockScreenStyle : UIView
{
    UIView<SBUIPasscodeLockView> *_passcodeView;
    _UIBackdropView *_blurView;
    double _blurRadius;
    _Bool _blurEnabled;
}

@property(readonly, nonatomic) UIView<SBUIPasscodeLockView> *passcodeView; // @synthesize passcodeView=_passcodeView;
- (void).cxx_destruct;
- (void)setBlurEnabled:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 includeBlur:(_Bool)arg2 passcodeViewGenerator:(CDUnknownBlockType)arg3;

@end

