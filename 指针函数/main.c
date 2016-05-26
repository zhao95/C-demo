//
//  main.c
//  指针函数
//
//  Created by fudo on 16/4/13.
//  Copyright © 2016年 付栋. All rights reserved.
//

#include <stdio.h>

//定义一个指针函数
int *add(int *p)
{
    return p;
}

int main(int argc, const char * argv[]) {
    
    int a = 1;
    int *p = &a;
    int *p1 = add(p); //有返回值就接
    printf("%p\n%p\n",p,p1);
    return 0;
}
