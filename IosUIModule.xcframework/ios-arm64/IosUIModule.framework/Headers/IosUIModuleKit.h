//
//  IosUIModuleKit.h
//  IosUIModuleKit
//
//  Created by Alexander Lozovoy on 26.01.22.
//  Copyright © 2022 Spreo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "UIModuleSettings.h"

NS_ASSUME_NONNULL_BEGIN

////////////////////////////////////////////////////////////////////////////////////////
// Use UIModuleSettings class before initializating for customizing UI Module
//


@interface IosUIModuleKit : NSObject

+(UIViewController *)initWithApiKey:(NSString *)apiKey;
+(UIViewController *)initWithApiKey:(NSString *)apiKey settings:(UIModuleSettings *)settings;


@end

NS_ASSUME_NONNULL_END
