//
//  ViewController.h
//  MakeTheImage
//
//  Created by DESARROLLO on 11/10/14.
//  Copyright (c) 2014 Emmanuel. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

#pragma mark Instancias


@property (weak, nonatomic) IBOutlet UICollectionView *figurasBaseCollection;
@property (weak, nonatomic) IBOutlet UILabel *lblNivel;
@property (weak, nonatomic) IBOutlet UILabel *lblVidas;
@property (weak, nonatomic) IBOutlet UIImageView *imgPequena;
@property (weak, nonatomic) IBOutlet UIImageView *imgGrande;

@property (weak, nonatomic) IBOutlet UIButton *btnAtras;
@property (weak, nonatomic) IBOutlet UIButton *btnListo;

@end

