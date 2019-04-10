//
//  UIView+Extern.h
//  QiZhiWatch
//
//  Created by 王恒求 on 2017/4/8.
//  Copyright © 2017年 王恒求. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (Extern)

@property (nonatomic, assign) CGSize size;

@property (nonatomic, assign) CGFloat left;
@property (nonatomic, assign) CGFloat right;
@property (nonatomic, assign) CGFloat top;
@property (nonatomic, assign) CGFloat bottom;

@property (nonatomic, assign) CGFloat centerX;
@property (nonatomic, assign) CGFloat centerY;

@property (nonatomic, assign) CGFloat width;
@property (nonatomic, assign) CGFloat height;

@end
