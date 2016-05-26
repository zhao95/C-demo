//
//  main.c
//  数组
//
//  Created by fudo on 16/4/13.
//  Copyright © 2016年 付栋. All rights reserved.
//

//#include <stdio.h>
//
//int main(int argc, const char * argv[]) {
//   
//    int arr[3] = {1,2,3}; //定义的同时进行初始化
//    
//    arr[1]; //取值
//    
//    arr[1] = 10;//赋值
//    
//    return 0;
//}

#include <stdio.h>

int main(){
    int arr[3] = {1,2,3};
    
    int a = arr[2];
    
    arr[1] = 20;
    
    printf("%d.%d",a,arr[1]);
    
    
    
    
}