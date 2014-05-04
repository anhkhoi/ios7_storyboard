//
//  PlayerCell.h
//  Rating
//
//  Created by Khoi Tran on 5/4/14.
//  Copyright (c) 2014 Khoi Tran. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PlayerCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UILabel *nameLabel;
@property (weak, nonatomic) IBOutlet UILabel *gameLabel;
@property (weak, nonatomic) IBOutlet UIImageView *ratingImageView;

@end
