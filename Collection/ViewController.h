//
//  ViewController.h
//  Collection
//
//  Created by zmit on 2018/5/10.
//  Copyright © 2018年 zmit. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UICollectionViewDataSource,UICollectionViewDelegate,UICollectionViewDelegateFlowLayout>
@property (nonatomic, retain)UICollectionView *collectionView;
@property (nonatomic, retain)UICollectionView *customLayout;
@property (nonatomic, retain)UICollectionView *section0Array;
@property (nonatomic, strong)UILabel *botlabel;

@end

