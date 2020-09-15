
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, VANDateType) {
    VANDateTypeLine = 0,//0000-00-00
    VANDateTypeChinese, //0000年00月00日
    VANDateTypeSecond, //0000-00-00 00:00:00
    VANDateTypeDot, //0000.00.00
};

@interface NSString(Expand)

//MD5
- (NSString *)md5;
- (NSString *)md5WithGBK;

//分词
- (NSArray *)tokenizer;

//去掉中文
- (NSString *)wipeOffChinese;

//计算文字宽度/高度
- (CGFloat)calculateWidthWithFont:(UIFont *)font;
- (CGFloat)calculateHeightWithFont:(UIFont *)font andWidth:(CGFloat)width;

//计算文字大小，可以处理计算带行间距的
- (CGSize)calculateRectWithSize:(CGSize)size
                           font:(UIFont*)font
                    lineSpacing:(CGFloat)lineSpacing;

//json转数组
- (NSArray *)jsonArrayToArray;

//时间戳字符串转时间格式字符串
- (NSString *)timeStampStrToDateStrWithType:(VANDateType)dateType;

//首字母是否大写
- (BOOL)isFirstLetterUppercase;

//首字母大写
- (NSString *)capitalizedFirstLetter;

//判断是否包含中文
- (BOOL)isContainChinese;

//计算是否超过一行
- (BOOL)isMoreThanOneLineWithSize:(CGSize)size
                             font:(UIFont *)font
                     lineSpaceing:(CGFloat)lineSpacing;

//YYYY-MM-dd HH:mm:ss字符串转时间戳
- (NSTimeInterval)timestamp;

//将 0:00:00.00或00:00:00.00 格式转换为毫秒
- (NSTimeInterval)timeInterval;


//定义数字字符串类型
typedef enum {
    NoStyle=0,// Formatted number string:123456789
    DecimalStyle,//Formatted number string:123,456,789
    CurrencyStyle,// Formatted number string:￥123,456,789.00
    PercentStyle,// Formatted number string:-539,222,988%
    ScientificStyle,// Formatted number string:1.23456789E8
    SpellOutStyle,// Formatted number string:一亿二千三百四十五万六千七百八十九
    VANStyle//Formatted number string:123,456,789.00
} NumberStyle;

//格式化数字字符串
- (NSString *)formatWithNumStyle:(NumberStyle)style;

//将汉字转换为拼音
- (NSString *)chineseToPhonetic;

//将金额转成汉字大写
- (NSString *)formatMoneyWithCapitalChineseLetters;

//将字符串转为本地名字相同的图片
- (UIImage *)image;

//是否包含emoji
- (BOOL)contrainsEmoji;

//获取一个文件链接中的结尾文件名称
- (NSString *)fileName;

//判断是否为整形
- (BOOL)isInt;

//判断是否为浮点形
- (BOOL)isFloat;

@end
