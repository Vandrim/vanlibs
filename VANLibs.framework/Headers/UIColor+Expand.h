
#import <UIKit/UIKit.h>

#define RGBA(r, g, b, a) [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:a]
#define RGB(r, g, b)     [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:1]

@interface UIColor (Expand)

//16进制颜色
+ (UIColor *)colorWithHexString:(NSString *)hexString;

@end
