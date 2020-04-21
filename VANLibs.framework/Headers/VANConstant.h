
#import <Foundation/Foundation.h>

//device screen size
#define kScreenWidth          [[UIScreen mainScreen] bounds].size.width
#define kScreenHeight         [[UIScreen mainScreen] bounds].size.height
//屏幕宽高度 //kScreenWidth
#define VANScreenWidth  (kScreenWidth < kScreenHeight ? kScreenWidth : kScreenHeight)
#define VANScreenHeight (kScreenWidth < kScreenHeight ? kScreenHeight : kScreenWidth)

//device
#define iPhone4     (VANScreenHeight == 480.0)
#define iPhone5     (VANScreenHeight == 568.0)
#define iPhone6     (VANScreenHeight == 667.0)
#define iPhone6p    (VANScreenHeight == 736.0)
#define iPhoneX     (VANScreenHeight == 812.0 || VANScreenHeight == 896.0)

#define iPad        ([[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPad)
#define iPhoneXs    (VANScreenHeight == 812.0)
#define iPhoneXsMax (VANScreenHeight == 896.0)

//系统版本
#define iOS_VERSION          [[[UIDevice currentDevice] systemVersion] floatValue]
//系统版本是否高于某个版本
#define SYSTEM_VERSION_GREATER_THAN(systemVersion)  ([[[UIDevice currentDevice] systemVersion] compare:systemVersion options:NSNumericSearch] == NSOrderedDescending)

#define iOS14_OR_LATER    ([[[UIDevice currentDevice] systemVersion] floatValue] >= 14.0)
#define iOS13_OR_LATER    ([[[UIDevice currentDevice] systemVersion] floatValue] >= 13.0)
#define iOS12_OR_LATER    ([[[UIDevice currentDevice] systemVersion] floatValue] >= 12.0)
#define iOS11_OR_LATER    ([[[UIDevice currentDevice] systemVersion] floatValue] >= 11.0)
#define iOS10_OR_LATER    ([[[UIDevice currentDevice] systemVersion] floatValue] >= 10.0)
#define iOS9_OR_LATER     ([[[UIDevice currentDevice] systemVersion] floatValue] >= 9.0)
#define iOS8_OR_LATER     ([[[UIDevice currentDevice] systemVersion] floatValue] >= 8.0)
#define iOS7_OR_LATER     ([[[UIDevice currentDevice] systemVersion] floatValue] >= 7.0)
#define iOS6_OR_LATER     ([[[UIDevice currentDevice] systemVersion] floatValue] >= 6.0)

//preference（偏好设置）
#define VANUserDefaults [NSUserDefaults standardUserDefaults]

//判断字符串是否有值
#define NULL_OR_EMPTY(str) ((NSNull *)str == [NSNull null] || str == nil || ((NSString *)[NSString stringWithFormat:@"%@",str]).length == 0)

//弹框的TAG
#define VANPOPTAG 1022

//KeyWindow
#define VANKeyWindow [[UIApplication sharedApplication] keyWindow]

//error
#define VANErrorDomain @"com.error.van"
#define VANERROR(errorCode,errorStr) [NSError errorWithDomain:VANErrorDomain code:errorCode  userInfo:@{NSLocalizedDescriptionKey:("%@",errorStr)}]

//去除字符串空格
#define VANRemoveSpace(str) [("%@",str) stringByReplacingOccurrencesOfString:@" " withString:@""]
//给手机号添加空格
#define VANAddPhoneSpace(str) \
({ \
NSMutableString * string = [[NSMutableString alloc ] initWithString:("%@",str)];\
[string insertString:@" " atIndex:3];\
[string insertString:@" " atIndex:8];\
(string);\
})\

//获取当前时间戳
#define VANCurrentTimeStamp \
({\
NSDate* date = [NSDate dateWithTimeIntervalSinceNow:0];\
NSTimeInterval time=[date timeIntervalSince1970]*1000;\
NSString *timeString = [NSString stringWithFormat:@"%.0f", time];\
(timeString);\
})

//van_dispatch_main_async_safe
#ifndef dispatch_queue_async_safe
#define dispatch_queue_async_safe(queue, block)\
if (dispatch_queue_get_label(DISPATCH_CURRENT_QUEUE_LABEL) == dispatch_queue_get_label(queue)) {\
block();\
} else {\
dispatch_async(queue, block);\
}
#endif

#ifndef van_dispatch_main_async_safe
#define van_dispatch_main_async_safe(block) dispatch_queue_async_safe(dispatch_get_main_queue(), block)
#endif

/*
//当只想在Debug版本中记录调试信息，可以使用VANLog()函数。如果想在所有版本中都记录调试信息可以直接使用VANLog()函数。
#ifdef DEBUG
//__VA_ARGS__代表可变参数宏
#define VANLog(format, ...) VANLog(format, ##__VA_ARGS__)
#else
#define VANLog(format, ...)
#endif
*/





