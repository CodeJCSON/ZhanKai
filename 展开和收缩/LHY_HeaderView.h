//
//  LHY_HeaderView.h
//  展开和收缩
//
//  Created by 云媒 on 16/9/29.
//  Copyright © 2016年 云媒. All rights reserved.
//

#import <UIKit/UIKit.h>
@class LHY_HeaderView;

// 协议声明
@protocol LHY_HeaderViewDelegate <NSObject>

- (void)lhyHeaderView:(LHY_HeaderView *)lhyHeaderView didSelectedWithTag:(NSInteger)tag;

@end

@interface LHY_HeaderView : UITableViewHeaderFooterView

@property (nonatomic, strong) UILabel                *sectionTitleLabel; /**< 组标题 */
@property (nonatomic, strong) UIImageView            *indictorImageView; /**< 指示图片 */

@property (nonatomic, weak) id <LHY_HeaderViewDelegate> delegate;        /**< 代理 */

@end
