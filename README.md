TwitterPagging
==============

A Twitter Like Navigation Bar..
Use this [Twitter Pagging](https://github.com/duowan/TwitterPaggingViewer) Library for this Sample and create new Library from this.

Working on Other Stuff.

## Description

This is a Twitter Like Navigation bar..

* Source Code: [https://github.com/JigarM/TwitterPagging](https://github.com/JigarM/TwitterPagging)
* Sample TwitterPagging Example: [https://github.com/JigarM/TwitterPagging/tree/master/JMTwitterPagingViewer](https://github.com/JigarM/TwitterPagging/tree/master/JMTwitterPagingViewer)

## Requirements

* iOS 6.0+ 
* ARC

## Reference

See Sample Here : https://github.com/JigarM/TwitterPagging

=========================

<p align="center" >
<a href="http://s1282.photobucket.com/user/jigarm_0809/media/iOSSimulatorScreenshot11-Jul-201470659pm_zps211b4bb4.png.html" target="_blank"><img src="http://i1282.photobucket.com/albums/a534/jigarm_0809/iOSSimulatorScreenshot11-Jul-201470659pm_zps211b4bb4.png" border="0" alt="Home - Twitter Pagging photo iOSSimulatorScreenshot11-Jul-201470659pm_zps211b4bb4.png" width="266" height="500"/></a>
<a href="http://s1282.photobucket.com/user/jigarm_0809/media/iOSSimulatorScreenshot11-Jul-201470701pm_zps2d43218e.png.html" target="_blank"><img src="http://i1282.photobucket.com/albums/a534/jigarm_0809/iOSSimulatorScreenshot11-Jul-201470701pm_zps2d43218e.png" border="0" alt="Friends - Twitter Pagging photo iOSSimulatorScreenshot11-Jul-201470701pm_zps2d43218e.png" width="266" height="500"/></a>
</p>
=========================

## Usage : 

          JMTwitterPage *twitterPaggingViewer = [[JMTwitterPage alloc] init];
          
          NSMutableArray *viewControllers = [[NSMutableArray alloc] initWithCapacity:7];
          NSArray *titles = @[@"Home", @"Friend", @"Mention", @"Message", @"Retweet", @"Mine", @"Trends"];
          
          UIStoryboard *storyboard = [UIStoryboard storyboardWithName:@"Main" bundle:nil];
          ViewController *controller1 = [storyboard instantiateViewControllerWithIdentifier:@"Controller1"];
          ViewController *controller2 = [storyboard instantiateViewControllerWithIdentifier:@"Controller2"];
          ViewController *controller3 = [storyboard instantiateViewControllerWithIdentifier:@"Controller1"];
          ViewController *controller4 = [storyboard instantiateViewControllerWithIdentifier:@"Controller2"];
          ViewController *controller5 = [storyboard instantiateViewControllerWithIdentifier:@"Controller1"];
          ViewController *controller6 = [storyboard instantiateViewControllerWithIdentifier:@"Controller2"];
          ViewController *controller7 = [storyboard instantiateViewControllerWithIdentifier:@"Controller1"];
          
          controller1.title = [titles objectAtIndex:0];
          controller2.title = [titles objectAtIndex:1];
          controller3.title = [titles objectAtIndex:2];
          controller4.title = [titles objectAtIndex:3];
          controller5.title = [titles objectAtIndex:4];
          controller6.title = [titles objectAtIndex:5];
          controller7.title = [titles objectAtIndex:6];
          
          [viewControllers addObject:controller1];
          [viewControllers addObject:controller2];
          [viewControllers addObject:controller3];
          [viewControllers addObject:controller4];
          [viewControllers addObject:controller5];
          [viewControllers addObject:controller6];
          [viewControllers addObject:controller7];
          
          twitterPaggingViewer.viewControllers = viewControllers;
          
          twitterPaggingViewer.didChangedPageCompleted = ^(NSInteger cuurentPage, NSString *title) {
              NSLog(@"cuurentPage : %ld on title : %@", (long)cuurentPage, title);
          };
	
###LICENCE

      The MIT License (MIT)
      
      Copyright (c) 2014 Jigar M
      
      Permission is hereby granted, free of charge, to any person obtaining a copy
      of this software and associated documentation files (the "Software"), to deal
      in the Software without restriction, including without limitation the rights
      to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
      copies of the Software, and to permit persons to whom the Software is
      furnished to do so, subject to the following conditions:
      
      The above copyright notice and this permission notice shall be included in all
      copies or substantial portions of the Software.
      
      THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
      IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
      FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
      AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
      LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
      OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
      SOFTWARE.

TODO
----
* Add Navigation Functionality.
* Add Tabbar like Tweeter App.
