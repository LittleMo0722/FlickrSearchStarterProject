//
//  RWTFlickrPhotoMetadata.m
//  RWTFlickrSearch
//
//  Created by apple on 16/6/26.
//  Copyright © 2016年 Colin Eberhardt. All rights reserved.
//

#import "RWTFlickrPhotoMetadata.h"
#import <ReactiveCocoa/ReactiveCocoa.h>
#import <ReactiveCocoa/RACEXTScope.h>
#import "RWTFlickrPhotoMetadata.h"
@implementation RWTFlickrPhotoMetadata
- (NSString *)description {
    return [NSString stringWithFormat:@"metadata: comments=%lU, faves=%lU",
            self.comments, self.favorites];
}
@end
