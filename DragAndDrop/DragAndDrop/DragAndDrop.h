//
//  DragAndDrop.h
//  DragAndDrop
//
//  Created by Alberto Guerrero Martin on 02/04/14.
//  Copyright (c) 2014 albertoguerreromartin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface DragAndDrop : NSObject

@property (nonatomic,readonly) UIImage *originalImage;

- (id)initWithImage:(UIImage *)image;
- (UIImage *)grayScaleImage;
- (UIImage *)oldImageWithIntensity:(CGFloat)level;

@end
