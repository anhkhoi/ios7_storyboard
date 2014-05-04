#import <UIKit/UIKit.h>
#import "Player.h"
#import "GamePickerViewController.h"

@class PlayerDetailsViewController;

@protocol PlayerDetailsViewControllerDelegate <NSObject>
- (void)playerDetailsViewControllerDidCancel:(PlayerDetailsViewController *)controller;
- (void)playerDetailsViewControllerDidSave:(PlayerDetailsViewController *)controller;
- (void)playerDetailsViewController:(PlayerDetailsViewController *)controller didAddPlayer:(Player *)player;
@end

@interface PlayerDetailsViewController : UITableViewController <GamePickerViewControllerDelegate>

@property (nonatomic, weak) id <PlayerDetailsViewControllerDelegate> delegate;
@property (weak, nonatomic) IBOutlet UITextField *nameTextField;
@property (weak, nonatomic) IBOutlet UILabel *detailLabel;
- (IBAction)cancel:(id)sender;
- (IBAction)done:(id)sender;

@end
