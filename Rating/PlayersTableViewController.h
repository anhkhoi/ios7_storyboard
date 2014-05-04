//
//  PlayersTableViewController.h
//  Rating
//
//  Created by Khoi Tran on 5/4/14.
//  Copyright (c) 2014 Khoi Tran. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PlayerDetailsViewController.h"

@interface PlayersTableViewController : UITableViewController <PlayerDetailsViewControllerDelegate>

@property (nonatomic, strong) NSMutableArray *players;

@end
