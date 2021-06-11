//
//  JADInterstitialAd.h
//  JADYun
//
//  Created by wangshuai331 on 2021/1/20.
//

#import <Foundation/Foundation.h>
#import "JADInterstitialAdDelegate.h"

NS_ASSUME_NONNULL_BEGIN

/// A customized Ad to represent a JADYun ad (interstitial ad).
@interface JADInterstitialAd : NSObject

/**
 * The interstitialView's ad placement ID.
 * 属性：代码位ID
 */
@property (nonatomic, strong, readonly, nullable) NSString *placementID;

/**
 * The interstitialView's ad delegate.
 * 插屏视图 delegate
 */
@property (nonatomic, weak) id<JADInterstitialAdDelegate> delegate;

/**
 * Ad price
 * 广告价格（单位：分）
 */
@property (nonatomic, assign, readonly) NSInteger price;

/**
 * 初始化插屏广告view
 * @param placementID 代码位ID
 * @param adSize 代码位的大小，请确保：size 的 width : height = 1:1 or 2:3 or 3:2
 * @param isSupportDeepLink 是否支持 deep link 默认为 YES
 */
- (instancetype)initWithPlacementID:(NSString *)placementID
                             adSize:(CGSize)adSize
                  isSupportDeepLink:(BOOL)isSupportDeepLink;
/**
 * Load interstitial view ad data.
 * 加载插屏广告
 */
- (void)loadAdData;

/**
 * Display interstitial view ad.
 * @param rootViewController : root view controller for displaying ad.
 */
- (void)showAdFromRootViewController:(UIViewController *)rootViewController;

@end

NS_ASSUME_NONNULL_END
