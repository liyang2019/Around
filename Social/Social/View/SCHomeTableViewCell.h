//
//  SCHomeTableViewCell.h
//  Social
//
//  Created by Li Yang on 9/30/17.
//  Copyright © 2017 Rice University. All rights reserved.
//

#import <UIKit/UIKit.h>
@class SCPost;

@interface SCHomeTableViewCell : UITableViewCell
- (void)loadCellWithPost:(SCPost *)post;
+ (CGFloat)cellHeight;

@end
