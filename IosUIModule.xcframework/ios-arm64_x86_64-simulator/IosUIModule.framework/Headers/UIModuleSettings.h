//
//  UIModuleSettings.h
//  IosUIModule
//
//  Created by Alexander Lozovoy on 11.07.2022.
//  Copyright © 2022 Spreo. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIModuleSettings : NSObject

////////////////////////////////////////////////////////////////////////////////////////
// openSearchOnStart
//
/*!
 * The parameter can be changed to open search with specific category on module start . NO is default.
 * Doesn't work if  showClosestPoiDetails = YES and specific category empty or incorrect
 * \code    SpreoUIModuleSettings *settings = [SpreoUIModuleSettings defaultSettings];
 * \code    settings.openSearchOnStart = YES;
 */
@property (nonatomic, assign) BOOL openSearchOnStart;

////////////////////////////////////////////////////////////////////////////////////////
// specificCategory
//
/*!
 * The parameter can be changed to open pois list in search / to present closest poi for specific category. Empty is default
 * \code    SpreoUIModuleSettings *settings = [SpreoUIModuleSettings defaultSettings];
 * \code    settings.specificCategory = "Entrance";
 */
@property (nonatomic, nullable) NSString *specificCategory;

////////////////////////////////////////////////////////////////////////////////////////
// showClosestPoiDetails
//
/*!
 * The parameter can be used  to present closest poi from specific category on start. NO is default
 * Doesn't work if  openSearchOnStart = YES and specific category empty or incorrect
 * \code    SpreoUIModuleSettings *settings = [SpreoUIModuleSettings defaultSettings];
 * \code    settings.showClosestPoiDetails = YES;
 */
@property (nonatomic, assign) BOOL showClosestPoiDetails;


////////////////////////////////////////////////////////////////////////////////////////
// openNavigationOnStart
//
/*!
 * The parameter can be used  to present closest poi from specific category on start. NO is default
 * Doesn't work if  openSearchOnStart = YES or showClosestPoiDetails = YES
 * \code    SpreoUIModuleSettings *settings = [SpreoUIModuleSettings defaultSettings];
 * \code    settings.openNavigationOnStart = YES;
 */
@property (nonatomic, assign) BOOL openNavigationOnStart;

////////////////////////////////////////////////////////////////////////////////////////
// openPoiDetailsOnStart
//
/*!
 * The parameter can be used  to present open poi details on start. NO is default
 * Doesn't work if  openSearchOnStart = YES or showClosestPoiDetails = YES or openNavigationOnStart = YES
 * \code    SpreoUIModuleSettings *settings = [SpreoUIModuleSettings defaultSettings];
 * \code    settings.openPoiDetailsOnStart = YES;
 */
@property (nonatomic, assign) BOOL openPoiDetailsOnStart;


////////////////////////////////////////////////////////////////////////////////////////
// poiSourceId
//
/*!
 * The parameter can be used to start navigation to poi by source id or open poi details on start.
 * Doesn't work if  openSearchOnStart = YES or showClosestPoiDetails = YES
 * \code    SpreoUIModuleSettings *settings = [SpreoUIModuleSettings defaultSettings];
 * \code    settings.poiSourceId = @"123456";
 */

@property (nonatomic, nullable) NSString *poiSourceId;


////////////////////////////////////////////////////////////////////////////////////////
// poiId
//
/*!
 * The parameter can be used to start navigation to poi by id or open poi details on start.
 * Doesn't work if  openSearchOnStart = YES or showClosestPoiDetails = YES
 * \code    SpreoUIModuleSettings *settings = [SpreoUIModuleSettings defaultSettings];
 * \code    settings.poiId = @"POIID";
 */

@property (nonatomic, nullable) NSString *poiId;

////////////////////////////////////////////////////////////////////////////////////////
// thirdPartyNavigationOpenedNotification
//
/*!
 * The parameter can be catch notification when user open trirdparty navigation for poi.
 * \code    SpreoUIModuleSettings *settings = [SpreoUIModuleSettings defaultSettings];
 * \code    settings.thirdPartyNavigationOpenedNotification = ^(NSString *poiId){ // do actions };
 */

typedef void(^ThirdPartyNavigationOpenedNotification)(NSString * _Nullable poiId);
@property (nonatomic, nullable) ThirdPartyNavigationOpenedNotification thirdPartyNavigationOpenedNotification;

////////////////////////////////////////////////////////////////////////////////////////
// openNavigationBlock
//
/*!
 * The block can be run if need open navigation to poi immediately. The first parameter can be poi id or poi source id, the second parameter bool flag is source type or not.
 * \code    SpreoUIModuleSettings *settings = [SpreoUIModuleSettings defaultSettings];
 * \code    settings.openNavigationBlock(poiSourceId, YES));
 */

typedef void(^OpenNavigationBlock)( NSString * _Nullable poiId, BOOL source);
@property (nonatomic, nullable) OpenNavigationBlock openNavigationBlock;

////////////////////////////////////////////////////////////////////////////////////////
// openPoiDetailsBlock
//
/*!
 * The block can be run if need open poi details immediately. The first parameter can be poi id or poi source id, the second parameter bool flag is source type or not.
 * \code    SpreoUIModuleSettings *settings = [SpreoUIModuleSettings defaultSettings];
 * \code    settings.openPoiDetailsBlock(poiSourceId, YES));
 */

typedef void(^OpenPoiDetailsBlock)( NSString * _Nullable poiId, BOOL source);
@property (nonatomic, nullable) OpenPoiDetailsBlock openPoiDetailsBlock;

+(UIModuleSettings *)defaultSettings;




@end

NS_ASSUME_NONNULL_END


