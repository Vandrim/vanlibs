
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIImageView (Expand)

//设置图片
- (void)van_setImageWithURL:(nullable NSString *)url placeholder:(nullable UIImage *)placeholder;
- (void)van_setImageWithURL:(nullable NSString *)url placeholder:(nullable UIImage *)placeholder useCacheImage:(BOOL)userCache;
- (void)van_setImageWithURL:(nullable NSString *)url placeholder:(nullable UIImage *)placeholder useCacheImage:(BOOL)userCache andSize:(nullable void(^)(CGSize size))sizeBlock;

@end

NS_ASSUME_NONNULL_END
