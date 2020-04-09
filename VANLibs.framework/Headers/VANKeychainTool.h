
#import <Foundation/Foundation.h>

@interface VANKeychainTool : NSObject

+ (NSMutableDictionary *)getKeychainQuery:(NSString *)service ;

+ (BOOL)addInfoWithKey:(NSString *)key data:(id)data;

+ (id)readInfoWithKey:(NSString *)key;

+ (BOOL)updateInfoWithKey:(NSString *)key data:(id)data;

+ (BOOL)deleteInfoWithKey:(NSString *)key;

@end
