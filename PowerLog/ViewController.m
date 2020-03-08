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
    
    NSString *str = @"NSLog";
    NSLog(@"str = %@", str);
    str = @"PowerLog";
    PowerLog(str);
    
    CGRect rect = CGRectMake(0, 0, 320, 640);
    NSLog(@"%@", NSStringFromCGRect(rect));
    PowerLog(rect);
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
