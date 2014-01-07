//
//  WeatherAppDelegate.h
//  Weather
//
//  Created by Jyothidhar Pulakunta on 1/6/14.
//  Copyright (c) 2014 Jyothidhar Pulakunta. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WeatherAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
