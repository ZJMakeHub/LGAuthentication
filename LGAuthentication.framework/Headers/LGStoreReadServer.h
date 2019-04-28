//
//  LGStoreReadServer.h
//  身份验证Lib
//
//  Created by b233 on 15/12/3.
//  Copyright (c) 2015年 LGCloudPlatform. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LGStoreReadServer : NSObject

// 读取http://IP:端口／
+ (NSString *)readUrlString;
- (NSString *)readUrlString;

// 将在keychain中获取到的令牌认证接口ip和端口号进行http://IP:端口／拼接
//- (void)setBaseUrlStringWithIP:(NSString *)ip withPort:(NSString *)port;
// 将在keychain中获取到的令牌认证接口ip和端口号进行http://IP:端口／Mac／拼接
- (void)setBaseUrlStringWithIP:(NSString *)ip withPort:(NSString *)port WithMac:(NSString *)mac;

// 返回令牌认证的链接
- (NSString *)authURLString;
// 返回令牌认证的链接
+ (NSString *)authURLString;

// 获取ip地址
- (NSString *)getIPString;
+ (NSString *)getIPString;
// 获取端口号
- (NSString *)getPortString;
+ (NSString *)getPortString;
//获取虚拟路径
- (NSString *)getMacString;
+ (NSString *)getMacString;

@end
