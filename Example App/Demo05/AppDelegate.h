//
//  AppDelegate.h
//  Demo05
//
//  Created by Pham Nhat Anh on 1/16/17.
//  Copyright © 2017 Pham Nhat Anh. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Google/SignIn.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate, GIDSignInDelegate>

@property (strong, nonatomic) UIWindow *window;


@end

