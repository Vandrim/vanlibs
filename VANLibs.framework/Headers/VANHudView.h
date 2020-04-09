
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface VANHudView : NSObject

//show hud
+ (void)showHUDInView:(UIView *)view animated:(BOOL)animated;

//hide hud
+ (void)hideHUDInView:(UIView *)view animated:(BOOL)animated;

@end

NS_ASSUME_NONNULL_END
