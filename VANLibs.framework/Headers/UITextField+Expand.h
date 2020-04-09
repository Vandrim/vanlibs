
#import <UIKit/UIKit.h>
@class RACSignal;

NS_ASSUME_NONNULL_BEGIN

@interface UITextField (Expand)

- (RACSignal *)rac_inputTextSignal;

@end

NS_ASSUME_NONNULL_END
