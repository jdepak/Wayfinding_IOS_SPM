//
//  IosUIModuleKit.h
//  IosUIModuleKit
//
//  Created by Alexander Lozovoy on 26.01.22.
//  Copyright © 2022 Spreo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "SpreoUIModuleSettings.h"

NS_ASSUME_NONNULL_BEGIN

@class SpreoUIModuleSettings;

////////////////////////////////////////////////////////////////////////////////////////
// Use SpreoUIModuleSettings class before initializating for customizing UI Module
//

@interface IosUIModuleKit : NSObject

+(UIViewController *)initWithApiKey:(NSString *)apiKey;

@end

NS_ASSUME_NONNULL_END
