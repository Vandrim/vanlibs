
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIView (Expand)

/**
 *  设置部分圆角(绝对布局)
 *
 *  @param corners 需要设置为圆角的角 UIRectCornerTopLeft | UIRectCornerTopRight | UIRectCornerBottomLeft | UIRectCornerBottomRight | UIRectCornerAllCorners
 *  @param radii   需要设置的圆角大小 例如 CGSizeMake(20.0f, 20.0f)
 */
- (void)addRoundedCorners:(UIRectCorner)corners
                withRadii:(CGSize)radii;


/**
 *  设置部分圆角(相对布局)
 *
 *  @param corners 需要设置为圆角的角 UIRectCornerTopLeft | UIRectCornerTopRight | UIRectCornerBottomLeft | UIRectCornerBottomRight | UIRectCornerAllCorners
 *  @param radii   需要设置的圆角大小 例如 CGSizeMake(20.0f, 20.0f)
 *  @param rect    需要设置的圆角view的rect
 */
- (void)addRoundedCorners:(UIRectCorner)corners
                withRadii:(CGSize)radii
                 viewRect:(CGRect)rect;

/**
 *  单击手势
 */
- (void)tapWithBlock:(void(^ _Nonnull)(id sender))tapBlock;

/**
 *  双击手势
 */
- (void)doubleTapWithBlock:(void(^ _Nonnull)(id sender))doubleTapBlock;

/**
 *  同时添加单击、双击手势
 */
- (void)tapWithBlock:(void(^ _Nonnull)(id sender))tapBlock doubleTapWithBlock:(void(^ _Nonnull)(id sender))doubleTapBlock;

/**
 *  长按手势
 */
- (void)longPressWithBlock:(void(^ _Nonnull)(id sender))longPressBlock;

@end

NS_ASSUME_NONNULL_END
