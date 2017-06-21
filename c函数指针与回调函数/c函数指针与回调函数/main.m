//
//  main.m
//  c函数指针与回调函数
//
//  Created by ls on 2017/6/21.
//  Copyright © 2017年 yibuyimiao. All rights reserved.
//

#import <Foundation/Foundation.h>
#include <stdio.h>

// 回调函数，就是一个通过函数指针调用的函数，由别人的函数执行时调用你实现的函数

int max(int x,int y){

    return x > y ? x : y;

}

// 回调函数
void populate_array(int *array,size_t arraySize,int (*getNextValue)(void)){

    for (size_t i = 0; i<arraySize; i++) {
        
        array[i] = getNextValue();
    }



}

// 获取随机值
int getNextRandomValue(void){

    return rand();

}







int main(int argc, const char * argv[]) {
    @autoreleasepool {
    
//        int (*p)(int,int) = &max ;
//        
//        int a,b,c,d;
//        
//        printf("请输入三个数字");
//        
//        scanf("%d %d %d",&a,&b,&c);
//        
//        
//        d = p(p(a,b),c);
//        
//        printf("最大的数字是： %d\n",d);
        
        
        int myarray[10];
        
        populate_array(myarray, 10, getNextRandomValue);
        
        for (int i =0; i < 10; i++) {
            
            printf("\n");
            printf("%d",myarray[i]);
            printf("\n");
            
        }
        
        printf("\n");
        
        
        
        
        
    
    
    }
    return 0;
}
