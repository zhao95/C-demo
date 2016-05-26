//
//  main.c
//  数组指针
//
//  Created by fudo on 16/4/13.
//  Copyright © 2016年 付栋. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

   
    int arr[3] = {1,2,3};
    //数组类型                //arr实质上是一个int类型的指针
    int (*p)[3]= &arr;  //定义数组指针并赋值
    
//    int* p;

    //取值
    printf("%d\n",(*p)[2]);//arr[2];
    
    return 0;
}
