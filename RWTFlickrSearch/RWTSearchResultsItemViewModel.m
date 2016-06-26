//
//  RWTSearchResultsItemViewModel.m
//  RWTFlickrSearch
//
//  Created by apple on 16/6/26.
//  Copyright © 2016年 Colin Eberhardt. All rights reserved.
//

@import Foundation;
#import "RWTFlickrPhoto.h"
#import "RWTViewModelServices.h"
#import <ReactiveCocoa/ReactiveCocoa.h>
#import <ReactiveCocoa/RACEXTScope.h>
#import "RWTFlickrPhotoMetadata.h"
@interface RWTSearchResultsItemViewModel : NSObject

- (instancetype) initWithPhoto:(RWTFlickrPhoto *)photo services:(id<RWTViewModelServices>)services;

@property (nonatomic) BOOL isVisible;
@property (strong, nonatomic) NSString *title;
@property (strong, nonatomic) NSURL *url;
@property (strong, nonatomic) NSNumber *favorites;
@property (strong, nonatomic) NSNumber *comments;



@property (weak, nonatomic) id<RWTViewModelServices> services;
@property (strong, nonatomic) RWTFlickrPhoto *photo;

@end
