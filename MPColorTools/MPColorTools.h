//
//  MPColorTools.h
//
//  Created by Daniele Di Bernardo on 23/01/13.
//  Copyright (c) 2013 marzapower. All rights reserved.
//

#import <Foundation/Foundation.h>

#ifndef MP_Color_Tools
#define MP_Color_Tools

#define MP_255_SCALE(a)             (a/255)

#define MP_RGB(r,g,b)               ([UIColor colorWithRed:MP_255_SCALE(r) green:MP_255_SCALE(g) blue:MP_255_SCALE(b) alpha:1])
#define MP_RGBA(r,g,b,a)            ([UIColor colorWithRed:MP_255_SCALE(r) green:MP_255_SCALE(g) blue:MP_255_SCALE(b) alpha:MP_255_SCALE(a)])
#define MP_HSL(h,s,l)               ([UIColor colorWithHue:MP_255_SCALE(h) saturation:MP_255_SCALE(s) lightness:MP_255_SCALE(l) alpha:1])
#define MP_HSLA(h,s,l,a)            ([UIColor colorWithHue:MP_255_SCALE(h) saturation:MP_255_SCALE(s) lightness:MP_255_SCALE(l) alpha:MP_255_SCALE(a)])
#define MP_HSV(h,s,v)               ([UIColor colorWithHue:MP_255_SCALE(h) saturation:MP_255_SCALE(s) brightness:MP_255_SCALE(v) alpha:1])
#define MP_HSVA(h,s,v,a)            ([UIColor colorWithHue:MP_255_SCALE(h) saturation:MP_255_SCALE(s) brightness:MP_255_SCALE(v) alpha:MP_255_SCALE(a)])
#define MP_HSB(h,s,b)               (MP_HSV(h,s,b))
#define MP_HSBA(h,s,b,a)            (MP_HSVA(h,s,b,a))
#define MP_GRAY(g)                  ([UIColor colorWithWhite:MP_255_SCALE(g) alpha:1])
#define MP_GRAYA(g,a)               ([UIColor colorWithWhite:MP_255_SCALE(g) alpha:MP_255_SCALE(a)])


@interface UIColor (MPColorTools)

// Generates a color from HSL values
+ (UIColor *) colorWithHue:(CGFloat)hue saturation:(CGFloat)saturation lightness:(CGFloat)light alpha:(CGFloat)alpha;

// Retrieves HSL values from current color
- (void) getHue:(CGFloat *)hue saturation:(CGFloat *)saturation lightness:(CGFloat *)lightness alpha:(CGFloat *)alpha;

// Lightens a color by a percentage
- (UIColor *) colorLightenedBy:(CGFloat)percent;
// Adds or remove a given amount of lightness to a color
- (UIColor *) colorByAddingLighteness:(CGFloat)quantity;
// Darkens a color by a percentage
- (UIColor *) colorDarkenedBy:(CGFloat)percent;
// Darkens a color by a percentage
- (UIColor *) colorWithLighness:(CGFloat)lightness;
// Darkens a color by a percentage
- (UIColor *) colorWithLighness:(CGFloat)lightness alpha:(CGFloat)alpha;

@end

#endif