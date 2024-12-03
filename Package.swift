// swift-tools-version: 5.6
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "SpreoUIModuleSPM",
    platforms: [
        .iOS(.v13)
    ],
    products: [
        .library(
            name: "SpreoUIModuleSPM",
            type: .dynamic,
            targets: ["SpreoUIModuleSPM"]
        )
    ],
    targets: [
        .binaryTarget(name: "IosUIModule", path: "IosUIModule.xcframework"),
        .target(name: "SpreoUIModuleSPM",
                dependencies: [
                    .target(name: "IosUIModule", condition: .when(platforms: .some([.iOS])))
                ],
                path: "Sources/SpreoUIModuleSPM"
        )
    ]
)
