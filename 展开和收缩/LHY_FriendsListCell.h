//
//  LHY_FriendsListCell.h
//  展开和收缩
//
//  Created by 云媒 on 16/9/29.
//  Copyright © 2016年 云媒. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LHY_FriendsListCell : UITableViewCell


@property (strong, nonatomic) UIImageView  *headPortraitImageView; /**< 头像 */
@property (strong, nonatomic) UILabel     *nicknameLabel;         /**< 昵称 */
@property (strong, nonatomic) UILabel     *signatureLabel;        /**< 签名 */

@end
