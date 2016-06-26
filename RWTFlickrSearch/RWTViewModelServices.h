//
//  RWTViewModelServices.h
//  RWTFlickrSearch
//
//  Created by apple on 16/6/25.
//  Copyright © 2016年 Colin Eberhardt. All rights reserved.
//

@import Foundation;
#import "RWTFlickrSearch.h"

@protocol RWTViewModelServices <NSObject>

- (id<RWTFlickrSearch>) getFlickrSearchService;
- (void)pushViewModel:(id)viewModel;

@end
