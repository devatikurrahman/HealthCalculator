//
//  ScienceViewController.h
//  HealthCalculator
//
//  Created by Atikur Rahman on 8/27/11.
//  Copyright 2011 Annanovas IT. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface ScienceViewController : UIViewController {

	IBOutlet UITextView *text_view;
	
	NSDictionary *scienceInfo;
	
}

@property(nonatomic, retain) NSDictionary *scienceInfo;

- (void) reloadInfo;

@end
