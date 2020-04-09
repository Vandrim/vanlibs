
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIButton (Expand)

//开始动画
- (void)startAIAnmation;
- (void)startAIAnmationWithAIStyle:(UIActivityIndicatorViewStyle)AIStyle;

//停止动画
- (void)stopAIAnmationWithTitle:(NSString *)title;

@end

NS_ASSUME_NONNULL_END
