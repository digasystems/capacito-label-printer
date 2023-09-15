//
//  BRLMInputNumbersViewController.h
//  SDK_Sample_Ver2
//
//  Copyright © 2015 Brother Industries, Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface BRLMInputNumbersViewController : UITableViewController
@property (nonatomic) NSArray<NSString*>* labels;
@property (nonatomic) NSMutableArray<NSNumber*>* values;
@property (nonatomic) void (^decisionHandler)(BRLMInputNumbersViewController* sender);
@end

NS_ASSUME_NONNULL_END
