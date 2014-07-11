//
//  JMPageNavbar.h
//  JMTwitterPagingViewer
//
//  Created by Jigar M on 09/07/14.
//  Copyright (c) 2014 Jigar M. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface JMPageNavbar : UIView

/**
 *
 */
@property (nonatomic, strong) NSArray *titles;

/**
 *
 */
@property (nonatomic, assign) NSInteger currentPage;

/**
 *  
 */
@property (nonatomic, assign) CGPoint contentOffset;

/**
 *
 */
- (void)reloadData;

@end
