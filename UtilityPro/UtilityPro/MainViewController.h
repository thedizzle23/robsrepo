//
//  MainViewController.h
//  UtilityPro
//
//  Created by Robert DeNicola on 6/7/12.
//  Copyright (c) 2012 Developmental Applications. All rights reserved.
//

#import "FlipsideViewController.h"

@interface MainViewController : UIViewController <FlipsideViewControllerDelegate, UIPopoverControllerDelegate>

@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@property (strong, nonatomic) UIPopoverController *flipsidePopoverController;

@end
