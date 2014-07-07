//
//  DetailViewController.h
//  Authentic
//
//  Created by Joe Lu on 7/7/14.
//  Copyright (c) 2014 Authentic. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

