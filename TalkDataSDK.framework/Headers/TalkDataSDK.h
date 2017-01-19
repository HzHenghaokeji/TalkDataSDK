//
//  TalkDataSDK.h
//  TalkDataSDK
//
//  Created by ZCH on 2017/1/17.
//  Copyright © 2017年 ZCH. All rights reserved.
//  数据分析管理

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface TalkDataSDK : NSObject

/*
 * 绑定App的appKey和启动参数，启动消息参数用于处理用户通过消息打开应用相关信息
 * @param appKey      主站生成appKey
 */
+ (void)setAppkey:(NSString *)appKey;

/*
 * 绑定浏览页面
 * @param pageName      页面名称
 */
+ (void)inPage:(NSString *)pageName;

/*
 * 绑定退出页面
 * @param pageName      页面名称
 */
+ (void)outPage:(NSString *)pageName;

/*
 * 交易接口
 * @param type     0-申购 1-赎回 必填
 * @param money     交易金额 申购必填
 * @param fundName     基金名称 必填
 * @param fundCode     基金代码 必填
 * @param fundCompany     基金公司 必填
 * @param tradeShare     份额 赎回必填
 */
+ (void)tradeWithType:(NSString *)type
                money:(NSString *)money
             fundName:(NSString *)fundName
             fundCode:(NSString *)fundCode
          fundCompany:(NSString *)fundCompany
           tradeShare:(NSString *)tradeShare;

@end
