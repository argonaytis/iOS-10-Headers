//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class SBLockScreenView;
@protocol SBUIPasscodeLockView;

@interface SBLockScreenScrollView : UIScrollView
{
    id <SBUIPasscodeLockView> _passcodeView;
    SBLockScreenView *_lockScreenView;
}

@property(nonatomic) __weak SBLockScreenView *lockScreenView; // @synthesize lockScreenView=_lockScreenView;
@property(nonatomic) __weak id <SBUIPasscodeLockView> passcodeView; // @synthesize passcodeView=_passcodeView;
- (void).cxx_destruct;
- (void)setUserInteractionEnabled:(_Bool)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)touchesShouldCancelInContentView:(id)arg1;

@end

