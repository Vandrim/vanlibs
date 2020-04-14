
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
typedef NS_ENUM(NSInteger, VANPopStyle) {
    VANPopStyleFromCenter = 0, //中间弹出
    VANPopStyleFromBottom = 1, //底部弹出
};
@interface VANPopView : UIView

//popView
@property(nonatomic,strong) IBOutlet UIView *popView;

//show
- (void)showWithStyle:(VANPopStyle)popStyle;

//show
- (void)showWithStyle:(VANPopStyle)popStyle view:(UIView *)view;

//show
- (void)showWithStyle:(VANPopStyle)popStyle view:(UIView *)view animation:(BOOL)animation completion:(void(^_Nullable)(NSError * _Nullable error))completion;

//show
- (void)showWithStyle:(VANPopStyle)popStyle view:(UIView *)view animation:(BOOL)animation remove:(BOOL)removeOPV completion:(void(^_Nullable)(NSError * _Nullable error))completion;

//hide
- (void)hide;

//hide
- (void)hideWithAnimation:(BOOL)animation completion:(void(^_Nullable)(NSError * _Nullable error))completion;

//适配
- (void)adapter;

@end

NS_ASSUME_NONNULL_END
