//
//  WSTopicCell.h
//  网易新闻
//
//  Created by WackoSix on 16/1/10.
//  Copyright © 2016年 WackoSix. All rights reserved.
//

#import <UIKit/UIKit.h>
@class WSTopic;

@interface WSTopicCell : UITableViewCell

@property (strong, nonatomic) WSTopic *topic;

+ (CGFloat)rowHeight;

+ (instancetype)topicCellWithTableView:(UITableView *)tableView;

@end
// 版权属于原作者
// http://code4app.com (cn) http://code4app.net (en)
// 发布代码于最专业的源码分享网站: Code4App.com