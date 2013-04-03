//
//  Forecastr+CLLocation.h
//  Forecastr
//
//  Created by Rob Phillips on 4/3/13.
//  Copyright (c) 2013 Rob Phillips. All rights reserved.
//

#import <CoreLocation/CoreLocation.h>
#import "Forecastr.h"

@interface Forecastr (CLLocation)

/**
 * Request the forecast for the given CLLocation and optional time and/or exclusions
 *
 * @param location A CLLocation object generated by CLLocationManager
 * @param time (Optional) The desired time of the forecast in UNIX GMT format
 * @param exclusions (Optional) An array which specifies which data blocks you would like left off the response
 * @param success A block object to be executed when the operation finishes successfully.
 * @param failure A block object to be executed when the operation finishes unsuccessfully.
 *
 * @discussion for many locations, it can be 60 years in the past to 10 years in the future.
 */

- (void)getForecastForLocation:(CLLocation *)location
                          time:(NSNumber *)time
                    exclusions:(NSArray *)exclusions
                       success:(void (^)(id JSON))success
                       failure:(void (^)(NSError *error))failure;

@end