//
//  main.m
//  c字符串
//
//  Created by ls on 2017/6/21.
//  Copyright © 2017年 yibuyimiao. All rights reserved.
//

#import <Foundation/Foundation.h>
#include <stdio.h>
#include <string.h>



int main(int argc, const char * argv[]) {
    @autoreleasepool {
        // insert code here...
        //NSLog(@"Hello, World!");
        
//        char greeting[6] = {'H','e','l','l','o','\0'};
//        printf("%s",greeting);
//        printf("\n");
//        char greet[] = "Hello";
//        printf("%s",greet);
//        printf("\n");
        
        char str1[12] = "Hello";
        char str2[12] = "World";
        char str3[12];
        int len ;
        
        // 将后面的字符串复制给前面
        strcpy(str3, str1);
        printf("strcat(str3,str1) : %s\n",str3);

        
        // 连接str1 和 str2
        strcat(str1, str2);
        printf("strcar(str1,str2) : %s\n",str1);
        
        // 连接后，str1的总长度
        
        len = (int)strlen(str1);
        printf("strlen(str1) : %d\n",len);
        
        
        
        
        
        
        
        
        
        
        
    }
    return 0;
}
