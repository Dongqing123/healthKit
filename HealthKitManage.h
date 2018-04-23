//
//  HealthKitManage.h
//  BBShopping
//
//  Created by YZ on 2017/12/15.
//  Copyright © 2017年 mibo02. All rights reserved.
//写入及读取步数

#import <Foundation/Foundation.h>
#import <HealthKit/HealthKit.h>
#import <UIKit/UIDevice.h>

#define HKVersion [[[UIDevice currentDevice] systemVersion] doubleValue]
#define CustomHealthErrorDomain @"com.sdqt.healthError"

@interface HealthKitManage : NSObject
@property (nonatomic, strong) HKHealthStore *healthStore;


/**
 初始化

 @return <#return value description#>
 */
+(id)shareInstance;

/**
 授权

 @param compltion <#compltion description#>
 */
- (void)authorizeHealthKit:(void(^)(BOOL success, NSError *error))compltion;



/**
 获取步数

 @param completion <#completion description#>
 */
- (void)getStepCount:(void(^)(double value, NSError *error))completion withStartDate:(NSDate*)startDate andEndDate:(NSDate*)endDate;

@end
