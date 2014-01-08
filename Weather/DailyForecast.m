//
//  DailyForecast.m
//  Weather
//
//  Created by Jyothidhar Pulakunta on 1/6/14.
//  Copyright (c) 2014 Jyothidhar Pulakunta. All rights reserved.
//

#import "DailyForecast.h"

@implementation DailyForecast

+ (NSDictionary *)JSONKeyPathsByPropertyKey {
    // 1
    NSMutableDictionary *paths = [[super JSONKeyPathsByPropertyKey] mutableCopy];
    // 2
    paths[@"tempHigh"] = @"temp.max";
    paths[@"tempLow"] = @"temp.min";
    // 3
    return paths;
}

@end
