//
//  AppDelegate.m
//  展开和收缩
//
//  Created by 云媒 on 16/9/29.
//  Copyright © 2016年 云媒. All rights reserved.
//

#import "AppDelegate.h"
#import "LHY_HomeViewController.h"
@interface AppDelegate ()

@end

@implementation AppDelegate


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    //创建窗口
    self.window = [[UIWindow alloc]initWithFrame:[UIScreen mainScreen].bounds];
    
    self.window.backgroundColor = [UIColor redColor];
    
    
    LHY_HomeViewController *lhyVc = [[LHY_HomeViewController alloc] init];
    
    UINavigationController *nav = [[UINavigationController alloc]initWithRootViewController:lhyVc];
    
    self.window.rootViewController = nav;
    
    [self.window makeKeyAndVisible];
    
    return YES;
}





@end
