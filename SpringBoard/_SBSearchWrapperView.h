//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface _SBSearchWrapperView : UIView
{
    double _statusBarHeightAdjustment;
    double _headerOffset;
    UIView *_searchView;
}

@property(retain, nonatomic) UIView *searchView; // @synthesize searchView=_searchView;
@property(nonatomic) double headerOffset; // @synthesize headerOffset=_headerOffset;
@property(nonatomic) double statusBarHeightAdjustment; // @synthesize statusBarHeightAdjustment=_statusBarHeightAdjustment;
- (void).cxx_destruct;
- (void)_updateLayout;
- (void)layoutSubviews;

@end

