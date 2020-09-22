
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIImageView (Expand)

//设置图片
- (void)van_setImageWithURL:(nullable NSString *)url placeholder:(nullable UIImage *)placeholder;
- (void)van_setImageWithURL:(nullable NSString *)url placeholder:(nullable UIImage *)placeholder cache:(BOOL)cache;
- (void)van_setImageWithURL:(nullable NSString *)url placeholder:(nullable UIImage *)placeholder cache:(BOOL)cache completed:(nullable void(^)(UIImage * _Nullable image, NSError * _Nullable error))completedBlock;

@end

NS_ASSUME_NONNULL_END
