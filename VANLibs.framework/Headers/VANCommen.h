
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface VANCommen : NSObject

//默认配置UIScrollViewContentInsetAdjustmentNever、UITextField&UITextView的tintcolor为"#333333"、IQKeyboardManager
+ (void)defaultConfigWithClearButton:(BOOL)clearButton;

//获取当前屏幕显示的viewcontroller
+ (UIViewController *)currentViewController;

//屏幕截图
+ (UIImage*)snapshot:(UIView *)shotView;

//判断当前控制器是否正在显示
+ (BOOL)isCurrentViewControllerVisible:(UIViewController *)viewController;

//获取设备类型
+ (NSString *)fetchDeviceModelName;

//获取系统版本号
+ (NSString *)fetchSystemVersion;

//当前app版本
+ (NSString *)currentAppVersion;

//当前app名字
+ (NSString *)currentAppName;

//手机号码验证
+ (BOOL)validateMobile:(NSString *)mobile;

//邮箱验证
+ (BOOL)validateEmail:(NSString *)email;

//身份证号验证
+ (BOOL)validateIDCard:(NSString *)IDCard;

//银行卡号验证
+ (BOOL)validateBankCardNumber:(NSString *)bankCardNumber;

//获取网络类型
+ (NSString *)fetchNetType;

//获取是否连接网络
+ (BOOL)isNetConnection;

//颜色转图片
+ (UIImage*)imageWithColor:(UIColor*)color;

//UIImage:去色功能的实现（图片灰色显示）
+ (UIImage*)imageDiscoloration:(UIImage*)sourceImage;

//根据出生日期返回年龄的方法
+ (NSString *)dateStrToAge:(NSString *)birthday;

//根据出生日期返回年龄的方法
+ (NSInteger)dateToAge:(NSDate *)birthday;

//UrlToMIME
+ (void)urlToMIME:(NSURL *)url completionHandler:(void(^)(NSString *mimeType))completion;

//获取应用市场的信息
+ (void)fetchAppStoreInfoWithAppId:(NSString *)appid andResultBlock:(void(^)(NSString * _Nullable  currentVersion , NSDictionary * _Nullable  responseDict , NSError * _Nullable error))resultBlock;

/**
 比较两个版本号的大小（2.0）
 
 @param v1 第一个版本号
 @param v2 第二个版本号
 @return 版本号相等,返回0; v1小于v2,返回-1; 否则返回1.
 */
+ (NSInteger)compareVersion:(NSString *)v1 to:(NSString *)v2;

//判断设备是否越狱
+ (BOOL)isJailBreak;

@end

NS_ASSUME_NONNULL_END
