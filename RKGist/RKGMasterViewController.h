//
//  RKGMasterViewController.h
//  RKGist
//
//  Created by Justin Martin on 2/4/14.
//  Copyright (c) 2014 RestKit. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface RKGMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
