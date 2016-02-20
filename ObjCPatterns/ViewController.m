//
//  ViewController.m
//  ObjCPatterns
//
//  Created by Andrey on 20.02.16.
//  Copyright © 2016 Andrey. All rights reserved.
//

#import "ViewController.h"
#import "AlbumView.h"
#import "LibraryAPI.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
//    CGSize avSize = CGSizeMake(self.view.frame.size.width - 200, 300);
//    
//    CGRect avFrame = CGRectMake(20, 100, avSize.width, avSize.height);
//    NSString *albumCover = @"Mimimi";
//    
//    AlbumView *av = [[AlbumView alloc] initWithFrame:avFrame albumCover:albumCover];
//    [self.view addSubview:av];
    
    LibraryAPI *libAPI = [LibraryAPI sharedInstance];
    NSArray *albums = [libAPI albums];
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
