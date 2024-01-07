//
//  HealthCalculatorAppDelegate.h
//  HealthCalculator
//
//  Created by Atikur Rahman on 8/27/11.
//  Copyright 2011 Annanovas IT. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CalculatorViewControllerOne.h"
#import "CalculatorViewControllerTwo.h"

@interface HealthCalculatorAppDelegate : NSObject <UIApplicationDelegate> {
    
	UIWindow *window;
	
	CalculatorViewControllerOne *cvc1;
	CalculatorViewControllerTwo *cvc2;
	
}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) CalculatorViewControllerOne *cvc1;
@property (nonatomic, retain) CalculatorViewControllerTwo *cvc2;



@end

