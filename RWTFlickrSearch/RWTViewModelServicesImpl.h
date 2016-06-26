//
//  RWTViewModelServicesImpl.h
//  RWTFlickrSearch
//
//  Created by apple on 16/6/25.
//  Copyright © 2016年 Colin Eberhardt. All rights reserved.
//

@import Foundation;
#import "RWTViewModelServices.h"

@interface RWTViewModelServicesImpl : NSObject <RWTViewModelServices>
- (instancetype)initWithNavigationController:(UINavigationController *)navigationController;

@end
