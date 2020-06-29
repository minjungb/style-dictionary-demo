
//
// StyleDictionaryColor.h
//
// Do not edit directly
// Generated on Fri, 26 Jun 2020 20:07:22 GMT
//

#import <UIKit/UIKit.h>


typedef NS_ENUM(NSInteger, StyleDictionaryColorName) {
ColorBaseGrayLightest,
ColorBaseGrayLighter,
ColorBaseGrayLight,
ColorBaseGrayBase,
ColorBaseGrayDark,
ColorBaseGrayDarker,
ColorBaseGrayDarkest,
ColorBaseRed,
ColorBaseGreen,
ColorPrimaryBlueLighter,
ColorPrimaryBlueLight,
ColorPrimaryBlueBase,
ColorPrimaryBlueDark,
ColorPrimaryBlueDarker,
ColorSecondaryMintLighter,
ColorSecondaryMintLight,
ColorSecondaryMintBase,
ColorSecondaryMintDark,
ColorSecondaryMintDarker,
ColorFontLightest,
ColorFontLighter,
ColorFontLight,
ColorFontBase,
ColorFontDark,
ColorFontDarker,
ColorFontDarkest
};

@interface StyleDictionaryColor : NSObject
+ (NSArray *)values;
+ (UIColor *)color:(StyleDictionaryColorName)color;
@end
