//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBSearchEtceteraLayoutContentView.h"

@class UIView;

@interface SBSearchEtceteraNotificationsLayoutContentView : SBSearchEtceteraLayoutContentView
{
    UIView *_notificationsView;
    struct UIEdgeInsets _notificationListInsetMargins;
}

@property(retain, nonatomic) UIView *notificationsView; // @synthesize notificationsView=_notificationsView;
@property(nonatomic) struct UIEdgeInsets notificationListInsetMargins; // @synthesize notificationListInsetMargins=_notificationListInsetMargins;
- (void).cxx_destruct;
- (struct CGSize)contentSizeForContainerSize:(struct CGSize)arg1;
- (void)layoutSubviews;

@end

