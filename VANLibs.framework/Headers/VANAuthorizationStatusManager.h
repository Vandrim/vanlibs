
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface VANAuthorizationStatusManager : NSObject

//网络权限
+ (void)networkAuthorized:(void(^_Nullable)(BOOL authorized))authorizedResultBlock;
//麦克风权限
+ (void)microphoneAuthorized:(void(^_Nullable)(BOOL authorized))authorizedResultBlock;
//相机权限
+ (void)cameraAuthorized:(void(^_Nullable)(BOOL enable, BOOL authorized))authorizedResultBlock;
//通讯录权限
+ (void)addressBookAuthorized:(void(^_Nullable)(BOOL authorized))authorizedResultBlock;

//相册权限类型
typedef NS_ENUM(NSInteger, VAPhotoAlbumStatus) {
    VAPhotoAlbumStatusRestricted = 0,
    VAPhotoAlbumStatusLimited,
    VAPhotoAlbumStatusAuthorized,
    VAPhotoAlbumStatusDenied,
};
//读取相册权限
+ (void)readPhotoAlbumStatus:(void(^_Nullable)(VAPhotoAlbumStatus status))authorizedResultBlock;
+ (void)readWritePhotoAlbumAuthorized:(void(^_Nullable)(BOOL authorized))authorizedResultBlock;
//添加图片至相册权限
+ (void)addPhotoToAlbumAuthorized:(void(^_Nullable)(BOOL authorized))authorizedResultBlock;


//打开app系统设置页面
+ (void)openSysSetting;

@end

NS_ASSUME_NONNULL_END
