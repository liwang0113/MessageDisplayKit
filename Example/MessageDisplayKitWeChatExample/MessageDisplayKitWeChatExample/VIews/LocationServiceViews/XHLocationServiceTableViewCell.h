//
//  XHLocationServiceTableViewCell.h
//  MessageDisplayExample
//
//  Created by 曾 宪华 on 14-5-25.
//  Copyright (c) 2014年 曾宪华 开发团队(http://iyilunba.com ) 本人QQ:543413507 本人QQ群（142557668）. All rights reserved.
//

#import <UIKit/UIKit.h>

#define kXHNearAvatarSize 50
#define kXHNearAvatarSpacing 10

@interface XHLocationServiceTableViewCell : UITableViewCell

- (void)configureCellWithItem:(id)item atIndexPath:(NSIndexPath *)indexPath;

@end
