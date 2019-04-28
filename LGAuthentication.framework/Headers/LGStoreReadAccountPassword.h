//
//  LGStoreReadAccountPassword.h
//  身份验证Lib
//
//  Created by b233 on 15/12/4.
//  Copyright © 2015年 LGCloudPlatform. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LGStoreReadAccountPassword : NSObject

+ (NSString *)account;
+ (NSString *)password;
+ (void)setAccountValue:(NSString *)accountValue andPasswordValue:(NSString *)passwordValue;
+ (void) setAccountWith:(NSString *)account;
+ (void) setPassworldWith:(NSString *)passworld;
@end
