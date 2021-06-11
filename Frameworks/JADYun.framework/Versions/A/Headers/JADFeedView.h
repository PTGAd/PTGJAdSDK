//
//  JADFeedView.h
//  JADYun
//
//  Created by wangshuai331 on 2020/8/18.
//  Copyright © 2020 JD.COM. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JADFeedViewDelegate.h"

NS_ASSUME_NONNULL_BEGIN

/// A customized UIView to represent a JADYun ad (feed ad).
@interface JADFeedView : UIView

/**
 * The feedView's ad placement ID.
 * 属性：代码位ID
 */
@property (nonatomic, strong, readonly, nullable) NSString *placementID;

/**
 * The feedView's ad delegate.
 * 信息流视图 delegate
 */
@property (nonatomic, weak, nullable) id<JADFeedViewDelegate> delegate;

/**
 * Ad price
 * 广告价格（单位：分）
 */
@property (nonatomic, assign, readonly) NSInteger price;

/**
 * 初始化信息流广告
 * @param placementID 代码位ID
 * @param adSize 代码位大小
 * @param isSupportDeepLink 是否支持 deep link 默认为 YES
 */
- (instancetype)initWithPlacementID:(NSString *)placementID
                             adSize:(CGSize)adSize
                  isSupportDeepLink:(BOOL)isSupportDeepLink;

/**
 * Load feed view ad data.
 * 加载信息流广告
*/
- (void)loadAdData;


@end

NS_ASSUME_NONNULL_END
