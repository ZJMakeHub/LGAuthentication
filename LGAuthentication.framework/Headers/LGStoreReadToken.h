//
//  LGStoreReadToken.h
//  身份验证Lib
//
//  Created by b233 on 15/12/3.
//  Copyright (c) 2015年 LGCloudPlatform. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol LGStorReadTokenDelegate <NSObject>

@optional



@end


@interface LGStoreReadToken : NSObject
// get local token
- (NSString *)token;
// store token
- (void)setTokenValue:(NSString *)tokenValue;

@property (nonatomic,weak) id<LGStorReadTokenDelegate> delegate;

@end
