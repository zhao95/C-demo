//
//  main.c
//  函数指针
//
//  Created by fudo on 16/4/13.
//  Copyright © 2016年 付栋. All rights reserved.
//

//定义一个指针函数
void add(int p)
{
    printf("%d\n",p);
}

int main(int argc, const char * argv[]) {
    
    void (*p1)(int p) //定义
    p1=add;
    add(3); //直接调用
    p1(3);  //用函数指针间接调用
    return 0;
}