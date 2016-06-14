//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, SBCallToActionLabel, SBUIAppleLogoView, UIButton, UILabel;

@interface SBDashBoardSetupView : UIView
{
    SBUIAppleLogoView *_logoView;
    _Bool _usesWhiteLogo;
    UILabel *_titleLabel;
    int _viewState;
    UIView *_activationInfoView;
    UIButton *_infoButton;
    SBCallToActionLabel *_callToActionLabel;
    NSString *_titleString;
    NSString *_language;
    UIView *_regulatoryInfoView;
}

@property(retain, nonatomic) UIView *regulatoryInfoView; // @synthesize regulatoryInfoView=_regulatoryInfoView;
@property(nonatomic) NSString *language; // @synthesize language=_language;
@property(retain, nonatomic) NSString *titleString; // @synthesize titleString=_titleString;
@property(nonatomic) int viewState; // @synthesize viewState=_viewState;
@property(retain, nonatomic) SBCallToActionLabel *callToActionLabel; // @synthesize callToActionLabel=_callToActionLabel;
@property(retain, nonatomic) UIButton *infoButton; // @synthesize infoButton=_infoButton;
@property(retain, nonatomic) UIView *activationInfoView; // @synthesize activationInfoView=_activationInfoView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_setLanguage:(id)arg1 forLabel:(id)arg2;
- (void)_toggleViewState;
- (void)_adjustTitleVisibilityForInfoViews;
@property(readonly, nonatomic, getter=isFakeLogoHidden) _Bool fakeLogoHidden;
- (void)setTitleString:(id)arg1 forLanguage:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 useWhiteLogo:(_Bool)arg2;

@end

