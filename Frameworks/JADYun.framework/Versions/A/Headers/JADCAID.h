//
//  JADCAID.h
//  JADYun
//
//  Created by wangshuai331 on 2021/3/10.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JADCAID : NSObject<NSCoding>

/// CAID 值
@property (nonatomic, copy) NSString *caidValue;

/// CAID 算法版本
@property (nonatomic, copy) NSString *caidVersion;


@end

NS_ASSUME_NONNULL_END
