//
//  main.c
//  冒泡算法
//
//  Created by ls on 2017/6/25.
//  Copyright © 2017年 yibuyimiao. All rights reserved.
//  http://blog.csdn.net/cbs612537/article/details/8294960/

// http://blog.csdn.net/cbs612537/article/details/8513723

#include <stdio.h>

static const int SIZE = 8;

void bubble_sort(int a[],int n);

void bubble_sort(int a[],int n){

    int i,j,temp;
    for (j = 0; j < n-1; j++) {
        
        for (i = 0 ; i < n-1-j; i++) {
            
            if (a[i] > a[i+1]) {
                
                temp = a[i];
                a[i] = a[i+1];
                a[i+1]= temp;
                
                }
            
            }
    }
}



int main(int argc, const char * argv[]) {
   
    
    int number[SIZE] = {95,45,78,84,51,24,12,15};
    
    int i;
    bubble_sort(number, SIZE);
    
    for (i = 0 ; i < SIZE; i++) {
        
        printf("%d",number[i]);
         printf("\n");
    }
    
    printf("\n");
    
    
    return 0;
}
