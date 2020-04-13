
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface VANAuthorizationStatusManager : NSObject

//网络权限
+ (void)networkEnable:(void(^_Nullable)(BOOL enable))authorizedResultBlock;
//麦克风权限
+ (void)microphoneEnable:(void(^_Nullable)(BOOL enable))authorizedResultBlock;
//相机权限
+ (void)cameraEnable:(void(^_Nullable)(BOOL enable))authorizedResultBlock;
//相册权限
+ (void)photoalbumEnable:(void(^_Nullable)(BOOL enable))authorizedResultBlock;
//通讯录权限
+ (void)addressBookEnable:(void(^_Nullable)(BOOL enable))authorizedResultBlock;

//打开app系统设置页面
+ (void)openSysSetting;

@end

NS_ASSUME_NONNULL_END
