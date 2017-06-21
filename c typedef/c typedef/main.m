//
//  main.m
//  c typedef
//
//  Created by ls on 2017/6/21.
//  Copyright © 2017年 yibuyimiao. All rights reserved.
//

#import <Foundation/Foundation.h>
#include <stdio.h>
#include <string.h>


typedef struct Books{

    char title[50];
    char authhor[50];
    char subject[100];
    int  book_id;


} Book;




int main(int argc, const char * argv[]) {
    @autoreleasepool {
    
//        typedef unsigned char BYTE;
//        
//        BYTE b1,b2;
//        
//        typedef unsigned char  byte;
//        
//        byte b3,b4;
  
        Book book;
        
        strcpy(book.title, "C 教程");
        strcpy(book.authhor, "Runnoob");
        strcpy(book.subject, "编程语言");
        book.book_id =12345;
        
        printf("书标题 ： %s\n",book.title);
         printf("\n");
        printf("书作者 ： %s\n",book.authhor);
         printf("\n");
        printf("书类目 ： %s\n",book.subject);
         printf("\n");
        printf("书 ID : %d\n",book.book_id);
        printf("\n");
        
    
    
    }
    return 0;
}
