//
//  UIBarButtonItem+Extern.h
//  QiZhiWatch
//
//  Created by 王恒求 on 2017/4/8.
//  Copyright © 2017年 王恒求. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIBarButtonItem (Extern)

+ (UIBarButtonItem *)itemWithTarget:(id)target action:(SEL)action image:(NSString *)image highImage:(NSString *)highImage;

@end
