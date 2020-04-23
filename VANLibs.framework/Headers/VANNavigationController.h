
#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, VANPopGestureRecognizer) {
    VANPopGestureRecognizerFullScreen = 0, //默认全屏手势返回
    VANPopGestureRecognizerSystem = 1, //系统侧边手势返回
    VANPopGestureRecognizerNone = 2, //禁用返回手势
};

@interface VANNavigationController : UINavigationController

//手势返回
@property (nonatomic, assign) VANPopGestureRecognizer popGestureRecognizer;

@end
