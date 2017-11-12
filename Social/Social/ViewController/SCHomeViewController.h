//
//  SCHomeViewController.h
//  Social
//
//  Created by Li Yang on 9/30/17.
//  Copyright © 2017 Rice University. All rights reserved.
//


#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>


@class SCPost;

@interface SCHomeViewController : UIViewController

- (void)loadResultPageWithPosts:(NSArray <SCPost *>*)posts;

@end
