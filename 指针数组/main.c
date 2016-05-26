//
//  main.c
//  指针数组
//
//  Created by fudo on 16/4/13.
//  Copyright © 2016年 付栋. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int a1=1,a2=2,a3=3;
    
    int* p[3]={&a1,&a2,&a3}
    
    printf("%p",p[0]);
    
    return 0;
}
