//
//  ViewController.m
//  PowerLog
//
//  Created by wxl on 15/3/30.
//  Copyright (c) 2015年 wxl. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    NSString *str = @"NSLog&PowerLog";
    
    NSLog(@"str = %@", str);
    powerLog(str);
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
