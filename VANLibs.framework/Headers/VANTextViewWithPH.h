
#import <UIKit/UIKit.h>

@interface VANTextViewWithPH : UITextView

@property (nonatomic,assign)BOOL shouldDrawPlaceholder;

/*!
 * @brief 占位符文本,与UITextField的placeholder功能一致
 */
@property (nonatomic, strong) NSString *placeholder;

/*!
 * @brief 占位符文本颜色
 */
@property (nonatomic, strong) UIColor *placeholderTextColor;

/*!
 * @brief 占位符文本字体
 */
@property (nonatomic, strong) UIFont *placeholderFont;

/*
 使用方法：
 VANTextViewWithPH *tv = [[VANTextViewWithPH alloc]initWithFrame:CGRectZero];
 tv.backgroundColor = [UIColor whiteColor];
 [self.view addSubview:tv];
 [tv mas_makeConstraints:^(MASConstraintMaker *make) {
    make.leading.trailing.top.bottom.equalTo(self.view);
 }];
 tv.textColor = [UIColor colorWithHexString:@"#333333"];
 tv.font = [UIFont systemFontOfSize:16.0f];
 tv.placeholder = @"placeholder";
 tv.placeholderTextColor = RGBACOLOR(163, 163, 163, 1);
 tv.placeholderFont = [UIFont systemFontOfSize:16.0f];
 tv.shouldDrawPlaceholder = YES;
 */

@end
