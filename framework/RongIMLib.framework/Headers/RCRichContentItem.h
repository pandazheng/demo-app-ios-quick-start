//
//  RCRichContentItem.h
//  RongIMLib
//
//  Created by 杜立召 on 15/4/21.
//  Copyright (c) 2015年 RongCloud. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface RCRichContentItem : NSObject
/** 标题 */
@property(nonatomic, strong)NSString *title;
/** 摘要 */
@property(nonatomic, strong)NSString *digest;
/** 图片URL */
@property(nonatomic, strong)NSString *imageURL;
/** 跳转URL */
@property(nonatomic, strong)NSString *url;
/** 扩展信息 */
@property(nonatomic, strong)NSString *extra;

/**
 根据给定消息创建新消息
 
 @param  title       标题
 @param  digest      摘要
 @param  imageURL    图片URL
 @param  extra       扩展信息
 */
+(instancetype)messageWithTitle:(NSString *) title
                         digest:(NSString *)digest
                       imageURL:(NSString *)imageURL
                          extra:(NSString *)extra;
/**
 *  根据给定消息创建新消息
 *
 *  @param title    标题
 *  @param digest   摘要
 *  @param imageURL 图片URL
 *  @param url      url
 *  @param extra    扩展信息
 *
 *  @return message
 */
+(instancetype)messageWithTitle:(NSString *) title
                         digest:(NSString *)digest
                       imageURL:(NSString *)imageURL
                            url:(NSString *)url
                          extra:(NSString *)extra;
@end
