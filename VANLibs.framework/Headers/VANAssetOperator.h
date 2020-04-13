
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface VANAssetOperator : NSObject

+ (instancetype _Nonnull )shareOperator;

/**
 *  保存图片到系统相册
 *
 *  @param image  保存的图片
 */
- (void)saveImage:(UIImage *_Nonnull)image identifier:(NSString * _Nullable)identifier result:(void(^_Nullable)(NSError * _Nullable error))resultBlock;

/**
 *  保存视频到系统相册
 *
 *  @param videoPath  保存的视频本地路径
 */
- (void)saveVideo:(NSString *_Nonnull)videoPath identifier:(NSString * _Nullable)identifier result:(void(^_Nullable)(NSError * _Nullable error))resultBlock;

/**
 *  删除系统相册中的文件【只能删除自己保存的文件】
 *
 */
- (void)deleteFileWithIdentifier:(NSString * _Nonnull)identifier result:(void(^_Nullable)(NSError * _Nullable error))resultBlock;

@end
