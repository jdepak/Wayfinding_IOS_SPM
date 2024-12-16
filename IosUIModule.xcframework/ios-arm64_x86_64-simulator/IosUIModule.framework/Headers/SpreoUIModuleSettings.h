//
//  SpreoUIModuleSettings.h
//  IosUIModule
//
//  Created by Alexander Lozovoy on 11.07.2022.
//  Copyright © 2022 Spreo. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SpreoUIModuleSettings : NSObject

////////////////////////////////////////////////////////////////////////////////////////
// openSearchOnStart
//
/*!
 * The parameter can be changed to open search with specific category on module start . NO is default.
 * Doesn't work if  showClosestPoiDetails = YES and specific category empty or incorrect
 * \code    [SpreoUIModuleSettings sharedInstance].openSearchOnStart = YES];
 */
@property (nonatomic, assign) BOOL openSearchOnStart;

////////////////////////////////////////////////////////////////////////////////////////
// specificCategory
//
/*!
 * The parameter can be changed to open pois list in search / to present closest poi for specific category. Empty is default
 * \code    [SpreoUIModuleSettings sharedInstance].specificCategory = "Entrance"];
 */
@property (nonatomic, strong) NSString *specificCategory;

////////////////////////////////////////////////////////////////////////////////////////
// showClosestPoiDetails
//
/*!
 * The parameter can be used  to present closest poi from specific category on start. NO is default
 * Doesn't work if  openSearchOnStart = YES and specific category empty or incorrect
 * \code    [SpreoUIModuleSettings sharedInstance].showClosestPoiDetails = YES];
 */
@property (nonatomic, assign) BOOL showClosestPoiDetails;

+ (instancetype)sharedInstance;

@end

NS_ASSUME_NONNULL_END


