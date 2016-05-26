//
//  main.c
//  结构体指针
//
//  Created by fudo on 16/4/14.
//  Copyright © 2016年 付栋. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
   
    
    struct Person
    {
        char *name;
        int age;
    };   //声明一个结构体
    ﻿
    struct Person per={"itheima",2};  //定义一个结构体变量,并赋值
    
    struct Person *p=&per;    //定义一个结构体指针并赋值
    
    printf("%d\n",per.age); //用结构体变量访问
    
    printf("%d\n",(*p).age);//普通的方式
    
    printf("%d\n",p->age);//特有的方式
    
    
    return 0;
}
