//
//  JHStringSize.h
//  JHKit
//
//  Created by HaoCold on 2023/1/31.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JHStringSize : NSObject

/// 计算文字的高度，宽度固定
/// text 为 NSString 或 NSAttributedString
+ (CGFloat)height:(id)text font:(UIFont *)font fixedWidth:(CGFloat)width;

/// 计算文字的宽度，高度固定
/// text 为 NSString 或 NSAttributedString
+ (CGFloat)width:(id)text font:(UIFont *)font fixedHeight:(CGFloat)height;

@end

NS_ASSUME_NONNULL_END
