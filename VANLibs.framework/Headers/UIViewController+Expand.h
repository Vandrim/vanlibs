
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIViewController (Expand)<UINavigationControllerDelegate>

- (void)back;
- (void)backWithAnimation:(BOOL)animation;
- (void)backToController:(UIViewController *)vc withAnimation:(BOOL)animation;
- (void)backToRootWithAnimation:(BOOL)animation;

@end

NS_ASSUME_NONNULL_END
