//
//  CalculatorViewControllerOne.h
//  HealthCalculator
//
//  Created by Atikur Rahman on 8/27/11.
//  Copyright 2011 Annanovas IT. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface CalculatorViewControllerOne : UIViewController {

	IBOutlet UILabel *ageLabel;
	IBOutlet UILabel *pulseLable;
	
	UISlider *slider;
	
	NSInteger age_count;
	NSInteger resting_pulse_count;
	
	UIImageView *slider_popup;
	UILabel *cmLabel;
	
}

-(IBAction) selectMaleFemale:(UIButton *) button;
-(IBAction) increaseDecreaseAge:(UIButton *) button;
-(IBAction) increaseDecreaseRestingPulse:(UIButton *) button;
-(IBAction) goPreviousCalculatorView;
-(IBAction) goNextCalculatorView;
-(IBAction) checkBothCalculatorPageFill;

@end
