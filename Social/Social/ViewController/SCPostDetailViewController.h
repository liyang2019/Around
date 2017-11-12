//
//  SCPostDetailViewController.h
//  Social
//
//  Created by Li Yang on 10/7/17.
//  Copyright © 2017 Rice University. All rights reserved.
//

#import <UIKit/UIKit.h>
@class SCPost;

@interface SCPostDetailViewController : UIViewController

- (void)loadDetailViewWithPost:(SCPost *)post;

@end
