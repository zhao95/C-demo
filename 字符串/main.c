//
//  main.c
//  字符串
//
//  Created by fudo on 16/4/13.
//  Copyright © 2016年 付栋. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
   
    char arr[]="abc";//或者char arr[] = {'a','b','c','\0'};
    
//    printf("%c\n",*arr);
    ed
    printf("%s\n",arr);//%s表示从当前给定的地址输出,直到遇到'\0'结束!
    
    printf("%s\n",&arr[0]);//这种方式也可以!
    
    return 0;
}
