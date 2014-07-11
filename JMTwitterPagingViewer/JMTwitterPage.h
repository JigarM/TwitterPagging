//
//  JMTwitterPage.h
//  JMTwitterPagingViewer
//
//  Created by Jigar M on 09/07/14.
//  Copyright (c) 2014 Jigar M. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^XHDidChangedPageBlock)(NSInteger currentPage, NSString *title);

@interface JMTwitterPage : UIViewController

@property (nonatomic, copy) XHDidChangedPageBlock didChangedPageCompleted;
@property (nonatomic, strong) NSArray *viewControllers;

- (NSInteger)getCurrentPageIndex;
- (void)reloadData;

@end
