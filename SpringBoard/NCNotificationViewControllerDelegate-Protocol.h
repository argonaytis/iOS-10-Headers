//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NCNotificationAction, NCNotificationViewController, NSDictionary, UIView, UIViewController;
@protocol UIViewControllerTransitionCoordinator;

@protocol NCNotificationViewControllerDelegate <NSObject>
- (void)notificationViewController:(NCNotificationViewController *)arg1 executeAction:(NCNotificationAction *)arg2 withParameters:(NSDictionary *)arg3;

@optional
- (void)notificationViewController:(NCNotificationViewController *)arg1 didCommitToLongLookPresentation:(_Bool)arg2 withCoordinator:(id <UIViewControllerTransitionCoordinator>)arg3;
- (void)notificationViewController:(NCNotificationViewController *)arg1 didCommitToShortLookPresentation:(_Bool)arg2 withCoordinator:(id <UIViewControllerTransitionCoordinator>)arg3;
- (struct CGRect)notificationViewController:(NCNotificationViewController *)arg1 convertRect:(struct CGRect)arg2 toLocalWindowSpaceFromView:(UIView *)arg3;
- (struct CGRect)presentationFrameForNotificationViewController:(NCNotificationViewController *)arg1;
- (void)notificationViewControllerDidEndDragging:(NCNotificationViewController *)arg1;
- (void)notificationViewControllerWillBeginDragging:(NCNotificationViewController *)arg1;
- (void)notificationViewController:(NCNotificationViewController *)arg1 didDismissShortLook:(_Bool)arg2;
- (void)notificationViewController:(NCNotificationViewController *)arg1 didDismissLongLook:(_Bool)arg2;
- (void)longLookWillDismissForNotificationViewController:(NCNotificationViewController *)arg1;
- (void)notificationViewController:(NCNotificationViewController *)arg1 didPresentLongLook:(_Bool)arg2;
- (void)longLookWillPresentForNotificationViewController:(NCNotificationViewController *)arg1;
- (UIViewController *)notificationViewController:(NCNotificationViewController *)arg1 preferredViewControllerForPresentingFromViewController:(UIViewController *)arg2;
- (_Bool)shouldAddHintTextForNotificationViewController:(NCNotificationViewController *)arg1;
- (_Bool)notificationViewController:(NCNotificationViewController *)arg1 suggestsDismissingShortLookWithSource:(id)arg2;
- (void)notificationViewController:(NCNotificationViewController *)arg1 shouldFinishLongLookTransitionWithCompletionBlock:(void (^)(_Bool))arg2;
- (_Bool)notificationViewControllerShouldAllowInteractionGesture:(NCNotificationViewController *)arg1;
- (UIView *)colorInfusingViewForNotificationViewController:(NCNotificationViewController *)arg1;
- (_Bool)notificationViewControllerShouldBlurShortLook:(NCNotificationViewController *)arg1;
- (_Bool)notificationViewControllerShouldInterpretTapAsDefaultAction:(NCNotificationViewController *)arg1;
- (_Bool)notificationViewControllerShouldPan:(NCNotificationViewController *)arg1;
@end
