
#import <UIKit/UIKit.h>

@interface UILabel (Expand)

/** 富文本 间距*/
- (void)setText:(NSString *)text lineSpacing:(CGFloat)lineSpacing;
/** 富文本 颜色 字体*/
- (void)setText:(NSString *)text withColor:(UIColor *)color withFont:(UIFont *)font;
/** 富文本 颜色 字体 间距*/
- (void)setText:(NSString *)text withColor:(UIColor *)color withFont:(UIFont *)font lineSpacing:(CGFloat)lineSpacing;

@end
