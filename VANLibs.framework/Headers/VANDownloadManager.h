
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface VANDownloadModel : NSObject
/** 请求的url */
@property (nonatomic,copy,readonly) NSString *itemURL;
/** 缓存的文件的路径 */
@property (nonatomic,copy,readonly) NSString *cachePath;
/** 下载进度 */
@property (nonatomic,copy) void(^ _Nullable progressBlock)(unsigned long long receivedSize, unsigned long long expectedSize);
/** 下载结果 */
@property (nonatomic,copy) void(^ _Nullable completionBlock)(NSURL * _Nullable filepath);
@end

@interface VANDownloadManager : NSObject

/*
 *  下载一组资源
 *  itemURLs  资源地址数组 为NSArray类型
 */
- (NSArray<VANDownloadModel *> *)downloadItemsWithURLs:(NSArray *)itemURLs
                                            andTimeOut:(NSTimeInterval)timeout
                                           andMaxCount:(NSInteger)maxCount
                                           andProgress:(void(^)(NSInteger completedCount, NSInteger allCount))progressBlock;

/*
 *  下载单个资源
 *  itemURL  资源地址 为String类型
 */
- (VANDownloadModel *)downloadItemWithURL:(NSString *)itemURL
                               andTimeOut:(NSTimeInterval)timeout
                              andProgress:(void(^)(unsigned long long receivedSize, unsigned long long expectedSize))progressBlock
                            andCompletion:(void(^)(NSURL *filepath))completionBlock;


/**
 暂停某一个下载
 */
- (void)suspendTask:(VANDownloadModel *)item;

/**
 暂停所有的下载
 */
- (void)suspendAllTask;

/**
 恢复某一个下载
 */
- (void)resumeTask:(VANDownloadModel *)item;

/**
 恢复所有暂停的下载
 */
- (void)resumeAllTask;

/**
 *
 *  取消正在下载的任务
 */
- (void)cancelTask:(VANDownloadModel *)item;

/**
 取消所有的下载的任务
 */
- (void)cancelAllTask;

@end

NS_ASSUME_NONNULL_END
