//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NCNotificationAlertDestination-Protocol.h"

@class NSString, SBBannerController, SBBulletinModalController, SBLockScreenManager;
@protocol NCNotificationAlertDestinationDelegate, NCNotificationDestinationDelegate, SBUIBannerSource, SBUIBannerTarget;

@interface SBNotificationLegacyBannerDestination : NSObject <NCNotificationAlertDestination>
{
    _Bool _readyForNotificationRequest;
    id <NCNotificationAlertDestinationDelegate> _delegate;
    SBBannerController *_bannerController;
    id <SBUIBannerTarget> _bannerTarget;
    id <SBUIBannerSource> _bannerSource;
    SBBulletinModalController *_modalController;
    SBLockScreenManager *_lockScreenManager;
}

@property(nonatomic) _Bool readyForNotificationRequest; // @synthesize readyForNotificationRequest=_readyForNotificationRequest;
@property(retain, nonatomic) SBLockScreenManager *lockScreenManager; // @synthesize lockScreenManager=_lockScreenManager;
@property(retain, nonatomic) SBBulletinModalController *modalController; // @synthesize modalController=_modalController;
@property(retain, nonatomic) id <SBUIBannerSource> bannerSource; // @synthesize bannerSource=_bannerSource;
@property(retain, nonatomic) id <SBUIBannerTarget> bannerTarget; // @synthesize bannerTarget=_bannerTarget;
@property(retain, nonatomic) SBBannerController *bannerController; // @synthesize bannerController=_bannerController;
@property(nonatomic) __weak id <NCNotificationDestinationDelegate> delegate;
- (void).cxx_destruct;
- (id)_bannerContextForBulletin:(id)arg1 observer:(id)arg2;
- (id)_bannerContextForNotificationRequest:(id)arg1;
- (void)_setReadyForNotificationRequests;
- (void)_scheduleReadyForNotificationRequestsWithDelay:(double)arg1;
- (void)_bannerDismissed;
- (void)_lockStateChanged;
- (_Bool)_isCarPlayActive;
- (_Bool)_isUILocked;
- (void)withdrawNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (void)modifyNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (void)postNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (_Bool)canReceiveNotificationRequest:(id)arg1;
@property(readonly, nonatomic) NSString *identifier;
- (id)initWithLockScreenManager:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

