//
//  DownloadViewController.h
//  SpreoFloorFinder
//
//  Created by Spreo_MacMini on 4/22/15.
//  Copyright (c) 2015 Spreo_MacMini. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface DataDownloadViewController : UIViewController

+ (UINavigationController *)startWithApiKey:(NSString *)apiKey;

@end
