//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SBPasscodeEntryAlertViewController;

@protocol SBPasscodeEntryAlertViewControllerDelegate <NSObject>

@optional
- (void)passcodeEntryAlertViewControllerWantsEmergencyCall:(SBPasscodeEntryAlertViewController *)arg1;
- (_Bool)passcodeEntryAlertViewController:(SBPasscodeEntryAlertViewController *)arg1 authenticatePasscode:(NSString *)arg2;
@end

