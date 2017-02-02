//
//  AppDelegate.h
//  DemoForErosNow
//
//  Created by Pankaj Nigam on 02/02/17.
//  Copyright © 2017 Pankaj Nigam. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

