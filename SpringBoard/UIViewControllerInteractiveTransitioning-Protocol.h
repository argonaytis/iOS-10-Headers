//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol UIViewControllerContextTransitioning;

@protocol UIViewControllerInteractiveTransitioning <NSObject>
- (void)startInteractiveTransition:(id <UIViewControllerContextTransitioning>)arg1;

@optional
@property(readonly, nonatomic) _Bool wantsInteractiveStart;
- (long long)completionCurve;
- (double)completionSpeed;
@end

