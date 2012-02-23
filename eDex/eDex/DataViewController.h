//
//  DataViewController.h
//  eDex
//
//  Created by William Sheridan on 2/22/12.
//  Copyright (c) 2012 Indiana University. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DataViewController : UIViewController
@property (strong, nonatomic) IBOutlet UILabel *dataLabel;
@property (strong, nonatomic) id dataObject;
@end
