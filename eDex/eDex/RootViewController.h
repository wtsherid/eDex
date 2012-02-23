//
//  RootViewController.h
//  eDex
//
//  Created by William Sheridan on 2/22/12.
//  Copyright (c) 2012 Indiana University. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RootViewController : UIViewController <UIPageViewControllerDelegate>

@property (strong, nonatomic) UIPageViewController *pageViewController;

@end
