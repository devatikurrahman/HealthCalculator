//
//  ScienceGalleryViewController.h
//  HealthCalculator
//
//  Created by Atikur Rahman on 8/27/11.
//  Copyright 2011 Annanovas IT. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ScienceViewController.h"


@interface ScienceGalleryViewController : UIViewController <UIScrollViewDelegate> {

	IBOutlet UIScrollView *scrollView;
	
	NSDictionary *data;
	NSArray *itemArray;
	
	
	NSUInteger kNumberOfPages;
	
	NSInteger fromSection;
	NSInteger fromIndex;
	
	NSInteger current_page;
	
	ScienceViewController *_detailsView1;
    ScienceViewController *_detailsView2;
    ScienceViewController *_detailsView3;
	
	int refPage, currentPage;
	
	IBOutlet UIPageControl *pageControl;
	
}

@property (nonatomic ,retain) NSDictionary *data;
@property (nonatomic ,retain) NSArray *itemArray;
@property (nonatomic, retain) IBOutlet UIPageControl *pageControl;

- (void)displayLabelsAroundIndex:(NSInteger)index;
- (void)replaceHiddenLabels;
-(IBAction) goHome;

@end
