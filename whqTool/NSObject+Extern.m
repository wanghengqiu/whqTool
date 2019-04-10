//
//  NSObject+Extern.m
//  QiZhiWatch
//
//  Created by 王恒求 on 2017/4/8.
//  Copyright © 2017年 王恒求. All rights reserved.
//

#import "NSObject+Extern.h"

@implementation NSObject (Extern)

+ (id)object
{
    return [[[self class] alloc] init];
}

+ (NSString *)className
{
    return NSStringFromClass([self class]);
}

- (NSString *)className
{
    return [[self class] className];
}

- (void)runBlock:(void(^)(void))block afterDelay:(NSTimeInterval)delayInSecond
{
    [self runBlock:block afterDelay:delayInSecond inDispatchQueue:NULL];
}

- (void)runBlock:(void (^)(void))block afterDelay:(NSTimeInterval)delayInSecond inDispatchQueue:(dispatch_queue_t)dispatchQueue
{
    if (!block) {
        return;
    }
    if (!dispatchQueue) {
        dispatchQueue = dispatch_get_main_queue();
    }
    dispatch_time_t popTime = dispatch_time(DISPATCH_TIME_NOW, (int64_t)(delayInSecond * NSEC_PER_SEC));
    dispatch_after(popTime, dispatchQueue, ^(void){
        block();
    });
}

@end
