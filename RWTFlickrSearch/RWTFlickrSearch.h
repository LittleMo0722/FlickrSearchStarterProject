//
//  RWTFlickrSearch.h
//  RWTFlickrSearch
//
//  Created by apple on 16/6/25.
//  Copyright © 2016年 Colin Eberhardt. All rights reserved.
//

#import <ReactiveCocoa/ReactiveCocoa.h>
@import Foundation;

@protocol RWTFlickrSearch <NSObject>

- (RACSignal *)flickrSearchSignal:(NSString *)searchString;

@end