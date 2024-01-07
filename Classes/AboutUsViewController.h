//
//  AboutUsViewController.h
//  HealthCalculator
//
//  Created by Atikur Rahman on 8/27/11.
//  Copyright 2011 Annanovas IT. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface AboutUsViewController : UIViewController <UITextFieldDelegate>{

	IBOutlet UITextView *about_txt;
	
	IBOutlet UILabel *subjectLabel;
	IBOutlet UILabel *emailLabel;
	IBOutlet UILabel *messageLabel;
	
	IBOutlet UITextField *subject_txt;
	IBOutlet UITextField *email_txt;
	IBOutlet UITextField *message_txt;
	
	
}


-(IBAction) resetTextField;
-(IBAction) sendMessage;
-(IBAction) goHome;


@end
