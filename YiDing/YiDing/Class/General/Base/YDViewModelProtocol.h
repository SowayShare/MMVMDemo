//
//  YDViewModelProtocol.h
//  YiDing
//
//  Created by tjcet on 16/3/21.
//  Copyright © 2016年 tjcet. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum : NSUInteger {
    LSHeaderRefresh_HasMoreData = 1,
    LSHeaderRefresh_HasNoMoreData,
    LSFooterRefresh_HasMoreData,
    LSFooterRefresh_HasNoMoreData,
    LSRefreshError,
    LSRefreshUI,
} LSRefreshDataStatus;

@protocol YDViewModelProtocol <NSObject>

@optional

- (instancetype)initWithModel:(id)model;

@property (strong, nonatomic)CMRequest *request;

/**
 *  初始化
 */
- (void)yd_initialize;

@end
