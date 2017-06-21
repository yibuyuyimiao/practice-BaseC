//
//  main.m
//  c位域
//
//  Created by ls on 2017/6/21.
//  Copyright © 2017年 yibuyimiao. All rights reserved.
//

#import <Foundation/Foundation.h>
#include <string.h>
#include <stdio.h>

struct{

    unsigned int age : 3;

}Age;



// 定义位域结构
struct {

    unsigned int widthValidated : 1;
    unsigned int heightValidate : 1;
    
}status2;

// 定义简单的结构
struct {
    
    unsigned int widthValidated ;
    unsigned int heightValidate ;
    
}status1;


int main(int argc, const char * argv[]) {
    @autoreleasepool {
        
        Age.age = 4;
        printf( "Sizeof( Age ) : %lu\n", sizeof(Age) );
        printf( "Age.age : %d\n", Age.age );
        
        Age.age = 7;
        printf( "Age.age : %d\n", Age.age );
        
        Age.age = 8;
        printf( "Age.age : %d\n", Age.age );

        
        printf("Memory size occupied by status1 : %lu\n",sizeof(status1));
        printf("Memory size occupied by status2 : %lu\n",sizeof(status2));
        
    }
    return 0;
}
