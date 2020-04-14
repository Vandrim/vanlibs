
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface VANModel : NSObject

//json -> model
+ (instancetype)modelWithDict:(NSDictionary *)dict;

//jsonArray -> modelArray
+ (NSArray *)modelArrayWithDictArray:(NSArray *)dictArray;

@end

NS_ASSUME_NONNULL_END
