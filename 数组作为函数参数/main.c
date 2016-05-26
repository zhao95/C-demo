//
//  main.c
//  数组作为函数参数
//
//  Created by fudo on 16/4/14.
//  Copyright © 2016年 付栋. All rights reserved.
//

#include <stdio.h>

// 数组作为函数参数，可以省略元素个数
// 数组作为函数参数，传递是数组的首个元素地址，修改函数形参数组元素的值，会影响到外面的实参数组

void change(int array[])
{
    printf("array==%p\n", array);
    
    array[0] = 100;
}


int main(int argc, const char * argv[]) {
    
    int ages[6] = {10, 11, 10, 11, 10, 11};
    
    printf("ages==%p\n", ages);
    
    change(ages);
    
    printf("%d\n", ages[0]);
    
    return 0;
}
