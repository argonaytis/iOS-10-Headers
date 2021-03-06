//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UIColor, UIImage, UIImageView, UILabel, UIView;

@interface SBStarkBannerViewButton : UIControl
{
    UILabel *_textLabel;
    UIColor *_unselectedTextColor;
    UIColor *_selectedTextColor;
    UIImage *_unselectedImage;
    UIImage *_selectedImage;
    UIView *_highlightView;
    UIImageView *_imageView;
    UIColor *_highlightColor;
}

@property(retain, nonatomic) UIImage *selectedImage; // @synthesize selectedImage=_selectedImage;
@property(retain, nonatomic) UIImage *unselectedImage; // @synthesize unselectedImage=_unselectedImage;
@property(retain, nonatomic) UIColor *selectedTextColor; // @synthesize selectedTextColor=_selectedTextColor;
@property(retain, nonatomic) UIColor *unselectedTextColor; // @synthesize unselectedTextColor=_unselectedTextColor;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
@property(retain, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
- (id)initWithFrame:(struct CGRect)arg1;

@end

