//
//  main.m
//  c 共用体
//
//  Created by ls on 2017/6/21.
//  Copyright © 2017年 yibuyimiao. All rights reserved.
//

#import <Foundation/Foundation.h>

union Data{
    
    int i;
    float f;
    char str[20];


};




int main(int argc, const char * argv[]) {
    @autoreleasepool {
        
        union Data data;
        
        //printf("Memory size occupied by data: %d\n",sizeof(data));
        
//        data.i = 10;
//        data.f = 220.5;
//        strcpy(data.str, "C Programming");
//        
//        printf("data.i : %d\n",data.i);
//        printf("data.f : %f\n",data.f);
//        printf("data.str : %s\n",data.str);
        
        // 同一时间只能用到一个成员
        data.i = 10;
        printf( "data.i : %d\n", data.i);
        
        data.f = 220.5;
        printf( "data.f : %f\n", data.f);
        
        strcpy( data.str, "C Programming");
        printf( "data.str : %s\n", data.str);
        
        // insert code here...
       // NSLog(@"Hello, World!");
    }
    return 0;
}
