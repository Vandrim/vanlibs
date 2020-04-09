
#import <UIKit/UIKit.h>
@class RACSignal;

@interface UITextView (Expand)

- (RACSignal *)rac_inputTextSignal;

@end
