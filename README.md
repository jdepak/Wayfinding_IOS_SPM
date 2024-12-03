#### ================================
### DATE: 14 September, 2023
### Framework VERSION: 1.6.1
### ================================ #

# Example
To run the example project, clone the [Repo](https://github.com/centraksw/IOS_UImodule_release_directory), and run pod install from the SampleApp directory first.

# Installation

## Cocoapods
[CocoaPods](https://cocoapods.org) is a dependency manager for Cocoa projects. For usage and installation instructions, visit their website.To integrate SpreoUIModule into your Xcode project using CocoaPods, specify it in your Podfile:

```ruby
pod 'SpreoUIPod'
```

## Swift Package Manager

Find the SpreoUIModuleSPM by entered https://github.com/centraksw/UiModuleSPM package url. Use main branch for latest version.

## Manual

Drag the Framework or XCFramework folder into your project. Find bundle bundle files in Framework or XCFramework folder and drag into your project.

# Usage

1. Import `IosUIModule`

```swift
import IosUIModule
```
2. Use Settings

  2.1. The parameter can be changed to open search with a specific category on module start. Doesn't work if showClosestPoiDetails = true and specific category empty or incorrect .
```swift
     let settings = UIModuleSettings.default()
     settings openSearchOnStart = true
     settings.specificCategory = "Entrance"
```
  2.2 The parameter can be used  to present the closest poi from a specific category on start. Doesn't work if openSearchOnStart = true and specific category empty or incorrect.
```swift
    let settings = UIModuleSettings.default()
    settings.showClosestPoiDetails = true
    settings.specificCategory = "Entrance"
```
  2.3 The parameter can be used to start navigation to poi by source id on start. Doesn't work if  openSearchOnStart = true or showClosestPoiDetails = true
```swift
    let settings = UIModuleSettings.default()
    settings.openNavigationOnStart = true
    settings.poiSourceId = "12345"
```
  2.4 The parameter can be used to start navigation to poi by id on start. Doesn't work if  openSearchOnStart = true or showClosestPoiDetails = true
```swift
    let settings = UIModuleSettings.default()
    settings.openNavigationOnStart = true
    settings.poiId = "12345"
```
  2.5 The parameter can be used to open poi details by source id on start. Doesn't work if  openSearchOnStart = true or showClosestPoiDetails = true or openNavigationOnStart = true
```swift
    let settings = UIModuleSettings.default()
    settings.openPoiDetailsOnStart = true
    settings.poiSourceId = "12345"
```
  2.6 The parameter can be used to open poi details by id on start. Doesn't work if  openSearchOnStart = true or showClosestPoiDetails = true or openNavigationOnStart = true
```swift
    let settings = UIModuleSettings.default()
    settings.openPoiDetailsOnStart = true
    settings.poiId = "12345"

```
  2.7 The parameter can be catch notification when user open trirdparty navigation for poi.

    let settings = UIModuleSettings.default()
    settings.thirdPartyNavigationOpenedNotification = { some actions }

  2.8 The block can be run if need open navigation to poi immediately. The first parameter can be poi id or poi source id, the second parameter bool flag is source type or not.
```swift
    let settings = UIModuleSettings.default()
    settings.openNavigationBlock?(poiId, false)
```
  2.9 The block can be run if need open poi details immediately. The first parameter can be poi id or poi source id, the second parameter bool flag is source type or not.
```swift
    let settings = UIModuleSettings.default()
    settings.openPoiDetailsBlock?(poiId, false)
```

3. Get the view controller

```swift
let vc = IosUIModuleKit.initWithApiKey("YOUR_SPREO_API_KEY")
```

4. Add as child view controller

```swift
    addChild(vc)
    view.addSubview(vc.view)
```



# Build requirements:
- Xcode Versions: Xcode 11.x
- iOS 11.0 SDK or later

# Licence

SpreoUIModule is available under the MIT license. See the LICENSE file for more info

Copyright (C) 2023 Spreo LLC. All rights reserved.

