//
//  CustomCollectionCell.h
//  AC Photo
//
//  Created by noname on 8/4/13.
//  Copyright (c) 2013 test. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CustomCollectionCell : UICollectionViewCell

@property (nonatomic , retain) UIImageView *imageView;
@property (nonatomic , retain) UIView *selectionView;

- (void)setupViews;

@end
