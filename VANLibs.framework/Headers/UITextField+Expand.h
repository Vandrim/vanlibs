
#import <UIKit/UIKit.h>
@class RACSignal;

NS_ASSUME_NONNULL_BEGIN

@interface UITextField (Expand)

//inputSignal
- (RACSignal *)rac_inputTextSignal;

//clearbutton
- (void)modifyClearButtonWithImage:(UIImage *)image;

@end

NS_ASSUME_NONNULL_END
