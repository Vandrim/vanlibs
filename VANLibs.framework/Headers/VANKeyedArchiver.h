

#import <Foundation/Foundation.h>

@interface VANKeyedArchiver : NSObject

//获取数据
+(id)getDataWithFileName:(NSString *)fileName;

//存储数据
+(void)saveDataWithData:(id)data andFileName:(NSString *)fileName;

@end
