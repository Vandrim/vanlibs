
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef void (^VANNetRequestSuccessBlock) (id data);
typedef void (^VANNetRequestErrorBlock) (NSError *error);

@interface VANVMModel : NSObject

@end

NS_ASSUME_NONNULL_END
