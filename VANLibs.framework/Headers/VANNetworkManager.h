
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

//从无网络状态到有网络状态
#define NetworkStatusBecomeEnableFromDisable @"NetworkStatusBecomeEnableFromDisable"
//从有网络状态到无网络状态
#define NetworkStatusBecomeDisableFromEnable @"NetworkStatusBecomeDisableFromEnable"

@interface VANNetworkManager : NSObject

+ (instancetype)shareManager;

//开始监听网络
- (void)startNetworkListener;

//结束监听网络
- (void)endNetworkListener;

/** 是否是Wifi */
+ (BOOL)isWifiEnable;

/** 是否有网络 */
+ (BOOL)isNetworkEnable;

@end

NS_ASSUME_NONNULL_END
