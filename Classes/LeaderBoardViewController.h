//
//  LeaderBoardViewController.h
//  HealthCalculator
//
//  Created by Atikur Rahman on 8/27/11.
//  Copyright 2011 Annanovas IT. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ApplicationCell.h"


@interface LeaderBoardViewController : UIViewController {

	IBOutlet UITableView * listtable;
	ApplicationCell *tmpCell;
    
	NSDictionary *data;
	UILocalizedIndexedCollation *collation;
	
	NSMutableArray *leaderBoardArray;
	
}

@property (nonatomic, retain) NSMutableArray *leaderBoardArray;

@property (nonatomic, retain) UILocalizedIndexedCollation *collation;
@property (nonatomic, assign) IBOutlet ApplicationCell *tmpCell;
@property (nonatomic, retain) NSDictionary *data;


@end
