//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBDashBoardModalViewControllerBase.h"

#import "SBDashBoardModalViewDelegate-Protocol.h"

@class NSString, SBFDeviceBlockTimer;

@interface SBDashBoardDeviceBlockViewController : SBDashBoardModalViewControllerBase <SBDashBoardModalViewDelegate>
{
    SBFDeviceBlockTimer *_blockTimer;
}

- (void).cxx_destruct;
- (void)handleSecondaryActionForView:(id)arg1;
- (void)_start;
- (long long)presentationPriority;
- (long long)presentationType;
- (void)loadView;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

