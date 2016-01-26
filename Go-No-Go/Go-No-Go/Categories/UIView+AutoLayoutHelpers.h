//
//  UIView+AutoLayoutHelpers.h
//  CPT2
//
//  Created by Charles Forkish on 4/10/14.
//  Copyright (c) 2014 VPD. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (AutoLayoutHelpers)

- (void)layoutChildren:(NSArray *)childViews
            horizontal:(BOOL)horizontal
                margin:(CGFloat)margin
                guides:(NSArray *)guides;

- (void)constrainEqualVerticalSpacingBetweenElements:(NSArray *)layoutElements;
- (void)constrainEqualHorizontalSpacingBetweenChildren:(NSArray *)childViews;
- (void)constrainChildrenToEqualWidths:(NSArray *)childViews;
- (void)constrainChildrenToEqualHeights:(NSArray *)childViews;
- (void)constrainChildrenToEqualSizes:(NSArray *)childViews;
- (void)constrainChildrenToEqualPositions:(NSArray *)childViews;
- (void)constrainChildrenToSameSizeAndPosition:(NSArray *)childViews;

- (void)constrainChildrenToSameCenterX:(NSArray *)childViews;
- (void)constrainChildrenToSameCenterY:(NSArray *)childViews;

- (void)constrainChildToDefaultInsets:(UIView *)childView;
- (void)constrainChildToDefaultHorizontalInsets:(UIView *)childView;
- (void)constrainChild:(UIView *)childView toHorizontalInsets:(UIEdgeInsets)insets;
- (void)constrainChildToDefaultVerticalInsets:(UIView *)childView;
- (void)constrainChild:(UIView *)childView toVerticalInsets:(UIEdgeInsets)insets;
- (void)constrainChildToEqualSize:(UIView *)childView;
- (void)constrainChild:(UIView *)childView toMargins:(UIEdgeInsets)margins;

- (void)constrainWidth:(CGFloat)aWidth;
- (void)constrainHeight:(CGFloat)aHeight;
- (void)constrainSize:(CGSize)aSize;
- (void)constrainPosition:(CGPoint)aPoint;
- (void)constrainEqualWidthAndHeight;
- (void)constrainMinimumHeight:(CGFloat)aHeight;

- (void)centerHorizontallyInView:(UIView *)view;
- (void)centerVerticallyInView:(UIView *)view;
- (void)centerInView:(UIView *)view;
- (void)constrainToTopInParentWithMargin:(CGFloat)margin;
- (void)constrainToBottomInParentWithMargin:(CGFloat)margin;
- (void)constrainToLeftInParentWithMargin:(CGFloat)margin;
- (void)constrainToRightInParentWithMargin:(CGFloat)margin;
- (void)positionBelowElement:(id)layoutElement margin:(CGFloat)margin;
- (void)positionBelowElementWithDefaultMargin:(id)layoutElement;
- (void)positionAboveElement:(id)layoutElement margin:(CGFloat)margin;
- (void)positionAboveElementWithDefaultMargin:(id)layoutElement;
- (void)positionLeftOfElement:(id)layoutElement margin:(CGFloat)margin;
- (void)positionRightOfElement:(id)layoutElement margin:(CGFloat)margin;

- (void)moveOriginToPoint:(CGPoint)point;
- (void)positionFrameBelowView:(UIView *)reference margin:(CGFloat)margin;
- (void)centerFrameHorizontallyInView:(UIView *)reference;
- (void)centerFrameVerticallyInView:(UIView *)reference;

@end
