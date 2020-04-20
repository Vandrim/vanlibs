
#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@interface VANImagePrefetch : NSObject

/*
 *  根据图片地址获取图片
 *  imageURL 单个图片地址
 */
+ (UIImage *)imageForURL:(NSString *)imageURL;

/*
 *  下载图片资源
 *  imageURL 图片地址 为String类型
 */
+ (void)downloadImageWithURL:(NSString *)imageURL
                  andTimeOut:(NSTimeInterval)timeout
                 andProgress:(void(^)(NSInteger receivedSize, NSInteger expectedSize))progressBlock
               andCompletion:(void(^)(UIImage *image))completionBlock;

/*
 *  批量下载图片资源
 *  imageURLs 图片地址数组 成员为String类型
 */
+ (void)downloadImagesWithURLs:(NSArray <NSString *> *)imageURLs
                   andMaxCount:(NSInteger)maxCount
                    andTimeOut:(NSTimeInterval)timeout
                   andProgress:(void(^)(NSUInteger noOfFinishedUrls, NSUInteger noOfTotalUrls))progressBlock
                 andCompletion:(void(^)(void))completionBlock;

/**
 取消缓存
 */
+ (void)cancelPrefetchImages;

@end
