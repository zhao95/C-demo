//
//  main.c
//  指针与字符串
//
//  Created by fudo on 16/4/13.
//  Copyright © 2016年 付栋. All rights reserved.
//

/*
 1.常量区
 存放一些常量字符串
 
 2.堆
 对象
 
 3.栈
 存放局部变量
 
 掌握：
 定义字符串的2种方式
 1> 利用数组
 char name[] = "itcast";
 * 特点：字符串里面的字符是可以修改的
 
 2> 利用指针
 char *name = "itcast";
 * 特点：字符串其实是一个常量字符串，里面的字符是不能修改
 */

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    // 字符串变量
    char name[] = "it";// = {'i','t','\0'}
    name[0] = 'T';
    
//    printf("%s\n", name);
    
    
    // "it" == 'i' + 't' + '\0'
    // 指针变量name2指向了字符串的首字符
    
    // 字符串常量
    char *name2 = "it";
    
    *name2 = 'T';
    
    //printf("%c\n", *name2);
    
    printf("%p\n", name2);
    
    printf("%s\n", name2);
    
    return 0;
}




// 定义字符串数组
void test2()
{
    char *name = "jack";
    char *name1 = "rose";
    
    //int ages[5];
    
    // 指针数组（字符串数组）
    char *names[2] = {"jack", "rose"};
    
    
     char name3[] = "jack";
     char name4[] = "rose";
    
    // 二维字符数组（字符串数组）
    char names2[2][10] = {"jack", "rose"};
}




