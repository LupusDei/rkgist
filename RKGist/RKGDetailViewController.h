//
//  RKGDetailViewController.h
//  RKGist
//
//  Created by Justin Martin on 2/4/14.
//  Copyright (c) 2014 RestKit. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RKGDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
