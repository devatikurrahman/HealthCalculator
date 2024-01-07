//
//  HomeViewController.h
//  HealthCalculator
//
//  Created by Atikur Rahman on 8/27/11.
//  Copyright 2011 Annanovas IT. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface HomeViewController : UIViewController {

	IBOutlet UIImageView *logoImg;
	
}

-(IBAction) goCalculateVO2maxPage;
-(IBAction) goResultPage;
-(IBAction) goResearchPage;

@end
