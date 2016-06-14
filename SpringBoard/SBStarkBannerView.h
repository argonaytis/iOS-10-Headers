//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SBDateLabelDelegate-Protocol.h"
#import "SBStarkBannerItemObserver-Protocol.h"
#import "SBUIBannerView-Protocol.h"

@class NSString, SBStarkBannerItem, SBStarkBannerViewButton, SBUIBannerContext, UIImageView, UILabel;
@protocol NCNotificationDateLabel, SBStarkSessionConfiguring;

@interface SBStarkBannerView : UIView <SBStarkBannerItemObserver, SBDateLabelDelegate, SBUIBannerView>
{
    id <SBStarkSessionConfiguring> _configuration;
    SBUIBannerContext *_context;
    SBStarkBannerItem *_bannerItem;
    UIImageView *_categoryImageView;
    UILabel *_titleLabel;
    double _titleAscender;
    UILabel *_subTitleLabel;
    double _subTitleAscender;
    SBStarkBannerViewButton *_okButton;
    SBStarkBannerViewButton *_actionButton;
    struct UIEdgeInsets _contentInsets;
    UILabel<NCNotificationDateLabel> *_relevanceDateLabel;
}

- (void).cxx_destruct;
- (void)dateLabelDidChange:(id)arg1;
- (void)starkBannerItemDidReloadDisplayProperties:(id)arg1;
- (_Bool)shouldBorrowScreen;
- (id)bannerContext;
- (_Bool)canBecomeFirstResponder;
- (void)layoutSubviews;
- (void)_layoutForButton:(id)arg1 contentFrame:(struct CGRect)arg2;
- (_Bool)_shouldShowOKButton;
- (void)_setRelevanceDate:(id)arg1;
- (id)_defaultRelevanceDateFont;
- (id)_titleFont;
- (_Bool)_hasSubtitle;
- (struct UIEdgeInsets)_contentInsetsForActionType:(long long)arg1;
- (struct UIEdgeInsets)_categoryImageInsets;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithConfiguration:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

