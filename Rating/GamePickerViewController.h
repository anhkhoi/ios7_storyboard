//
//  GamePickerViewController.h
//  Rating
//
//  Created by Khoi Tran on 5/4/14.
//  Copyright (c) 2014 Khoi Tran. All rights reserved.
//

#import <UIKit/UIKit.h>

@class GamePickerViewController;

@protocol GamePickerViewControllerDelegate <NSObject>
- (void)gamePickerViewController:(GamePickerViewController *)controller didSelectGame:(NSString *)game;
@end

@interface GamePickerViewController : UITableViewController

@property (nonatomic, weak) id <GamePickerViewControllerDelegate> delegate;
@property (nonatomic, strong) NSString *game;

@end
