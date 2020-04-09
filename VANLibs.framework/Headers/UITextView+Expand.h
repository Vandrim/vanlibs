
#import <UIKit/UIKit.h>
#import "ReactiveObjC.h"

@interface UITextView (Expand)

- (RACSignal *)rac_inputTextSignal;

@end
