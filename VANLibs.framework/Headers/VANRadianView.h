
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
typedef NS_ENUM(NSInteger, VANRadianDirection) {
    VANRadianDirectionBottom     = 0,
    VANRadianDirectionTop        = 1,
    VANRadianDirectionLeft       = 2,
    VANRadianDirectionRight      = 3,
};

@interface VANRadianView : UIView

// 圆弧方向, 默认在下方
@property (nonatomic) VANRadianDirection direction;
// 圆弧高/宽, 可为负值。 正值凸, 负值凹
@property (nonatomic) CGFloat radian;

@end

NS_ASSUME_NONNULL_END
