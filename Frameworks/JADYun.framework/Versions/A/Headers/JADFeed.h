//
//  JADFeed.h
//  JADYun
//
//  Created by wangshuai331 on 2020/8/18.
//  Copyright © 2020 JD.COM. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JADAdBase.h"
#import "JADFeedDelegate.h"

NS_ASSUME_NONNULL_BEGIN

/// A customized UIView to represent a JADYun ad (feed ad).
DEPRECATED_MSG_ATTRIBUTE("No longer supported after 1.2.0; please adopt JADFeedView") @interface JADFeed : JADAdBase

/// the delegate
@property (nonatomic, weak, nullable) id<JADFeedDelegate> delegate;

/// the adView
@property (nonatomic, strong) UIView *adView;

/// The feed's ad placement ID.
- (NSString*)placementID;

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
 * Begins loading the JADFeed content.
 */
- (void)loadAndShow;


@end

NS_ASSUME_NONNULL_END
