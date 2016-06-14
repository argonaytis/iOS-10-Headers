//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIScrollView, UIView, UIViewController;

@protocol SBMultiplexedHostingObserver <NSObject>

@optional
- (void)presentationControllerDidEndDismissing:(UIViewController *)arg1;
- (void)presentationControllerWillBeginDismissing:(UIViewController *)arg1;
- (void)presentationControllerDidEndPresenting:(UIViewController *)arg1;
- (void)presentationControllerWillBeginPresenting:(UIViewController *)arg1;
- (UIScrollView *)containingScrollView;
- (UIView *)mainViewForTouchDelivery;
- (_Bool)wantsToShareTouches;
- (void)willDeactivateHosting;
- (void)willActivateHosting;
@end

