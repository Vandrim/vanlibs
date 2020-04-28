
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface VANUIViewController : UIViewController

/**
 判断vc有没有消失 (不包含进入后台的判断)
*/
@property (assign, nonatomic) BOOL viewDisappear;

/**
 设置屏幕方向
*/
- (void)changeInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation;

/*
 设备方向发生改变
 */
- (void)deviceOrientationDidChange:(UIDeviceOrientation)deviceOrientation;

@end

NS_ASSUME_NONNULL_END
