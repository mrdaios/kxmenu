//
//  KxMenu.h
//  kxmenu project
//  https://github.com/kolyvan/kxmenu/
//
//  Created by Kolyvan on 17.05.13.
//

/*
 Copyright (c) 2013 Konstantin Bukreev. All rights reserved.
 
 Redistribution and use in source and binary forms, with or without
 modification, are permitted provided that the following conditions are met:
 
 - Redistributions of source code must retain the above copyright notice, this
 list of conditions and the following disclaimer.
 
 - Redistributions in binary form must reproduce the above copyright notice,
 this list of conditions and the following disclaimer in the documentation
 and/or other materials provided with the distribution.
 
 THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/


#import <Foundation/Foundation.h>

@interface KxMenuItem : NSObject

@property (nonatomic, strong) UIImage         *image;
@property (nonatomic, strong) NSString        *title;
@property (nonatomic, strong) UIColor         *foreColor; //字体颜色
@property (nonatomic, assign) NSTextAlignment alignment;
@property (nonatomic, copy) void (^selectedBlock)(KxMenuItem *item);

+ (instancetype) menuItem:(NSString *) title
                    image:(UIImage *) image
            selectedBlock:(void(^)(KxMenuItem *item))selectedBlock;

@end

@interface KxMenu : NSObject

+ (void) showMenuInView:(UIView *)view
               fromRect:(CGRect)rect
              menuItems:(NSArray *)menuItems;

+ (void) dismissMenu;

/**
 *  kxMenu背景
 *
 */
+ (UIColor *) tintColor;
+ (void) setTintColor: (UIColor *) tintColor;

/**
 *  kxMenu title字体
 *
 */
+ (UIFont *) titleFont;
+ (void) setTitleFont: (UIFont *) titleFont;

/**
 *  kxMenu Item 选中背景
 *
 */
+(UIColor *)selectedColor;
+ (void) setSelecteColor:(UIColor *)selectedColor;

/**
 *  kxMenu 分割线颜色
 *
 */
+(UIColor *)separatoryColor;
+(void)setSeparatoryColor:(UIColor *)separatorColor;

@end
