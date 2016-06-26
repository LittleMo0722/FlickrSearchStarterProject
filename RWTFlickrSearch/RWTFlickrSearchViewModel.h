//
//  RWTFlickrSearchViewModel.h
//  RWTFlickrSearch
//
//  Created by apple on 16/6/25.
//  Copyright © 2016年 Colin Eberhardt. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <ReactiveCocoa/ReactiveCocoa.h>
#import "RWTViewModelServices.h"



@interface RWTFlickrSearchViewModel : NSObject
@property (strong, nonatomic) RACCommand *executeSearch;
@property (strong, nonatomic) NSString *searchText;
@property (strong, nonatomic) NSString *title;


- (instancetype) initWithServices:(id<RWTViewModelServices>)services;
@end
