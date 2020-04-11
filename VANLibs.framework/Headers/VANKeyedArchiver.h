
#import <Foundation/Foundation.h>

@interface VANKeyedArchiver : NSObject

//获取数据
+ (id)readDataWithFileName:(NSString *)fileName;

//存储数据
+ (void)saveData:(id)data andFileName:(NSString *)fileName;

@end
