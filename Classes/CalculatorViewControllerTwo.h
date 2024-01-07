//
//  CalculatorViewControllerTwo.h
//  HealthCalculator
//
//  Created by Atikur Rahman on 8/27/11.
//  Copyright 2011 Annanovas IT. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface CalculatorViewControllerTwo : UIViewController <UIPickerViewDelegate> {

	IBOutlet UIView *pickers_view;
	
	IBOutlet UIPickerView *pickerView1;
	IBOutlet UIPickerView *pickerView2;
	
	IBOutlet UILabel *picker1Label;
	IBOutlet UILabel *picker2Label;
	
	NSArray *picker1Array;
	NSArray *picker2Array;
	
	
	
	
}

-(IBAction) showPickerView:(UIButton *) button;
-(IBAction) hidePickerView;
-(IBAction) goPreviousCalculatorView;
-(IBAction) calculateVO2max;
-(IBAction) minuteAction:(UIButton *) button;

@end
