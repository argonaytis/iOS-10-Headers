//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSDictionary, NSString, NSUUID;

@protocol SBUIRemoteAlertServiceInterface

@optional
- (void)setUserInfo:(NSDictionary *)arg1;
- (void)noteActivatedForCustomReason:(NSString *)arg1;
- (void)noteActivatedForActivityContinuationWithIdentifier:(NSUUID *)arg1;
- (void)handleDoubleHeightStatusBarTap;
- (void)handleHeadsetButtonPressed:(_Bool)arg1;
- (void)handleVolumeDownButtonPressed;
- (void)handleVolumeUpButtonPressed;
- (void)handleLockButtonPressed;
- (void)handleHomeButtonPressed;
@end

