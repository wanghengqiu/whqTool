//
//  NSObject+Extern.h
//  QiZhiWatch
//
//  Created by 王恒求 on 2017/4/8.
//  Copyright © 2017年 王恒求. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (Extern)

+ (id)object;
+ (NSString *)className;
- (NSString *)className;

/**
 * @Description:
 *      基于dispatch_queue_t进行延迟操作
 * @Note:
 *      block执行默认在主线程中进行
 * @Parameters:
 *      @param block 执行块
 *      @param delayInSecond 延迟执行的时间， 单位为秒
 */
- (void)runBlock:(void(^)(void))block afterDelay:(NSTimeInterval)delayInSecond;

/**
 * @Description:
 *      基于dispatch_queue_t进行延迟操作
 * @Note:
 *      如果参数dispatchQueue为空，那么默认在主线程中执行操作
 * @Parameters:
 *      @param block 执行块
 *      @param delayInSecond 延迟执行的时间， 单位为秒
 *      @param dispatchQueue 调度队列
 */
- (void)runBlock:(void (^)(void))block afterDelay:(NSTimeInterval)delayInSecond inDispatchQueue:(dispatch_queue_t)dispatchQueue;

@end
