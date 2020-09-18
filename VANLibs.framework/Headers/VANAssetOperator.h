
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface VANAssetOperator : NSObject

+ (instancetype _Nonnull )shareOperator;

/**
 *  保存图片到系统相册
 *
 *  @param image  保存的图片
 */
- (void)saveImage:(UIImage *_Nonnull)image result:(void(^_Nullable)(NSError * _Nullable error))resultBlock;

@end
