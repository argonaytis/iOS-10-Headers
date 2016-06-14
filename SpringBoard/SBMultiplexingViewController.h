//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SBMultiplexedHostingObserver-Protocol.h"
#import "SBUISizeObservingViewDelegate-Protocol.h"

@class NSString, UIView;
@protocol SBMultiplexedHostingDelegate;

@interface SBMultiplexingViewController : UIViewController <SBUISizeObservingViewDelegate, SBMultiplexedHostingObserver>
{
    NSString *_contextHostRequester;
    UIView *_multiplexedHostingView;
    _Bool _hosting;
    id <SBMultiplexedHostingDelegate> _hostingDelegate;
    NSString *_isolationIdentifier;
}

@property(readonly, copy, nonatomic) NSString *contextHostRequester; // @synthesize contextHostRequester=_contextHostRequester;
@property(readonly, copy, nonatomic) NSString *isolationIdentifier; // @synthesize isolationIdentifier=_isolationIdentifier;
@property(nonatomic) __weak id <SBMultiplexedHostingDelegate> hostingDelegate; // @synthesize hostingDelegate=_hostingDelegate;
@property(readonly, nonatomic, getter=isHosting) _Bool hosting; // @synthesize hosting=_hosting;
- (void).cxx_destruct;
- (id)containingScrollView;
- (id)mainViewForTouchDelivery;
- (_Bool)wantsToShareTouches;
- (void)willDeactivateHosting;
- (void)willActivateHosting;
- (void)sizeObservingView:(id)arg1 didChangeSize:(struct CGSize)arg2;
- (struct CGSize)preferredSizeForHostedView;
- (_Bool)directlyForwardViewSizeChanges;
- (id)createViewControllerForIsolation;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithIsolationIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

