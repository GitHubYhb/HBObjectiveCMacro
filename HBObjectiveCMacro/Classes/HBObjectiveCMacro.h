//
//  HBObjectiveCMacro.h
//  Pods
//
//  Created by 尤鸿斌 on 2019/11/6.
//

#ifndef HBObjectiveCMacro_h
#define HBObjectiveCMacro_h

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#define kScreenWidth ([UIScreen mainScreen].bounds.size.width)
#define kScreenHeight ([UIScreen mainScreen].bounds.size.height)

#define  Frame(x,y,w,h)         CGRectMake((x), (y), (w), (h))
#define  Point(x,y)             CGPointMake((x), (y))
#define  Size(w,h)              CGSizeMake((w), (h))

#define  Font(font)             [UIFont fontWithName:@"Helvetica" size:(font)]
#define  Image(imageName)       [UIImage imageNamed:(imageName)]
#define  URL(str)               [NSURL URLWithString:(str)]


#define     CurVersion          ([[[UIDevice currentDevice] systemVersion] floatValue])

#define ColorWithHex(s)  [UIColor colorWithRed:(((s & 0xFF0000) >> 16))/255.0green:(((s &0xFF00) >>8))/255.0blue:((s &0xFF))/255.0alpha:1.0]


// 判断是否是iPhone X
#define iPhoneX \
({BOOL isPhoneX = NO;\
if (@available(iOS 11.0, *)) {\
isPhoneX = [[UIApplication sharedApplication] delegate].window.safeAreaInsets.bottom > 0.0;\
}\
(isPhoneX);})

#define iPhone_PLUS ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1242, 2208), [[UIScreen mainScreen] currentMode].size) : NO)

// 状态栏高度
#define STATUS_BAR_HEIGHT (iPhoneX ? 44.f : 20.f)
// 导航栏高度
#define NAV_HEIGHT (iPhoneX ? 88.f : 64.f)
// tabBar高度
#define TAB_BAR_HEIGHT (iPhoneX ? (49.f+34.f) : 49.f)
// home indicator
#define HOME_INDICATOR_HEIGHT (iPhoneX ? 34.f : 0.f)


#endif /* HBObjectiveCMacro_h */
