
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UITabBar (Expand)

//显示小红点
- (void)showBadgeOnTabbarIndex:(NSInteger)index andAllTabbarCount:(NSInteger)allTabbarAcount;

//隐藏小红点
- (void)hideBadgeOnTabbarIndex:(NSInteger)index;

@end

NS_ASSUME_NONNULL_END
