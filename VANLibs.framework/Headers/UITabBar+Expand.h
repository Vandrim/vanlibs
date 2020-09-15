
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UITabBar (Expand)

//显示小红点
- (void)showDotBadgeOnTabbarIndex:(NSInteger)index andAllTabbarCount:(NSInteger)allTabbarAcount;
- (void)showDotBadgeOnTabbarIndex:(NSInteger)index andAllTabbarCount:(NSInteger)allTabbarAcount andColor:(UIColor *)color;
//移除小红点+数字
- (void)hideDotBadgeOnTabbarIndex:(NSInteger)index;

//显示数字
- (void)showNumBadgeOnTabbarIndex:(NSInteger)index andBadge:(NSInteger)badge andAllTabbarCount:(NSInteger)allTabbarAcount;
- (void)showNumBadgeOnTabbarIndex:(NSInteger)index andBadge:(NSInteger)badge andAllTabbarCount:(NSInteger)allTabbarAcount andColor:(UIColor *)color;
//移除数字+小红点
- (void)hideNumBadgeOnTabbarIndex:(NSInteger)index;

@end

NS_ASSUME_NONNULL_END
